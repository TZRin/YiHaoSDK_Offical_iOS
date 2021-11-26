//
//  YHSDKOrderModel.h
//  SDKCore
//
//  Created by 老同志 on 2021/8/31.
//

#import <Foundation/Foundation.h>
#import "YHSDKTypedef_Offical.h"

@interface YHSDKPurchaseOrder : NSObject

/// 商品id，ios内购id
@property (copy, nonatomic) NSString * goods_id;

/// 商品名称
@property (copy, nonatomic) NSString * goods_name;

/// 金额（元）
@property (copy, nonatomic) NSString * amount;

/// CP方订单号
@property (copy, nonatomic) NSString * game_trade_no;

/// 服务器id
@property (copy, nonatomic) NSString * server_id;

/// 服务器名称
@property (copy, nonatomic) NSString * server_name;

/// 游戏角色唯一id
@property (copy, nonatomic) NSString * role_id;

/// 游戏角色昵称
@property (copy, nonatomic) NSString * role_name;

/// 角色等级
@property (copy, nonatomic) NSString * role_level;

/// 创建订单返回订单号
@property (copy, nonatomic) NSString * trade_no;

/// 透传参数,建议json格式
@property (copy, nonatomic) NSString * userInfo;

/// 订单状态,sdk用,无需传入
@property (assign, nonatomic) YHSDKPurchaseOrderStatus status;

@end
