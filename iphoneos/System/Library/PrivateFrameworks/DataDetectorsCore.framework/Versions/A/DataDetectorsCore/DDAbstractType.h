/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, DDLocation;

@interface DDAbstractType : NSObject {

	NSArray* _arguments;
	NSString* _name;
	int _kind;
	DDLocation* _location;

}

@property (readonly) char isEmpty; 
@property (readonly) char isAny; 
@property (readonly) char isFlatName; 
@property (readonly) int kind;                         //@synthesize kind=_kind - In the implementation block
@property (readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * arguments;              //@synthesize arguments=_arguments - In the implementation block
@property (retain) DDLocation * location;              //@synthesize location=_location - In the implementation block
+(id)emptyType;
+(id)anyType;
+(id)typeWithName:(id)arg1 components:(id)arg2 kind:(int)arg3 location:(id)arg4 ;
+(id)typeWithName:(id)arg1 component:(id)arg2 kind:(int)arg3 location:(id)arg4 ;
-(id)argument;
-(id)initWithNameType:(id)arg1 ;
-(id)initWithOptional:(id)arg1 ;
-(id)initWithConjunctionArg1:(id)arg1 arg2:(id)arg2 ;
-(id)initWithDisjunctionArg1:(id)arg1 arg2:(id)arg2 ;
-(id)initWithName:(id)arg1 components:(id)arg2 kind:(int)arg3 location:(id)arg4 ;
-(void)appendDescription:(id)arg1 ;
-(void)_appendComponents:(id)arg1 ;
-(char)isAny;
-(char)isFlatName;
-(id)computeInhabitant:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSArray *)arguments;
-(char)isEmpty;
-(DDLocation *)location;
-(int)kind;
-(void)setLocation:(DDLocation *)arg1 ;
-(id)verboseDescription;
@end

