/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject {

	CUIRenditionKey* _baseKey;
	NSArray* _renditions;
	SCD_Struct_CU34* _part;

}

@property (nonatomic,retain) NSArray * renditions;              //@synthesize renditions=_renditions - In the implementation block
+(id)renditionGroupsForRenditions:(id)arg1 part:(SCD_Struct_CU34*)arg2 ;
-(id)initWithRenditions:(id)arg1 part:(SCD_Struct_CU34*)arg2 ;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(long long)partFeatures;
-(id)themeSchemaLayers;
-(void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2 ;
-(id)schemaLayersAndLayerGroups;
-(id)_renditionsSortedIntoLayers;
-(id)_layerNameForDrawingLayer:(long long)arg1 ;
-(id)_layerNameForState:(long long)arg1 ;
-(void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 ;
-(void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 state:(unsigned long long)arg3 drawingLayer:(unsigned long long)arg4 ;
-(id)mutablePSDImageRef;
-(id)mutablePSDImageRefColumnStyle;
-(void)dealloc;
-(id)description;
-(id)baseKey;
@end

