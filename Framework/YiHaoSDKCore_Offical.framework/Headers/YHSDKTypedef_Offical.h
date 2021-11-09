//
//  YHSDKTypedef_Offical.h
//  YiHaoSDKCore_Offical
//
//  Created by 凌天子 on 2021/11/9.
//

#ifndef YHSDKTypedef_Offical_h
#define YHSDKTypedef_Offical_h

@class YHSDKPurchaseOrder;

typedef enum YHSDKAntiAddictionResult {
    YHSDKAntiAddictionResultBlocked     = 0,//不能玩了
    YHSDKAntiAddictionResultPassed      = 1,//可以玩
    YHSDKAntiAddictionResultForceLogout = 2 //强制登出
}YHSDKAntiAddictionResult;

typedef enum YHSDKReportType {
    YHSDKReportTypePlaceHolder        = 0,
    YHSDKReportTypeCreateRole         = 1,//创建角色上报
    YHSDKReportTypeRoleLogin          = 2,//角色登陆成功上报
    YHSDKReportTypeRoleLogout         = 3 //角色成功登出上报
}YHSDKReportType;

//YHSDKPurchaseResultWYPay说明 需要配合checkPurchaseStatus接口完成流程
typedef enum YHSDKPurchaseResult {
    YHSDKPurchaseResultUnknown      = 0,//未知
    YHSDKPurchaseResultSuccess      = 1,//成功
    YHSDKPurchaseResultFailure      = 2,//失败
    YHSDKPurchaseResultPurchased    = 3,//已经购买过了
    YHSDKPurchaseResultNotAuth      = 4,//用户没授权内购
    YHSDKPurchaseResultWYPay        = 5,//见上方说明
    YHSDKPurchaseResultNAProducts   = 6,//拉取苹果商品信息失败
    YHSDKPurchaseResultNOProducts   = 7,//没有找到对应商品
    YHSDKPurchaseResultNeedRetry    = 8 //有订单没处理完，需要等待其处理完毕后重试购买
}YHSDKPurchaseResult;

typedef enum YHSDKPurchaseOrderStatus {
    
    YHSDKPurchaseOrderStatusCreated         = 0,//订单已创建
    YHSDKPurchaseOrderStatusVerifiedProduct = 1,//此订单的商品id已通过苹果商店验证,找到有效的商品
    YHSDKPurchaseOrderStatusPurchasing      = 2,//此订单已提交至苹果服务器
    YHSDKPurchaseOrderStatusPurchased       = 3,//此订单已支付
    YHSDKPurchaseOrderStatusReceiptGotit    = 4,//此订单已获取到凭据
    YHSDKPurchaseOrderStatusReceiptVerified = 5,//此订单已验证凭据
    
}YHSDKPurchaseOrderStatus;

typedef void (^YHSDKScreenCompleteBlock)(void);
typedef void (^YHSDKLoginCompleteBlock)(NSMutableDictionary * userData);
typedef void (^YHSDKUserCenterClosedBlock)(void);
typedef void (^YHSDKUserInfoUpdatedBlock)(NSMutableDictionary * userData);
typedef void (^YHSDKPurchaseResultBlock)(YHSDKPurchaseResult result,NSString *msg,YHSDKPurchaseOrder * order);
typedef void (^YHSDKPurchaseValidateResultBlock)(YHSDKPurchaseResult result,NSString *msg,YHSDKPurchaseOrder * order);
typedef void (^YHSDKAntiAddictionResultBlock)(YHSDKAntiAddictionResult result,NSString *account);
typedef void (^YHSDKPurchaseObserveBlock)(YHSDKPurchaseOrder * order);

#endif /* YHSDKTypedef_Offical_h */
