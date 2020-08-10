//
//  ZJCViewAttribute.h
//  ZJCLayout
//
//  Created by 林继沅 on 2020/7/29.
//  Copyright © 2020 test. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ZJCAttribute) {
    ZJCAttributeLeft,
    ZJCAttributeTop,
    ZJCAttributeRight,
    ZJCAttributeBottom,
    ZJCAttributeLeading,
    ZJCAttributeTrailing,
    ZJCAttributeWidth,
    ZJCAttributeHeight,
    ZJCAttributeCenterY,
    ZJCAttributeCenterX,
    ZJCAttributeBaseline
};

NS_ASSUME_NONNULL_BEGIN

@interface ZJCViewAttribute : NSObject

@property(nonatomic, assign, readonly) ZJCAttribute attribute;

@property(nonatomic, strong, readonly) UIView *view;

- (id)initWithView:(UIView *)view attribute:(ZJCAttribute)attribute;

- (void)equal:(id)content offset:(CGFloat)offset multipliedBy:(CGFloat)multiplier;

- (void)equal:(id)content offset:(CGFloat)offset;

- (void)equal:(id)content;

- (void)zjc_equal:(CGFloat)value;

- (void)greaterThanOrEqual:(id)content offset:(CGFloat)offset multipliedBy:(CGFloat)multiplier;

- (void)greaterThanOrEqual:(id)content offset:(CGFloat)offset;

- (void)greaterThanOrEqual:(id)content;

- (void)zjc_greaterThanOrEqual:(CGFloat)value;

- (void)lessThanOrEqual:(id)content offset:(CGFloat)offset multipliedBy:(CGFloat)multiplier;

- (void)lessThanOrEqual:(id)content offset:(CGFloat)offset;

- (void)lessThanOrEqual:(id)content;

- (void)zjc_lessThanOrEqual:(CGFloat)value;


- (void)equalViews:(NSArray *)views;

@end

NS_ASSUME_NONNULL_END
