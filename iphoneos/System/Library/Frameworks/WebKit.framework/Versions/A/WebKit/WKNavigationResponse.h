/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKFrameInfo, NSURLRequest, NSURLResponse;

@interface WKNavigationResponse : NSObject {

	RetainPtr<WKFrameInfo>* _frame;
	RetainPtr<NSURLRequest>* _request;
	RetainPtr<NSURLResponse>* _response;
	char _canShowMIMEType;

}

@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,readonly) NSURLRequest * _request; 
@property (getter=isForMainFrame,nonatomic,readonly) char forMainFrame; 
@property (nonatomic,copy) NSURLResponse * response; 
@property (assign,nonatomic) char canShowMIMEType;                                   //@synthesize canShowMIMEType=_canShowMIMEType - In the implementation block
-(NSURLRequest *)_request;
-(char)isForMainFrame;
-(char)canShowMIMEType;
-(void)setCanShowMIMEType:(char)arg1 ;
-(WKFrameInfo *)_frame;
-(id)description;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLResponse *)response;
@end

