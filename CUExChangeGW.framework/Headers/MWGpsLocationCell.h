//
//  MWGpsLocationCell.h
//  Gateway_2_0
//
//  Created by mile on 2019/11/26.
//  Copyright © 2019 Mile. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^gpsLocationCellSelectCityBlock)(NSInteger index);
@interface MWGpsLocationCell : UITableViewCell
@property (nonatomic, strong) NSMutableArray <UIButton *>*buttonArr;

@property (nonatomic, copy) gpsLocationCellSelectCityBlock selectCityBlock;

- (void)setupData:(NSArray <NSString *>*)dataArr;

- (void)gpsLocationCellSelectCityBlock:(gpsLocationCellSelectCityBlock)block;
@end

NS_ASSUME_NONNULL_END
