/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSURL, NSArray, _WKFrameHandle, NSString;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {

	ObjectStorage<WebKit::WebFrame> _frame;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * childFrames; 
@property (nonatomic,readonly) char containsAnyFormElements; 
@property (nonatomic,readonly) _WKFrameHandle * handle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpFrameFromHandle:(id)arg1 ;
-(char)containsAnyFormElements;
-(_WKFrameHandle *)handle;
-(Object*)_apiObject;
-(id)_certificateChain;
-(id)jsContextForWorld:(id)arg1 ;
-(id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)_browserContextController;
-(NSArray *)childFrames;
-(char)_hasCustomContentProvider;
-(id)_provisionalURL;
-(void)dealloc;
-(NSURL *)URL;
-(id)hitTest:(CGPoint)arg1 ;
@end

