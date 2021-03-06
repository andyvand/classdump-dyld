/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSValueBinder.h>

@class NSColor;

@interface NSTextValueBinder : NSValueBinder {

	struct {
		unsigned _objectSupportsTextColor : 1;
		unsigned _hasRequestedTextColor : 1;
		unsigned _reservedTextBinder : 30;
	}  _textBinderFlags;
	NSColor* _originalColor;
	NSColor* _nullColor;
	NSColor* _noSelectionColor;
	NSColor* _multipleValuesSelectionColor;
	NSColor* _notApplicableColor;
	id _textColorBinder;

}
+(id)binderClassesSuperseded;
+(id)defaultTextColorWhenObjectValueIsUsed:(id)arg1 ;
+(void)setDefaultTextColor:(id)arg1 whenObjectValueIsUsed:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(void)_connectionWasEstablished;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(void)_dealloc;
-(void)_setObject:(id)arg1 ;
-(void)_clearDependenciesWithAllPeerBinders;
-(void)_noticeTextColorPeerBinder:(id)arg1 ;
-(id)textColorWhenObjectValueIsUsed:(id)arg1 ;
-(void)setTextColor:(id)arg1 whenObjectValueIsUsed:(id)arg2 ;
-(void)_startChanging;
-(void)_adjustTextColorOfObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 ;
-(void)_endChanging;
@end

