/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>
#import <AppKit/NSCoding.h>

@class NSDictionary;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding> {

	CGRect _rect;
	id _owner;
	NSDictionary* _userInfo;
	unsigned long long _options;
	long long _privateFlags;
	id _reserved;

}

@property (readonly) CGRect rect; 
@property (readonly) unsigned long long options; 
@property (readonly) id owner; 
@property (copy,readonly) NSDictionary * userInfo; 
+(void)initialize;
+(char)_isTrackingAreaObject:(id)arg1 ;
+(void)_releaseTrackingTag:(long long)arg1 ;
+(void)_autoreleaseTrackingTag:(long long)arg1 ;
+(void)_retainTrackingTag:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(char)_removed;
-(void)_mouseEntered:(id)arg1 ;
-(void)_mouseExited:(id)arg1 ;
-(CGRect)rect;
-(id)initWithRect:(CGRect)arg1 options:(unsigned long long)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)mouseMoved:(id)arg1 ;
-(void)_setEnabled:(char)arg1 ;
-(id)owner;
-(void*)_userInfo;
-(void)_setRect:(CGRect)arg1 ;
-(void)_setInstallPending:(char)arg1 ;
-(char)_installed;
-(void)_setUninstallPending:(char)arg1 ;
-(void)_forceInternalMouseExitIfNeeded;
-(void)_setRemoved:(char)arg1 ;
-(char)_enabled;
-(char)_installPending;
-(void)_setInstalled:(char)arg1 ;
-(void)_sendMouseCancelledFromWindow:(id)arg1 ;
-(char)_uninstallPending;
-(void)_dispatchMouseEntered:(id)arg1 ;
-(void)_installDelayedRolloverForMouseEnteredEvent:(id)arg1 ;
-(void)_dispatchMouseExited:(id)arg1 ;
-(void)_internalMouseExitedWork;
-(void)_doWork:(/*^block*/id)arg1 ;
@end

