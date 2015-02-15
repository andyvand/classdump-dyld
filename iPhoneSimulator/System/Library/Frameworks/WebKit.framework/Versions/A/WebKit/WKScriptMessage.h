/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKWebView, WKFrameInfo, NSString;

@interface WKScriptMessage : NSObject {

	RetainPtr<id>* _body;
	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<WKFrameInfo>* _frameInfo;
	RetainPtr<NSString>* _name;

}

@property (nonatomic,copy,readonly) id body; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (nonatomic,copy,readonly) WKFrameInfo * frameInfo; 
@property (nonatomic,copy,readonly) NSString * name; 
-(id)body;
-(WKWebView *)webView;
-(id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4 ;
-(WKFrameInfo *)frameInfo;
-(NSString *)name;
@end

