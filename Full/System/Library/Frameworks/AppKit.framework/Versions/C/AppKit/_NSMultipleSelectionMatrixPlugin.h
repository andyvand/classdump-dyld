/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSMatrixPlugin.h>
#import <AppKit/_NSMultipleSelectionBinderPlugin.h>

@class NSString;

@interface _NSMultipleSelectionMatrixPlugin : _NSMatrixPlugin <_NSMultipleSelectionBinderPlugin> {

	struct {
		unsigned _testedMode : 1;
		unsigned _reservedMultipleSelectionMatrixPlugin : 31;
	}  _multipleSelectionMatrixPluginFlags;
	unsigned long long _mode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isUsableWithObject:(id)arg1 ;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(void)connectionWasEstablished:(id)arg1 ;
-(unsigned long long)allowedValueBindingMask;
-(void)showValue:(id)arg1 inObject:(id)arg2 ;
-(id)shownValueInObject:(id)arg1 ;
@end
