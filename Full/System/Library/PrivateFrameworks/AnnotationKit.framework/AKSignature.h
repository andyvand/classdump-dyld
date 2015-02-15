/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface AKSignature : NSObject <NSSecureCoding> {

	CGPathRef _path;
	char _shouldPersist;
	NSUUID* _uniqueID;
	double _baselineOffset;
	NSDate* _creationDate;

}

@property (assign) char shouldPersist;                 //@synthesize shouldPersist=_shouldPersist - In the implementation block
@property (retain) NSUUID * uniqueID;                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) CGPathRef path; 
@property (readonly) CGRect pathBounds; 
@property (assign) double baselineOffset;              //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(char)supportsSecureCoding;
-(CGRect)pathBounds;
-(id)initWithPath:(CGPathRef)arg1 baselineOffset:(double)arg2 ;
-(char)shouldPersist;
-(void)setShouldPersist:(char)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 baselineOffset:(double)arg2 creationDate:(id)arg3 ;
-(void)setUniqueID:(NSUUID *)arg1 ;
-(void)dealloc;
-(CGPathRef)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(NSUUID *)uniqueID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
@end
