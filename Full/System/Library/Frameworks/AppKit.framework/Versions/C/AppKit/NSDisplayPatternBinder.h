/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@class NSString;

@interface NSDisplayPatternBinder : NSBinder {

	NSString* _displayPattern;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
+(id)_enumeratedDisplayPatternTitleBindings:(unsigned long long)arg1 ;
+(id)_cellOrControlForObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(void)_connectionWasEstablished;
-(char)isBindingReadOnly:(id)arg1 ;
-(void)removeBinding:(id)arg1 ;
-(id)availableBindings;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(void)_dealloc;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)_handleObservingRefresh;
-(void)_connectionWasBroken;
-(void)setDisplayPattern:(id)arg1 ;
-(id)displayPattern;
-(id)_patternForBinding:(id)arg1 ;
-(void)_setDisplayValue:(id)arg1 object:(id)arg2 triggerRedisplay:(char)arg3 ;
-(void)_adjustObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 triggerRedisplay:(char)arg3 ;
@end

