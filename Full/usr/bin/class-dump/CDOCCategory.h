/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <class-dump/CDOCProtocol.h>
#import <class-dump/CDTopologicalSort.h>

@class NSString, NSArray;

@interface CDOCCategory : CDOCProtocol <CDTopologicalSort> {

	NSString* _className;

}

@property (retain) NSString * className;                            //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSArray * dependancies; 
-(void)recursivelyVisit:(id)arg1 ;
-(id)methodSearchContext;
-(NSArray *)dependancies;
-(id)sortableName;
-(NSString *)identifier;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
@end
