/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@class NSImage;

@interface ADMGuestUserConfig : NSObject {

	NSImage* mDefaultGuestPicture;

}
+(id)sharedConfig;
+(void)setGuestEnabled:(char)arg1 ;
+(char)isGuestEnabled;
+(long long)guestMode;
+(void)syncGuestState;
-(char)isGuestAccountEnabled;
-(void)setGuestAccountEnabled:(char)arg1 ;
-(id)findGuestAccount;
-(id)createGuestAccount;
-(id)_generateGuestPassword;
-(id)guestUserPicture;
-(id)_imageFromCGImage1x:(CGImageRef)arg1 andCGImage2x:(CGImageRef)arg2 ;
-(id)init;
-(void)dealloc;
@end

