/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSURLRequest, WKWebView, NSString;

@interface _WKDownload : NSObject <WKObject> {

	ObjectStorage<WebKit::DownloadProxy> _download;
	WeakObjCPtr<WKWebView> _originatingWebView;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (assign,nonatomic,__weak) WKWebView * originatingWebView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSURLRequest *)request;
-(Object*)_apiObject;
-(WKWebView *)originatingWebView;
-(void)setOriginatingWebView:(WKWebView *)arg1 ;
-(void)dealloc;
-(void)cancel;
@end

