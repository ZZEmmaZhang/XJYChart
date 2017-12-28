//
//  XBarChart.h
//  RecordLife
//
//  Created by 谢俊逸 on 16/03/2017.
//  Copyright © 2017 谢俊逸. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XBarItem.h"

@protocol XBarChartDelegate<NSObject>
/// touch bar idx
- (void)touchBarAtIdx:(NSUInteger)idx;

@end

@interface XBarChart : UIView

// delegate
@property(nonatomic, strong) id<XBarChartDelegate> barChartDeleagte;

/**
 初始化方法

 @param frame frame
 @param dataItemArray items
 @param topNumbser top
 @param bottomNumber buttom
 @return instancetype
 */
- (instancetype)initWithFrame:(CGRect)frame
                dataItemArray:(NSMutableArray<XBarItem*>*)dataItemArray
                    topNumber:(NSNumber*)topNumbser
                 bottomNumber:(NSNumber*)bottomNumber;

/**
 dataItemArray
 */
@property(nonatomic, strong) NSMutableArray<XBarItem*>* dataItemArray;

/**
 纵坐标最高点
 */
@property(nonatomic, strong) NSNumber* top;

/**
 纵坐标最低点
 */
@property(nonatomic, strong) NSNumber* bottom;

/**
 ChartBackground color
 */
@property(nonatomic, strong) UIColor* chartBackgroundColor;

@end