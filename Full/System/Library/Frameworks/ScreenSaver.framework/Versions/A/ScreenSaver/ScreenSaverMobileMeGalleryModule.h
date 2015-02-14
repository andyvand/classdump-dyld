/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <ScreenSaver/ScreenSaverImagesModule.h>
#import <ScreenSaver/NSCopying.h>

@class NSString, NSURL, NSArray;

@interface ScreenSaverMobileMeGalleryModule : ScreenSaverImagesModule <NSCopying> {

	NSString* _memberName;
	NSURL* _feedURL;
	NSArray* _albums;

}
+(id)mobileMeGalleryModuleFromSubscription:(id)arg1 ;
+(id)mobileMeGalleryModuleWithMemberName:(id)arg1 ;
-(id)albums;
-(char)isSlideshow;
-(char)requiresGraphicsAcceleration;
-(void)_setMemberName:(id)arg1 ;
-(void)setAlbums:(id)arg1 ;
-(id)memberName;
-(void)dealloc;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
@end

