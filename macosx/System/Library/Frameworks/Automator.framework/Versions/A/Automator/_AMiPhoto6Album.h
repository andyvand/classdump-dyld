/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiPhoto6Item.h>

@class NSArray, NSString;

@interface _AMiPhoto6Album : _AMiPhoto6Item

@property (copy,readonly) NSArray * children; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiPhoto6Album * parent; 
@property (readonly) int type; 
@property (copy,readonly) NSString * url; 
-(id)keywords;
-(long long)id;
-(id)photos;
-(void)setName:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)name;
-(int)type;
-(_AMiPhoto6Album *)parent;
-(NSArray *)children;
@end

