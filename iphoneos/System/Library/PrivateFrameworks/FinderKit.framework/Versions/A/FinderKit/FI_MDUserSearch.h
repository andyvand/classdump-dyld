/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@class NSString, NSArray, NSNumber;

@interface FI_MDUserSearch : NSObject {

	NSString* _filter;
	NSArray* _scope;
	NSArray* _slices;
	NSNumber* _searchSystemFiles;
	NSNumber* _fileNameOnly;
	NSNumber* _searchNonFinderFiles;

}

@property (retain) NSString * filter;                            //@synthesize filter=_filter - In the implementation block
@property (retain) NSArray * scope;                              //@synthesize scope=_scope - In the implementation block
@property (retain) NSArray * slices;                             //@synthesize slices=_slices - In the implementation block
@property (retain) NSNumber * searchSystemFiles;                 //@synthesize searchSystemFiles=_searchSystemFiles - In the implementation block
@property (retain) NSNumber * fileNameOnly;                      //@synthesize fileNameOnly=_fileNameOnly - In the implementation block
@property (retain) NSNumber * searchNonFinderFiles;              //@synthesize searchNonFinderFiles=_searchNonFinderFiles - In the implementation block
-(NSNumber *)searchSystemFiles;
-(NSNumber *)fileNameOnly;
-(NSNumber *)searchNonFinderFiles;
-(void)setSlices:(NSArray *)arg1 ;
-(void)setSearchSystemFiles:(NSNumber *)arg1 ;
-(void)setFileNameOnly:(NSNumber *)arg1 ;
-(void)setSearchNonFinderFiles:(NSNumber *)arg1 ;
-(NSArray *)scope;
-(void)setScope:(NSArray *)arg1 ;
-(NSString *)filter;
-(NSArray *)slices;
-(void)setFilter:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

