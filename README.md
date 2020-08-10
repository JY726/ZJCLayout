## ZJCLayout使用文档

###简介
##### ZJCLayout是基于Masonry框架的基础上，对Masonry的二次封装，归纳总结了一些常用的布局方法。

###安装
1、在你的Podfile中添加

`pod 'Masonry'`
	
2、将ZJCLayout.framework拖入项目中

3、在需要使用布局的文件中使用引入头文件

`#import <ZJCLayout/ZJCLayout.h>`

###使用介绍

#####1、ZJCViewAttribute
|   ZJCViewAttribute   |   NSLayoutAttribute   |
|  ----  | ----  |
| view.zjc_left  | NSLayoutAttributeLeft |
| view.zjc_right  | NSLayoutAttributeRight |
| view.zjc_top  | NSLayoutAttributeTop |
| view.zjc_bottom  | NSLayoutAttributeBottom |
| view.zjc_leading  | NSLayoutAttributeLeading |
| view.zjc_trailing  | NSLayoutAttributeTrailing |
| view.zjc_width  | NSLayoutAttributeWidth |
| view.zjc_height  | NSLayoutAttributeHeight |
| view.zjc_centerX  | NSLayoutAttributeCenterX |
| view.zjc_centerY  | NSLayoutAttributeCenterY |
| view.zjc_baseline  | NSLayoutAttributeBaseline |

#####2、基础布局方式
`[view1.zjc_top equal:view2.zjc_top offset:10];`
`[view1.zjc_height equal:view2];`
`[view1.zjc_left equal:view2. zjc_left];`
`[view1.zjc_width equalViews:@[view2, view3]];`

此处列举的只是一部分方法，更多方法可以查看ZJCViewAttribute.h头文件

#####3、一些特殊常用布局方式
`[view1 equal_size:CGSizeMake(150, 300)];`
`[view1 equal_viewSize: view2];`
`[view1 equal_viewCenter:view2];`
`[view1 equal_viewEdges:view2 insets:UIEdgeInsetsMake(10, 10, 10, 10)];`

更多方法可以查看UIView+ZJCAddition.h头文件


