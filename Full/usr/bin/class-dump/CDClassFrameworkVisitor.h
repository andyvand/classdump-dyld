/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <class-dump/CDVisitor.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface CDClassFrameworkVisitor : CDVisitor {

	NSMutableDictionary* _frameworkNamesByClassName;
	NSString* _frameworkName;

}

@property (nonatomic,readonly) NSDictionary * frameworkNamesByClassName; 
@property (retain) NSString * frameworkName;                                          //@synthesize frameworkName=_frameworkName - In the implementation block
-(void)willVisitClass:(id)arg1 ;
-(void)willVisitObjectiveCProcessor:(id)arg1 ;
-(void)setFrameworkName:(NSString *)arg1 ;
-(NSString *)frameworkName;
-(void)addClassName:(id)arg1 referencedInFramework:(id)arg2 ;
-(NSDictionary *)frameworkNamesByClassName;
-(id)init;
@end
