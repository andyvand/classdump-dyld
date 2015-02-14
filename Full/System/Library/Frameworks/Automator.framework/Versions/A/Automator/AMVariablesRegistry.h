/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface AMVariablesRegistry : NSObject {

	NSMutableDictionary* _variables;
	NSMutableDictionary* _variablesByCategory;
	NSMutableDictionary* _variablesByApplication;
	NSMutableArray* _customVariables;
	NSMutableDictionary* _variableIdentifiers;
	char _didLoadAllVariables;

}
+(id)sharedVariablesRegistry;
+(id)iconForVariableWithIdentifier:(id)arg1 ;
+(id)largeIconForVariableWithIdentifier:(id)arg1 ;
+(id)pathForLargeIconForVariableWithIdentifier:(id)arg1 ;
-(id)variableWithUUID:(id)arg1 ;
-(void)addVariable:(id)arg1 ;
-(id)builtInVariableIdentifiers;
-(id)variableWithIdentifier:(id)arg1 ;
-(void)loadAllVariables;
-(void)loadVariablesFromDisk;
-(void)addVariablesWithPropertyLists:(id)arg1 ;
-(void)mapVariableIdentifiersToSelectorAndNames;
-(void)calculateVariablesByCategory;
-(void)calculateVariablesByApplication;
-(void)_mapDateAndTimeVariableIdentifiers;
-(void)_mapLocationsVariableIdentifiers;
-(void)_mapSystemVariableIdentifiers;
-(void)_mapUserVariableIdentifiers;
-(void)_mapUtilitiesVariableIdentifiers;
-(id)templateVariableIdentifiers;
-(void)createTemplateVariables;
-(void)createBuiltInVariables;
-(void)loadVariablesByApplication;
-(void)_setupVariable:(id)arg1 ;
-(void)addVariables:(id)arg1 ;
-(void)removeVariables:(id)arg1 ;
-(id)variableWithAllChildrenWithUUID:(id)arg1 ;
-(id)userVariableIdentifiers;
-(id)dateAndTimeVariableIdentifiers;
-(id)locationsVariableIdentifiers;
-(id)systemVariableIdentifiers;
-(id)textAndDataVariableIdentifiers;
-(id)utilitiesVariableIdentifiers;
-(char)didLoadAllVariables;
-(id)variablesByCategory;
-(id)variablesByApplication;
-(id)variableIdentifiers;
-(id)customVariables;
-(id)variableWithName:(id)arg1 identifier:(id)arg2 value:(id)arg3 ;
-(void)addCustomVariableDictionary:(id)arg1 ;
-(void)reallyAddVariables:(id)arg1 ;
-(void)reallyRemoveVariables:(id)arg1 ;
-(void)removeVariable:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)variables;
@end

