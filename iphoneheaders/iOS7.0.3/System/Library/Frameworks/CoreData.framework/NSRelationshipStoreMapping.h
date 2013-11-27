/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {

	NSString* _destinationEntityExternalName;
	NSArray* _foreignKeys;
	NSArray* _joins;
	unsigned _joinSemantic;

}
-(id)relationship;
-(id)columnDefinitions;
-(id)constraintDefinitions;
-(void)setDestinationEntityExternalName:(id)arg1 ;
-(void)setForeignKeys:(id)arg1 ;
-(void)setJoins:(id)arg1 ;
-(id)destinationEntityExternalName;
-(id)foreignKeys;
-(id)joins;
-(unsigned)joinSemantic;
-(void)setJoinSemantic:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end
