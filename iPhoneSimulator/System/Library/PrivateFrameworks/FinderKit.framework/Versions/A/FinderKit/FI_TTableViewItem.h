/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/NSCopying.h>

@class NSDictionary;

@interface FI_TTableViewItem : NSObject <NSCopying> {

	TNSRef<NSMutableDictionary *> _data;

}

@property (nonatomic,retain,readonly) NSDictionary * data; 
+(id)keyPathForKey:(id)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)data;
@end

