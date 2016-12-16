//
//  EJURouterSDKDefine.h
//  Pods
//
//  Created by 施澍 on 2016/11/25.
//
//

#ifndef EJURouterSDKDefine_h
#define EJURouterSDKDefine_h


/**
 响应码

 - EJURouterResponseStatusCodeSuccess:        成功
 - EJURouterResponseStatusCodeWrongParameter: 参数错误
 - EJURouterResponseStatusCodePageNotFound:   页面未找到
 - EJURouterResponseStatusCodeUnknownError:   未知错误
 */
typedef NS_ENUM(NSUInteger, EJURouterResponseStatusCode) {
    EJURouterResponseStatusCodeSuccess          = 0x0,
    EJURouterResponseStatusCodeWrongParameter   = 0x1,
    EJURouterResponseStatusCodePageNotFound     = 0x2,
    EJURouterResponseStatusCodeUnknownError     = 0x3,
};


/**
 页面类型

 - EJURouterPageTypeNative:    原生页面
 - EJURouterPageTypeLocalHtml: 本地Html文件
 - EJURouterPageTypeWeb:       在线网页
 */
typedef NS_ENUM(NSInteger, EJURouterPageType) {
    EJURouterPageTypeNative                     = 0,
    EJURouterPageTypeLocalHtml                  = 1,
    EJURouterPageTypeWeb                        = 2,
    EJURouterPageTypeUnknown                    = -1,
};

typedef void(^EJURouterCompletionBlock)(UIViewController *vc, EJURouterResponseStatusCode resultCode);

#endif /* EJURouterSDKDefine_h */
