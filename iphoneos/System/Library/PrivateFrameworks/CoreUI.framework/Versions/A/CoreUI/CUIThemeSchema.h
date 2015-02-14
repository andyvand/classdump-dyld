/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIThemeSchema : NSObject
+(id)schemaForPlatform:(long long)arg1 ;
+(id)defaultSchema;
-(long long)schemaVersion;
-(const SCD_Struct_CU32*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU35*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU35*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)partDefinitionCountForElementDefinition:(const SCD_Struct_CU35*)arg1 ;
-(unsigned long long)dimensionDefinitionCountForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU35*)elementDefinitionWithName:(id)arg1 ;
-(const SCD_Struct_CU34*)partDefinitionWithName:(id)arg1 forElementDefinition:(const SCD_Struct_CU35*)arg2 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU34*)partDefinitionForWidgetName:(id)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
-(void)enumerateAvailableThemeAttributesInPartDefinition:(const SCD_Struct_CU34*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const SCD_Struct_CU34*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(const SCD_Struct_CU32*)categoryForElementDefinition:(const SCD_Struct_CU35*)arg1 ;
-(const SCD_Struct_CU35*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU35*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU35*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(unsigned long long)partDefinitionCountForEffectDefinition:(const SCD_Struct_CU35*)arg1 ;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU34*)arg1 ;
@end

