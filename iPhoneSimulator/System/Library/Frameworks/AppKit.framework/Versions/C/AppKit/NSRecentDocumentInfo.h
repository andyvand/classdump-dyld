/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString, NSImage;


@protocol NSRecentDocumentInfo <NSObject>
@property (readonly) NSURL * URL; 
@property (readonly) NSString * displayName; 
@property (readonly) NSImage * icon; 
@property (readonly) long long state; 
@required
-(NSURL *)URL;
-(long long)state;
-(NSImage *)icon;
-(NSString *)displayName;
-(void)resolveURLWithCompletionHandler:(/*^block*/id)arg1;

@end
