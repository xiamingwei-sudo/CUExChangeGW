//
//  CUCityBtnCell.h
//  CUExChangeGW
//
//  Created by mile on 2021/1/29.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^topToolsCellSelectCityBlock)(NSInteger index);
@interface CUCityBtnCell : UITableViewCell

@property (nonatomic, strong) NSMutableArray <UIButton *>*buttonArr;

@property (nonatomic, copy) topToolsCellSelectCityBlock selectCityBlock;

- (void)setupData:(NSArray <NSString *>*)dataArr;

- (void)topToolsCellSelectCityBlock:(topToolsCellSelectCityBlock)block;
@end

NS_ASSUME_NONNULL_END
