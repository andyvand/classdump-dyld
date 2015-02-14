/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/NSCoding.h>

@class NSString, NSArray;

@interface PAImage : NSObject <NSCoding> {

	long long slide;
	NSString* name;
	NSString* path;
	NSArray* segments;
	unsigned fileType;
	char isInSharedCache;

}

@property (assign) long long slide; 
@property (retain) NSString * name; 
@property (retain) NSString * path; 
@property (retain) NSArray * segments; 
@property (assign) unsigned fileType; 
@property (assign) char isInSharedCache; 
+(id)imagesForProcessWithPort:(unsigned)arg1 ;
+(id)sharedCacheImage;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(id)nameString;
-(id)segmentsString;
-(id)segmentsAndSectionsString;
-(char)isExecutable;
-(long long)slide;
-(void)setSlide:(long long)arg1 ;
-(char)isInSharedCache;
-(void)setIsInSharedCache:(char)arg1 ;
-(id)initWithSegmentSymbolOwner:(CSTypeRef)arg1 SectionOwner:(CSTypeRef)arg2 ;
-(id)nameFromPath;
-(void)dealloc;
-(NSString *)path;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setFileType:(unsigned)arg1 ;
-(unsigned)fileType;
@end

