/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKRecommendationEntryCacheObject.h>

@class NSString, NSNumber;

@interface GKFriendRecommendationListEntryCacheObject : GKRecommendationEntryCacheObject

@property (nonatomic,@dynamic,retain) NSString * playerID; 
@property (nonatomic,@dynamic,retain) NSString * reasonID; 
@property (nonatomic,@dynamic,retain) NSString * reason; 
@property (nonatomic,@dynamic,retain) NSString * reason2; 
@property (nonatomic,@dynamic,retain) NSNumber * rid; 
@property (nonatomic,@dynamic,retain) NSNumber * source; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)internalRepresentation;
@end
