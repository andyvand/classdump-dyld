/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/NSCopying.h>

@class NSString;

@interface AVAssetCollectionInspector : AVFigObjectInspector <NSCopying> {

	OpaqueFigAssetCollectionRef _figCollection;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) unsigned long long assetCount; 
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned long long)assetCount;
-(OpaqueFigAssetRef)copyFigAssetAtIndex:(unsigned long long)arg1 options:(id)arg2 figErr:(int*)arg3 ;
-(OpaqueFigAssetRef)copyFigAssetWithURL:(id)arg1 options:(id)arg2 figErr:(int*)arg3 ;
-(void)_cleanUpUncollectables;
-(id)_figAssetCreationOptionsFromAVFOptions:(id)arg1 ;
-(id)initWithFigCollection:(OpaqueFigAssetCollectionRef)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
@end

