/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:09:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol QLPreviewItem <NSObject>
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) id previewItemDisplayState; 
@optional
-(NSString *)previewItemTitle;
-(id)previewItemDisplayState;

@required
-(NSURL *)previewItemURL;

@end

