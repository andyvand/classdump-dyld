/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IKSlideshowExporter : NSObject
+(id)sharedSlideshowExporter;
-(char)exportFileArray:(id)arg1 toApplication:(id)arg2 utType:(id)arg3 ;
-(char)canExportToApplication:(id)arg1 ;
-(char)exportItem:(id)arg1 toApplication:(id)arg2 ;
-(char)pathIsOnBootVolume:(id)arg1 ;
-(id)sampleJPG_URL;
-(char)canExportToApp:(id)arg1 appURL:(id)arg2 newInfo:(id)arg3 ;
-(id)applicationInfo:(id)arg1 ;
-(char)exportURLArrayToPhotos:(id)arg1 ;
-(char)exportURLArray:(id)arg1 toApplication:(id)arg2 utType:(id)arg3 ;
-(void)addItem:(id)arg1 toFileArray:(id)arg2 ;
-(id)init;
@end

