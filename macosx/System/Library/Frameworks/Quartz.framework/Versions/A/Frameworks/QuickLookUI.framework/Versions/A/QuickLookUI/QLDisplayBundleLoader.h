/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {

	NSMutableDictionary* _displayBundlesById;

}
+(id)sharedLoader;
-(id)newPreviewDocumentDisplayBundleForPreview:(QLPreviewRef)arg1 ;
-(void)registerDisplayBundle:(id)arg1 withBundleIdentifier:(id)arg2 ;
-(void)_lookForDisplayBundles;
-(Class)loadDisplayBundle:(id)arg1 ;
-(id)displayBundleForPreview:(QLPreviewRef)arg1 owner:(id)arg2 forcedDisplayBundleID:(id)arg3 ;
-(Class)displayBundleClassForDisplayBundleID:(id)arg1 ;
-(id)displayBundleForPreview:(QLPreviewRef)arg1 owner:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

