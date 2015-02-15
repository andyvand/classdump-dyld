/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPageGroup> _pageGroup;

}

@property (readonly) OpaqueWKPageGroupRef _pageGroupRef; 
@property (assign) char allowsJavaScript; 
@property (assign) char allowsPlugIns; 
@property (assign) char privateBrowsingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)setPrivateBrowsingEnabled:(char)arg1 ;
-(Object*)_apiObject;
-(void)removeAllUserScripts;
-(char)allowsJavaScript;
-(void)setAllowsJavaScript:(char)arg1 ;
-(char)allowsJavaScriptMarkup;
-(void)setAllowsJavaScriptMarkup:(char)arg1 ;
-(char)allowsPlugIns;
-(void)setAllowsPlugIns:(char)arg1 ;
-(char)privateBrowsingEnabled;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(char)arg5 ;
-(void)removeAllUserStyleSheets;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(char)arg6 ;
-(OpaqueWKPageGroupRef)_pageGroupRef;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
@end

