/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/SharingPref.prefPane/Contents/Resources/RemoteDesktop.bundle/Contents/MacOS/RemoteDesktop
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle;

@interface ARDVersionController : NSObject {

	double _bundleVersion;
	NSBundle* _sharingBundle;

}
+(id)sharedARDVersionController;
-(id)locString:(id)arg1 ;
-(void)setSharingBundle:(id)arg1 ;
-(id)sharingBundle;
-(char)newerThen2Point0;
-(double)bundleVersion;
-(void)setBundleVersion:(double)arg1 ;
-(double)currentVersion;
@end

