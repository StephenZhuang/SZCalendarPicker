//
//  SZCalendarPicker.h
//  SZCalendarPicker
//
//  Created by Stephen Zhuang on 14/12/1.
//  Copyright (c) 2014年 Stephen Zhuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SZCalendarPicker : UIView<UICollectionViewDelegate , UICollectionViewDataSource>
@property (nonatomic , weak) IBOutlet UICollectionView *collectionView;
@property (nonatomic , weak) IBOutlet UILabel *monthLabel;
@property (nonatomic , weak) IBOutlet UIButton *previousButton;
@property (nonatomic , weak) IBOutlet UIButton *nextButton;
@property (nonatomic , strong) NSDate *date;
@property (nonatomic , strong) NSDate *today;
@property (nonatomic , strong) NSArray *weekDayArray;
@property (nonatomic , strong) UIView *mask;
@property (nonatomic, copy) void(^calendarBlock)(NSInteger day, NSInteger month, NSInteger year);

+ (instancetype)showOnView:(UIView *)view;
@end
