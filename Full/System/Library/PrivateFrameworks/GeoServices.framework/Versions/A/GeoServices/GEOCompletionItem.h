/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, NSData;


@protocol GEOCompletionItem <NSObject>
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
@required
-(NSData *)metadata;
-(NSArray *)displayLines;
-(id)calloutTitle;
-(id)queryLine;
-(id)highlightsForLine:(unsigned long long)arg1;
-(char)getCoordinate:(SCD_Struct_GE15*)arg1;
-(void)sendFeedback;
-(id<GEOMapItem>)geoMapItem;
-(NSData *)entryMetadata;

@end
