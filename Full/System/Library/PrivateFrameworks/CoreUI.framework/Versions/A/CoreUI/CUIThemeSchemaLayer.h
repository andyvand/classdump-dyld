/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject {

	NSArray* _renditions;
	NSString* _name;
	unsigned long long _index;

}

@property (nonatomic,retain) NSArray * renditions;                  //@synthesize renditions=_renditions - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(CGSize*)arg3 forPartFeatures:(unsigned long long)arg4 ;
-(id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3 ;
-(double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)index;
@end

