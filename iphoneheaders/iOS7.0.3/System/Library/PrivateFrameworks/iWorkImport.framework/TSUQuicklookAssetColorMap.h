/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject {

	NSMutableDictionary* mAssetMap;
	NSString* mAppAssetPath;

}

@property (nonatomic,retain) NSMutableDictionary * assetMap; 
@property (nonatomic,retain) NSString * appAssetPath; 
+(id)quicklookAssetMap;
+(BOOL)hasAppAssets;
+(id)colorForResource:(id)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)appAssetPath;
-(id)assetMap;
-(void)setAssetMap:(id)arg1 ;
-(void)setAppAssetPath:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
