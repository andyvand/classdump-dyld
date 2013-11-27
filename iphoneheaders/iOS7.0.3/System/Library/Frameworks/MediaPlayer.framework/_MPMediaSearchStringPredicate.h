/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {

	NSString* _searchString;
	NSSet* _properties;

}

@property (nonatomic,copy) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSSet * properties;                   //@synthesize properties=_properties - In the implementation block
+(id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2 ;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(void)setSearchString:(id)arg1 ;
-(id)searchString;
-(void).cxx_destruct;
@end
