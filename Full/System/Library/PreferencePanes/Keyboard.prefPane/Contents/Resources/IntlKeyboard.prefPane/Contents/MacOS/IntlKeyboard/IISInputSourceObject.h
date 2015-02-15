/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Keyboard.prefPane/Contents/Resources/IntlKeyboard.prefPane/Contents/MacOS/IntlKeyboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IntlKeyboard/IntlKeyboard-Structs.h>
@class NSString, NSImage, NSSet, NSColor;

@interface IISInputSourceObject : NSObject {

	TISInputSourceRef _inputSourceRef;
	TISInputSourceRef _parentInputSourceRef;
	char _isInputMode;
	char _isChineseHandwriting;
	char _isPluginIM;
	char _isSystemProvided;
	char _enable;
	char _allowToChangeEnablingState;
	char _shouldDrawSeparator;
	NSString* _localizedInputSourceName;
	NSString* _inputSourceID;
	NSString* _bundleID;
	NSImage* _iconImage;
	NSString* _languageCode;
	NSString* _localizedLanguage;
	NSSet* _metaData;

}

@property (readonly) IISInputSourceObject * parentInputSource; 
@property (readonly) char isInputMode;                                      //@synthesize isInputMode=_isInputMode - In the implementation block
@property (readonly) char isChineseHandwriting;                             //@synthesize isChineseHandwriting=_isChineseHandwriting - In the implementation block
@property (readonly) char isPluginIM;                                       //@synthesize isPluginIM=_isPluginIM - In the implementation block
@property (readonly) char isSystemProvided;                                 //@synthesize isSystemProvided=_isSystemProvided - In the implementation block
@property (readonly) char supportDirectionRightToLeft; 
@property (assign) char enable;                                             //@synthesize enable=_enable - In the implementation block
@property (assign) char allowToChangeEnablingState;                         //@synthesize allowToChangeEnablingState=_allowToChangeEnablingState - In the implementation block
@property (readonly) char shouldGrayOutInputSourceItem; 
@property (retain,readonly) NSColor * textColor; 
@property (assign) char shouldDrawSeparator;                                //@synthesize shouldDrawSeparator=_shouldDrawSeparator - In the implementation block
@property (copy,readonly) NSString * localizedInputSourceName;              //@synthesize localizedInputSourceName=_localizedInputSourceName - In the implementation block
@property (copy,readonly) NSString * inputSourceID;                         //@synthesize inputSourceID=_inputSourceID - In the implementation block
@property (copy,readonly) NSString * bundleID;                              //@synthesize bundleID=_bundleID - In the implementation block
@property (retain,readonly) NSImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (copy,readonly) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (copy,readonly) NSString * localizedLanguage;                     //@synthesize localizedLanguage=_localizedLanguage - In the implementation block
@property (retain,readonly) NSSet * metaData;                               //@synthesize metaData=_metaData - In the implementation block
-(char)isChineseHandwriting;
-(IISInputSourceObject *)parentInputSource;
-(char)allowToChangeEnablingState;
-(id)initWithInputSource:(TISInputSourceRef)arg1 parentInputSource:(TISInputSourceRef)arg2 ;
-(char)isInputMode;
-(char)isPluginIM;
-(NSString *)localizedInputSourceName;
-(char)isSystemProvided;
-(char)supportDirectionRightToLeft;
-(char)shouldGrayOutInputSourceItem;
-(NSString *)localizedLanguage;
-(void)setAllowToChangeEnablingState:(char)arg1 ;
-(NSSet *)metaData;
-(void)setShouldDrawSeparator:(char)arg1 ;
-(NSString *)bundleID;
-(NSString *)languageCode;
-(NSString *)inputSourceID;
-(NSImage *)iconImage;
-(void)setEnable:(char)arg1 ;
-(void)dealloc;
-(NSColor *)textColor;
-(char)shouldDrawSeparator;
-(char)enable;
@end
