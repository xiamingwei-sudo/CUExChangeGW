//
//  CUWkWebController.h
//  CUExChangeGW
//
//  Created by mile on 2021/2/24.
//

#import "CHWebViewController.h"
NS_ASSUME_NONNULL_BEGIN

@interface CUWkWebController : CHWebViewController

@property (nonatomic, assign)BOOL showNav;
@property (nonatomic, copy)void (^toBandinfo)(NSString *info);
@property (nonatomic, copy)void (^locationInfoCallback)(NSString *info);
@property (nonatomic, copy)void (^tolocalSettinCallback)(NSString *info);
@end

NS_ASSUME_NONNULL_END
