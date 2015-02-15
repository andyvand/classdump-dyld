/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface AMImageRegistry : NSObject {

	NSCache* _imageCache;

}
+(id)sharedImageRegistry;
+(id)progressImage;
+(id)successImage;
+(id)errorImage;
+(id)warningImage;
+(id)resizeImage;
-(id)imageForURL:(id)arg1 size:(int)arg2 ;
-(id)imageFromSystemNamed:(id)arg1 size:(int)arg2 ;
-(id)iconForFileType:(id)arg1 size:(int)arg2 ;
-(id)imageFromFrameworkNamed:(id)arg1 type:(id)arg2 size:(int)arg3 ;
-(id)imageFromAutomatorApplicationNamed:(id)arg1 size:(int)arg2 ;
-(id)_imageForKey:(id)arg1 size:(int)arg2 generatorBlock:(/*^block*/id)arg3 ;
-(id)_bundleIdentifierForApplicationNamed:(id)arg1 ;
-(id)iconForApplicationWithIdentifier:(id)arg1 size:(int)arg2 ;
-(id)iconForApplicationName:(id)arg1 size:(int)arg2 ;
-(id)init;
-(void)dealloc;
@end
