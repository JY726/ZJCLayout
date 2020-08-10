//
//  UIView+ZJCAddition.h
//  ZJCLayout
//
//  Created by 林继沅 on 2020/7/29.
//  Copyright © 2020 test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZJCViewAttribute.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ZJCAddition)

@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_left;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_top;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_right;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_bottom;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_leading;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_trailing;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_width;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_height;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_centerX;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_centerY;
@property (nonatomic, strong, readonly) ZJCViewAttribute *zjc_baseline;

/************************* 常用特殊布局 **************************/

- (void)equal_size:(CGSize)size;

- (void)equal_viewSize:(UIView *)view;

- (void)equal_center:(CGPoint)center;

- (void)equal_viewCenter:(UIView *)view;

- (void)equal_edges:(UIEdgeInsets)edges;

- (void)equal_viewEdges:(UIView *)view insets:(UIEdgeInsets)edges;

@end

NS_ASSUME_NONNULL_END
