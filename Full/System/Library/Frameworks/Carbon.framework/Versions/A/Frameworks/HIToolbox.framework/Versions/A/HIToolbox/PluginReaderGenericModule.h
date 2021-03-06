/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:09 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSString;

@interface PluginReaderGenericModule : NSObject {

	NSMutableDictionary* _inputMethodInformation;
	NSDictionary* _wordList;
	NSString* _fileName;

}
-(char)parse;
-(char)parseForBasicProperties;
-(id)inputMethodInformation;
-(void)_setModeInformation;
-(id)initForBasicProperties;
-(void)setInputSourceID:(id)arg1 ;
-(void)setInputModeID:(id)arg1 ;
-(void)setLocalizedName:(id)arg1 ;
-(void)setIntendedLanguage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)dictionary;
@end

