/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSBinderPlugin.h>
#import <AppKit/_NSDisplayFontBinderPlugin.h>

@protocol _NSDisplayFontBinderPlugin <_NSBinderPlugin>
@required
-(id)fontInvalidationCapableObjectForObject:(id)arg1;

@end


@class NSString;

@interface _NSDisplayFontBinderPlugin : _NSBinderPlugin <_NSDisplayFontBinderPlugin> {

	struct {
		unsigned _isFontInvalidationCapable : 1;
		unsigned _reservedDisplayFontBinderPlugin : 31;
	}  _displayFontBinderPluginFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isUsableWithObject:(id)arg1 ;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(id)fontInvalidationCapableObjectForObject:(id)arg1 ;
@end

