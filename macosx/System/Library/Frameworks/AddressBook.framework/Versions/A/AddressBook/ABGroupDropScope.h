/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSDraggingInfo;
@class ABGroupEntry;

@interface ABGroupDropScope : NSObject {

	id<NSDraggingInfo> _draggingInfo;
	ABGroupEntry* _droppedEntry;
	long long _childIndex;
	ABGroupEntry* _selectedEntry;

}

@property (readonly) id<NSDraggingInfo> draggingInfo;              //@synthesize draggingInfo=_draggingInfo - In the implementation block
@property (readonly) ABGroupEntry * droppedEntry;                  //@synthesize droppedEntry=_droppedEntry - In the implementation block
@property (readonly) long long childIndex;                         //@synthesize childIndex=_childIndex - In the implementation block
@property (readonly) ABGroupEntry * selectedEntry;                 //@synthesize selectedEntry=_selectedEntry - In the implementation block
-(long long)childIndex;
-(id)initWithDraggingInfo:(id)arg1 droppedEntry:(id)arg2 childIndex:(long long)arg3 selectedEntry:(id)arg4 ;
-(id<NSDraggingInfo>)draggingInfo;
-(ABGroupEntry *)droppedEntry;
-(ABGroupEntry *)selectedEntry;
-(void)dealloc;
-(id)description;
@end

