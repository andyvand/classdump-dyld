/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AMGenericActionLoader : NSObject
+(id)sharedGenericActionLoader;
-(id)definedActionWithGenericActionBundle:(id)arg1 applicationDefinition:(id)arg2 ;
-(id)actionsFromApplicationDefinition:(id)arg1 ;
-(id)cachingDictionaryForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 applicationDefinition:(id)arg2 ;
-(id)actionIconForDefinition:(id)arg1 large:(char)arg2 ;
-(id)localizedApplicationNamesForValue:(id)arg1 fromBundle:(id)arg2 ;
-(void)setupGenericAction:(id)arg1 iconsWithDefinition:(id)arg2 ;
-(id)definedActionWithGenericActionBundle:(id)arg1 tigerApplicationDefinition:(id)arg2 ;
-(id)definedActionWithGenericActionBundle:(id)arg1 leopardApplicationDefinition:(id)arg2 ;
-(id)keywordsForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 tigerApplicationDefinition:(id)arg2 ;
-(id)keywordsForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 leopardApplicationDefinition:(id)arg2 ;
-(id)nameForDefinedActionWithGenericActionBundleIdentifier:(id)arg1 applicationDefinition:(id)arg2 ;
-(char)optionalKeyValueForGenericActionBundleIdentifier:(id)arg1 ;
-(id)genericActionBundleIdentiferForLeopardKey:(id)arg1 ;
-(id)genericActionBundleIdentiferForTigerKey:(id)arg1 ;
-(id)actionsFromLeopardApplicationDefinition:(id)arg1 ;
-(id)actionsFromTigerApplicationDefinition:(id)arg1 ;
@end

