-[EKCalendarStoreBackingStore _emptyCache]
+[EKEventStore accessGrantedForEntityType:]
+[EKEventStore authorizationStatusForEntityType:]
+[EKCoreDataFaultDelegate singleton]
___36+[EKCoreDataFaultDelegate singleton]_block_invoke
-[EKSource initWithTypeString:]
-[EKObject init]
-[EKChangeSet init]
-[EKSource sourceType]
-[EKSource typeString]
+[EKCalendar typeFromDescription:]
+[EKSource sourceTypeFromCalendarType:]
-[EKObject hash]
-[EKSource sourceIdentifier]
-[EKFrozenObject hash]
+[EKFrozenCalendarSource meltedClass]
-[EKFrozenCalendarSource sourceIdentifier]
-[EKObject isEqual:]
+[EKSource frozenClass]
+[EKSource knownIdentityKeys]
-[EKFrozenObject isEqual:]
-[EKFrozenCalendar calendarIdentifier]
+[EKFrozenSharee meltedClass]
+[EKSharee hashForObject:]
-[EKFrozenSharee URL]
-[EKFrozenSharee name]
+[EKSharee frozenClass]
+[EKSharee knownIdentityKeys]
-[EKCalendarStoreBackingStore setAccounting:]
-[EKEventStore requestAccessToEntityType:completion:]
-[EKEventStore _noteAccessRequestedToEntityType:]
-[EKEventStore backingStore]
___53-[EKEventStore requestAccessToEntityType:completion:]_block_invoke
-[EKEventStore sources]
-[EKFrozenCalendarSource typeString]
-[EKFrozenCalendarSource title]
-[EKFrozenCalendarSource isDelegate]
-[EKFrozenCalendarSource displayOrder]
-[EKFrozenCalendarSource supportsEmailValidation]
-[EKFrozenCalendarSource isEnabledForEvents]
-[EKFrozenCalendarSource isEnabledForReminders]
-[EKFrozenCalendarSource supportsEventCalendarCreation]
-[EKFrozenCalendarSource supportsTaskCalendarCreation]
-[EKSource title]
-[EKSource isDelegate]
-[EKSource displayOrder]
-[EKSource supportsEmailValidation]
-[EKSource isEnabledForEvents]
-[EKSource isEnabledForReminders]
-[EKSource supportsEventCalendarCreation]
-[EKSource supportsTaskCalendarCreation]
-[EKEventStore _setEventStoreOnObjects:]
-[EKObject setEventStore:]
-[EKEventStore eventStoreIdentifier]
-[EKObject setEventStoreIdentifier:]
+[EKCalendar orderSortDescriptors]
___34+[EKCalendar orderSortDescriptors]_block_invoke
-[EKSource calendarsForEntityType:]
-[EKSource allCalendars]
-[EKObject eventStore]
-[EKObject eventStoreIdentifier]
-[EKEventStore allCalendars]
___syncIfQueueNotNil_block_invoke
___syncBoolIfQueueNotNil_block_invoke
-[EKChangeTracker changes]
-[EKFrozenCalendar containerSource]
-[EKFrozenCalendar allowEvents]
+[EKEventStore accessGrantedForCalendar:]
-[EKFrozenCalendar allowReminders]
-[EKFrozenObject isFrozen]
-[EKFrozenObject copyWithZone:]
-[EKFrozenCalendar allowsContentModifications]
-[EKFrozenCalendar isSubscribed]
-[EKFrozenCalendar isRenameable]
-[EKChangeTracker relationChanges]
-[EKCalendar calendarIdentifier]
+[EKCalendar knownIdentityKeys]
___24-[EKSource allCalendars]_block_invoke
-[EKCalendar source]
-[EKCalendar containerSource]
-[EKObject changeSet]
-[EKCalendar backingCalendar]
-[EKChangeSet isDeleted]
+[EKObject knownRelationshipSingleValueKeys]
+[EKObject knownRelationshipMultiValueKeys]
+[EKSource knownSingleValueKeys]
___35-[EKSource calendarsForEntityType:]_block_invoke_2
-[EKCalendar allowedEntityTypes]
-[EKCalendar allowEvents]
-[EKCalendar allowReminders]
-[EKSource _adjustedDisplayOrder]
-[EKCalendar displayOrder]
-[EKFrozenCalendar displayOrder]
-[EKCalendar allowsContentModifications]
-[EKSource sharedCalendarInvitationsForEntityType:]
-[EKCalendar title]
-[EKFrozenCalendar title]
-[EKEventStore refreshSourcesIfNecessary]
-[EKEventStore predicateForCompletedRemindersWithCalendars:]
-[EKEventStore predicateForCompletedRemindersWithDueDate:calendars:sortOrder:]
+[EKReminderPredicate predicateWithCalendars:]
-[EKReminderPredicate initWithCalendars:]
-[EKPredicate initWithCalendars:]
-[EKReminderPredicate setUseCompletionDateAsAlternate:]
-[EKReminderPredicate setLimitToCompletedOrIncomplete:]
-[EKReminderPredicate setCompleted:]
-[EKReminderPredicate setDueAfter:]
-[EKReminderPredicate setDueBefore:]
-[EKReminderPredicate setSortOrder:]
-[EKEventStore remindersMatchingPredicate:]
+[EKPredicateSearch searchWithEntityClass:predicate:store:]
-[EKPredicateSearch initWithEntityClass:predicate:store:]
-[EKPredicateSearch setCurrentResults:]
-[EKPredicateSearch run]
-[EKReminderPredicate hasFastPathWithStore:]
-[EKReminderPredicate _isReminderCompletionExactly]
-[EKPredicate calendarIdentifiers]
-[EKReminderPredicate fastPathResultWithStore:]
-[EKReminderPredicate maxResults]
-[EKCalendarStoreBackingStore accounting]
-[EKBackingStoreAccounting allCompletedRemindersAccountedFor]
-[EKCalendarStoreBackingStore _reminderPredicateWithAnyCompletionDate]
-[EKCalendarStoreBackingStore _coreDataClassFromMask:]
-[EKFrozenReminder isReminder]
-[EKFrozenCalendarItem isEvent]
+[EKCalendarItem localUIDWithRecurrenceDateForOccurrence:]
-[EKFrozenCalendarItem recurrenceDateUnadjustedFromUTC]
-[EKFrozenCalendarItem localUID]
-[EKCalendarStoreBackingStore _addExdatesForItem:toUpdates:]
+[EKFrozenAlarm meltedClass]
-[EKFrozenAlarm sharedUID]
+[EKAlarm frozenClass]
+[EKAlarm knownIdentityKeys]
+[EKFrozenReminder meltedClass]
+[EKReminder frozenClass]
-[EKFrozenCalendarItem container]
-[EKBackingStoreAccounting addReceiptForAllCompletedReminders]
-[EKBackingStoreAccounting addReceiptsForOccurrences:]
-[EKBackingStoreAccounting addReceiptsForOccurrenceIdentifiers:]
-[EKBackingStoreAccounting receiptGeneration]
-[EKBackingStoreAccounting setReceiptGeneration:]
-[EKFrozenCalendarItem sharedUID]
-[EKFrozenCalendarItem creationDate]
-[EKReminder isCompleted]
-[EKReminder completionDate]
-[EKCalendarItem backingOccurrence]
-[EKFrozenReminder completionDate]
+[EKCalendarItem hashForObject:]
-[EKCalendarItem sharedUID]
-[EKCalendarItem localUID]
+[EKCalendarItem knownIdentityKeys]
-[EKReminderPredicate sortOrder]
+[EKReminder sortDescriptorsForSortOrder:]
-[EKCalendarItem calendarItemIdentifier]
-[EKReminder dueDate]
-[EKReminder dueDateUnadjustedFromUTC]
-[EKFrozenReminder dueDateUnadjustedFromUTC]
-[EKCalendarItem adjustDateFromUTC:]
-[EKCalendarItem isAllDay]
-[EKFrozenCalendarItem allDay]
-[EKCalendarItem timeZone]
-[EKCalendarItem timeZoneObject]
-[EKFrozenCalendarItem timeZoneObject]
-[EKReminder bestDisplayAlarm]
-[EKCalendarItem alarms]
-[EKCalendarItem alarmSet]
-[EKObject cachedMeltedObjectsForMultiValueKey:]
-[EKObject cachedMeltedObjects]
-[EKChangeSet valuesForMultiValueKey:basedOn:]
-[EKFrozenCalendarItem alarmSet]
-[EKCalendarItem hasAlarms]
-[EKCalendarItem notes]
-[EKFrozenCalendarItem notes]
+[EKAlarm alarmWithAlarm:]
-[EKFrozenAlarm isSnoozed]
-[EKAlarm sharedUID]
-[EKObject setCachedMeltedObjects:forMultiValueKey:]
-[EKAlarm structuredLocation]
-[EKAlarm backingAlarm]
-[EKFrozenAlarm structuredLocation]
-[EKAlarm isSnoozed]
-[EKChangeSet forceChangeValue:forKey:]
+[EKStructuredLocation knownSingleValueKeys]
-[EKStructuredLocation title]
-[EKStructuredLocation backingLocation]
-[EKFrozenStructuredLocation title]
-[EKStructuredLocation setTitle:]
-[EKChangeSet changeSingleValue:forKey:basedOn:]
-[EKStructuredLocation radiusNumber]
-[EKFrozenStructuredLocation radiusNumber]
-[EKStructuredLocation setRadiusNumber:]
-[EKStructuredLocation abURLString]
-[EKFrozenStructuredLocation abURLString]
-[EKStructuredLocation setAbURLString:]
-[EKStructuredLocation geoURLString]
-[EKFrozenStructuredLocation geoURLString]
-[EKStructuredLocation setGeoURLString:]
-[EKAlarm proximity]
-[EKAlarm proximityString]
-[EKFrozenAlarm proximityString]
-[EKAlarm absoluteDate]
-[EKFrozenAlarm absoluteDate]
-[EKObject isFrozen]
-[EKStructuredLocation geoLocation]
-[EKAlarm isAbsolute]
-[EKAlarm relativeOffset]
-[EKFrozenAlarm relativeOffset]
-[EKCalendarItem title]
-[EKFrozenCalendarItem title]
-[EKReminder priority]
-[EKCalendarItem priority]
-[EKCalendarItem priorityNumber]
-[EKFrozenCalendarItem priorityNumber]
-[EKCalendarItem calendar]
-[EKCalendarItem container]
-[EKEventStore predicateForRemindersInCalendars:]
-[EKReminderPredicate _isCalendarsExactly]
-[EKCalendarStoreBackingStore remindersWithCalendarIdentifiers:]
-[EKBackingStoreAccounting allRemindersAccountedFor]
-[EKBackingStoreAccounting remindersInCalendarsAccountedFor:]
___64-[EKCalendarStoreBackingStore remindersWithCalendarIdentifiers:]_block_invoke
-[EKBackingStoreAccounting addReceiptForRemindersInCalendars:]
-[EKReminder isReminder]
-[EKReminder order]
-[EKReminder orderNumber]
-[EKFrozenReminder orderNumber]
-[EKCalendarItem creationDate]
+[EKReminder fixBrokenICalReminderOrdersWithReminders:]
+[EKReminder orderSortDescriptors]
___34+[EKReminder orderSortDescriptors]_block_invoke
-[EKReminder statusCompleteNotByDate]
-[EKFrozenReminder statusCompleteNotByDate]
-[EKCalendar isImmutable]
-[EKCalendar type]
-[EKCalendar typeString]
-[EKCalendar isDeletable]
-[EKCalendar isRenameable]
-[EKCalendar isShareable]
-[EKFrozenCalendar isShareable]
-[EKCalendar sharees]
-[EKFrozenCalendar sharees]
-[EKFrozenSharee status]
+[EKSharee statusEnumFromString:]
-[EKFrozenSharee accessLevel]
+[EKSharee accessLevelEnumFromString:]
-[EKSharee setName:]
-[EKSharee backingSharee]
-[EKSharee setEmailAddress:]
-[EKSharee setURL:]
-[EKSharee setShareeStatus:]
+[EKSharee statusStringFromEnum:]
-[EKSharee setStatus:]
-[EKSharee setShareeAccessLevel:]
+[EKSharee accessLevelStringFromEnum:]
-[EKSharee setAccessLevel:]
-[EKSharee URL]
-[EKSharee name]
-[EKCalendar sharingStatus]
-[EKCalendar sharingStatusString]
-[EKFrozenCalendar sharingStatusString]
-[EKEventStore predicateForAllRemindersDueBeforeOrOnDueDate:calendars:]
-[EKReminderPredicate _isRemindersWithDueDatesExactly]
-[EKCalendarStoreBackingStore remindersWithDueDates]
-[EKBackingStoreAccounting allRemindersWithDueDatesAccountedFor]
-[EKCalendarStoreBackingStore _reminderPredicateWithAnyDueDate]
-[EKBackingStoreAccounting addReceiptForAllRemindersWithDueDates]
-[EKCalendarItem recurrenceRules]
-[EKCalendarItem recurrenceRuleString]
-[EKFrozenCalendarItem recurrenceRuleString]
+[EKFrozenRecurrenceRule ruleWithRule:]
-[EKFrozenRecurrenceRule initWithRuleString:]
+[EKFrozenRecurrenceRule ekFrequencyFromICSFrequency:]
+[EKRecurrenceRule ruleWithBackingRule:]
-[EKRecurrenceRule initWithBackingRule:]
-[EKRecurrenceRule interval]
-[EKRecurrenceRule intervalNumber]
-[EKRecurrenceRule backingObject]
-[EKRecurrenceRule backingRule]
-[EKFrozenRecurrenceRule intervalNumber]
-[EKRecurrenceRule frequency]
-[EKRecurrenceRule frequencyNumber]
-[EKFrozenRecurrenceRule frequencyNumber]
-[EKEventStore sourceErrors]
-[EKCalendarStoreBackingStore sourceErrors]
-[EKCalendarStoreBackingStore _initializedSourceErrors]
-[EKCalendarStoreBackingStore uninitializedSourceErrors]
-[EKCalendarStoreBackingStore _fetchSourceErrors]
-[EKCalendarStoreBackingStore sourceIdentifiers]
-[EKCalendarStoreBackingStore _fetchLastErrorForEntityName:]
___49-[EKCalendarStoreBackingStore _fetchSourceErrors]_block_invoke
-[EKCalendarStoreBackingStore eventKitErrorFromCalendarError:]
-[EKCalendarStoreBackingStore setUninitializedSourceErrors:]
-[EKPredicateSearch dealloc]
-[EKCalendarStoreBackingStore _databaseChangedExternally:]
-[EKBackingStoreAccounting copyWithZone:]
-[EKBackingStoreAccounting mutableCopyWithZone:]
-[EKBackingStoreAccounting cachedEventsInRange]
-[EKBackingStoreAccounting setCachedEventsInRange:]
-[EKBackingStoreAccounting calendarIdentifiersWithAllRemindersCached]
-[EKBackingStoreAccounting allEventsAccountedFor]
-[EKBackingStoreAccounting itemIdentifiers]
+[EKFrozenCalendar meltedClass]
+[EKCalendar frozenClass]
+[EKCalendar knownRelationshipSingleValueKeys]
+[EKCalendar knownRelationshipMultiValueKeys]
+[EKCalendar knownSingleValueKeys]
-[EKFrozenCalendar colorString]
-[EKFrozenCalendar publishURL]
+[EKSource isWeakRelationship]
+[EKObject isWeakRelationship]
+[EKSharee knownSingleValueKeys]
+[EKCalendarItem knownRelationshipSingleValueKeys]
+[EKCalendar isWeakRelationship]
+[EKCalendarItem knownRelationshipMultiValueKeys]
+[EKAlarm knownRelationshipSingleValueKeys]
+[EKAlarm knownSingleValueKeys]
-[EKFrozenAlarm acknowledgedDate]
-[EKFrozenAlarm actionString]
-[EKFrozenAlarm emailAddress]
-[EKFrozenAlarm soundName]
-[EKFrozenAlarm url]
-[EKFrozenAlarm bookmark]
-[EKFrozenCalendarItem attendeeSet]
+[EKReminder knownSingleValueKeys]
___34+[EKReminder knownSingleValueKeys]_block_invoke
+[EKCalendarItem knownSingleValueKeys]
-[EKFrozenCalendarItem location]
-[EKFrozenCalendarItem URL]
-[EKFrozenCalendarItem lastModifiedDate]
-[EKFrozenCalendarItem startDateUnadjustedFromUTC]
-[EKFrozenCalendarItem organizerName]
-[EKFrozenCalendarItem organizerURL]
+[EKFrozenStructuredLocation meltedClass]
+[EKStructuredLocation frozenClass]
+[EKStructuredLocation knownIdentityKeys]
-[EKEventStore defaultCalendarForNewReminders]
-[EKCalendarStoreBackingStore defaultCalendarForNewReminders]
___61-[EKCalendarStoreBackingStore defaultCalendarForNewReminders]_block_invoke
-[EKCalendarStoreBackingStore firstWriteableCalendarPreferringServerBasedSupportingEntityType:]
-[EKCalendarStoreBackingStore setDefaultCalendarForNewReminders:]
+[EKCalendar calendarForEntityType:eventStore:]
-[EKChangeSet setIsNew:]
-[EKCalendar _updateToMaxDisplayOrder]
-[EKCalendar setDisplayOrder:]
-[EKCalendar setSource:]
-[EKCalendar setContainerSource:]
-[EKCalendar setTitle:]
-[EKEventStore saveCalendar:commit:error:]
-[EKEventStore _conditionalSave:commit:error:withActionBlock:]
-[EKEventStore _conditionalSave:commit:error:withActionBlock:withValidateBlock:]
___62-[EKEventStore _conditionalSave:commit:error:withActionBlock:]_block_invoke
-[EKCalendar validate:]
-[EKObject validate:]
-[EKObject isNew]
-[EKChangeSet isNew]
___42-[EKEventStore saveCalendar:commit:error:]_block_invoke
-[EKCalendar commit:]
___barrierSyncBool_block_invoke
-[EKCalendar isSubscribed]
-[EKCalendar colorString]
-[EKCalendar setColorString:]
-[EKCalendar publishURL]
-[EKCalendar setPublishURL:]
-[EKFrozenObject frozenObject]
-[EKChangeSet mutableCopyWithZone:]
-[EKChangeTracker batchedChangedObjects]
-[EKChangeTracker setBatchedChangedObjects:]
-[EKObject commit:]
-[EKEventStore commit:]
-[EKCalendarStoreBackingStore _registerForCreatingChangeRequestsWithCalendar:]
-[EKCalendarStoreBackingStore _changeCalendar:withIdentifier:error:]
-[EKCalendar sharedOwnerAddress]
-[EKCalendar sharedOwnerName]
-[EKCalendar prePublishURL]
-[EKCalendar defaultOrganizerNameForNewItems]
-[EKCalendar defaultOrganizerAddressForNewItems]
-[EKCalendar defaultOrganizerIsMeForNewItems]
-[EKObject setChangeSet:]
-[EKCalendarStoreBackingStore _changeShareesOnCalManagedCalendar:fromEKCalendar:error:]
-[EKChangeSet markChangesAsCommitted]
-[EKChangeSet hasUnsavedChangeForKey:]
-[EKCalendar resetWithLatestInBackingStore:]
-[EKFrozenCalendar sharedOwnerAddress]
-[EKFrozenCalendar sharedOwnerName]
-[EKFrozenCalendar prePublishURL]
-[EKFrozenCalendar defaultOrganizerNameForNewItems]
-[EKFrozenCalendar defaultOrganizerAddressForNewItems]
-[EKFrozenCalendar defaultOrganizerIsMeForNewItems]
-[EKChangeSet addChanges:]
-[EKChangeSet changedSingleValueKeys]
-[EKChangeSet changedMultiValueKeys]
-[EKChangeTracker batchedDeletedObjects]
-[EKChangeTracker setBatchedDeletedObjects:]
-[EKEventStore calendarsForEntityType:]
+[EKReminder reminderWithEventStore:]
-[EKCalendarItem setCalendar:]
-[EKCalendarItem setContainer:]
-[EKObject hasChanges]
-[EKChangeSet hasUnsavedChanges]
-[EKEventStore saveReminder:commit:error:]
-[EKReminder validate:]
-[EKCalendarItem validate:]
-[EKCalendarItem attendeeSet]
-[EKCalendarItem hasAttendees]
-[EKCalendarItem attendees]
-[EKCalendarItem hasRecurrenceRules]
___42-[EKEventStore saveReminder:commit:error:]_block_invoke
-[EKReminder commit:]
-[EKCalendarItem commit:]
-[EKCalendarItem recurrenceDateUnadjustedFromUTC]
-[EKCalendarItem setTitle:]
-[EKCalendarItem location]
-[EKCalendarItem setLocation:]
-[EKCalendarItem setNotes:]
-[EKCalendarItem setPriorityNumber:]
-[EKCalendarItem setRecurrenceRuleString:]
-[EKCalendarItem URL]
-[EKCalendarItem setURL:]
-[EKCalendarItem allDay]
-[EKReminder setAllDay:]
-[EKReminder setTimeZoneObject:]
-[EKCalendarItem datePreservingDateComponentsForDate:inCurrentTimeZone:movingToTimeZone:]
-[EKCalendarItem setTimeZoneObject:]
-[EKCalendarItem startDate]
-[EKCalendarItem startDateUnadjustedFromUTC]
-[EKCalendarItem setStartDate:]
-[EKCalendarItem adjustDateIntoUTC:]
-[EKCalendarItem setStartDateUnadjustedFromUTC:]
-[EKReminder setDueDate:]
-[EKReminder setDueDateUnadjustedFromUTC:]
-[EKCalendarItem lastModifiedDate]
-[EKCalendarItem setLastModifiedDate:]
-[EKCalendarItem organizerName]
-[EKCalendarItem setOrganizerName:]
-[EKCalendarItem organizerURL]
-[EKCalendarItem setOrganizerURL:]
-[EKReminder setCompletionDate:]
-[EKReminder setStatusCompleteNotByDate:]
-[EKReminder setOrderNumber:]
+[EKReminder batchChangeNotificationName]
-[EKCalendarItem isEvent]
-[EKCalendarItem organizedByMe]
-[EKReminder canEditRecurrence]
-[EKEventStore reminderWithIdentifier:]
-[EKBackingStoreAccounting occurrenceIdentifierAccountedFor:]
-[EKCalendarStoreBackingStore _reminderForLocalUID:]
-[EKBackingStoreAccounting addReceiptForOccurrenceIdentifier:]
-[EKCalendarStoreBackingStore _changeTask:withLocalUID:error:]
-[EKCalendarStoreBackingStore _moveItem:toCalendar:]
-[EKCalendarStoreBackingStore _calendarPredicateWithCalendar:]
-[EKCalendarStoreBackingStore _changeAlarmsOnCalManagedCalendarItem:fromEKCalendarItem:error:]
-[EKCalendarItem resetWithLatestInBackingStore:]
-[EKFrozenCalendarItem organizedByMe]
-[EKFrozenReminder canEditRecurrence]
-[EKObject refresh]
___barrierSyncIfQueueNotNil_block_invoke
-[EKCalendarItem setTimeZone:]
+[EKAlarm alarmWithRelativeOffset:]
+[EKAlarm alarm]
-[EKAlarm setRelativeOffset:]
-[EKAlarm setType:]
-[EKAlarm setActionString:]
-[EKCalendarItem addAlarm:]
-[EKObject addCachedMeltedObject:forMultiValueKey:]
-[EKAlarm acknowledgedDate]
-[EKAlarm actionString]
-[EKAlarm emailAddress]
-[EKAlarm soundName]
-[EKAlarm url]
-[EKAlarm bookmark]
-[EKAlarm setAbsoluteDate:]
-[EKObject changedKeys]
-[EKObject existingMeltedObject]
-[EKAlarm type]
-[EKCalendarItem removeAlarm:]
+[EKObject meltedClass]
___94-[EKCalendarStoreBackingStore _changeAlarmsOnCalManagedCalendarItem:fromEKCalendarItem:error:]_block_invoke
___94-[EKCalendarStoreBackingStore _changeAlarmsOnCalManagedCalendarItem:fromEKCalendarItem:error:]_block_invoke_2
-[EKObject removeCachedMeltedObject:forMultiValueKey:]
-[EKObject resetWithLatestInBackingStore:]
+[EKRecurrenceRule recurrenceRuleWithType:interval:end:]
-[EKRecurrenceRule initRecurrenceWithFrequency:interval:end:]
-[EKRecurrenceRule init]
-[EKRecurrenceRule setFrequency:]
-[EKRecurrenceRule setInterval:]
-[EKRecurrenceRule setRecurrenceEnd:]
-[EKRecurrenceRule setDaysOfTheWeek:]
-[EKRecurrenceRule setDaysOfTheMonth:]
-[EKRecurrenceRule setSetPositions:]
-[EKRecurrenceRule setMonthsOfTheYear:]
-[EKRecurrenceRule setDaysOfTheYear:]
-[EKRecurrenceRule setWeeksOfTheYear:]
-[EKCalendarItem addRecurrenceRule:]
-[EKCalendarItem ruleStringForRecurrenceRule:]
-[EKRecurrenceRule stringValueAsDateOnly:isFloating:]
+[EKRecurrenceRule iCalendarValueFromRecurrenceType:]
-[EKRecurrenceRule recurrenceEnd]
-[EKRecurrenceRule cachedEnd]
-[EKRecurrenceRule monthsOfTheYear]
-[EKRecurrenceRule daysOfTheMonth]
-[EKRecurrenceRule daysOfTheYear]
-[EKRecurrenceRule weeksOfTheYear]
-[EKRecurrenceRule daysOfTheWeek]
-[EKRecurrenceRule setPositions]
-[EKReminder dueDateComponents]
+[EKCalendarItem calculateDateComponentsFromDate:usingTimeZone:isAllDay:]
____EKSharedGregorianCalendarLock_block_invoke
___EKDateGetDateComponents_block_invoke
__EKSharedGregorianCalendarForTimeZone
-[EKFrozenRecurrenceRule endDate]
-[EKFrozenRecurrenceRule countNumber]
-[EKFrozenRecurrenceRule monthsOfTheYear]
-[EKFrozenRecurrenceRule daysOfTheMonth]
-[EKFrozenRecurrenceRule daysOfTheYear]
-[EKFrozenRecurrenceRule weeksOfTheYear]
-[EKFrozenRecurrenceRule daysOfTheWeek]
-[EKFrozenRecurrenceRule setPositions]
-[EKReminder setCompleted:]
+[EKReminder reorderReminders:betweenEarlier:later:]
___52+[EKReminder reorderReminders:betweenEarlier:later:]_block_invoke
___52+[EKReminder reorderReminders:betweenEarlier:later:]_block_invoke_2
-[EKReminder setOrder:]
-[EKCalendarItem setAlarms:]
-[EKCalendarItem setAlarmSet:]
-[EKCalendarItem setRecurrenceRules:]
-[EKEventStore predicateForAllIncompleteReminders]
-[EKSharee managedObjectID]
-[EKSharee status]
-[EKSharee accessLevel]
+[EKCalendar batchChangeNotificationName]
+[EKSharee shareeWithEmailAddress:name:]
-[EKSharee initWithEmailAddress:name:]
-[EKCalendar addSharee:]
-[EKSharee emailAddress]
___87-[EKCalendarStoreBackingStore _changeShareesOnCalManagedCalendar:fromEKCalendar:error:]_block_invoke
-[EKSharee shareeStatus]
-[EKSharee shareeAccessLevel]
___87-[EKCalendarStoreBackingStore _changeShareesOnCalManagedCalendar:fromEKCalendar:error:]_block_invoke_2
-[EKCalendar removeSharee:]
-[EKEventStore removeCalendar:commit:error:]
___44-[EKEventStore removeCalendar:commit:error:]_block_invoke
+[EKCalendarItem splitIdentifier:intoLocalUID:recurrenceDate:]
-[EKUndoManager init]
-[EKUndoManager handleUndoOperation:]
-[EKUndoManager undoOperation:]
-[EKUndoManager clearUndoOperations]
___36-[EKUndoManager clearUndoOperations]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKUndoManager disableUndoForOrganizerScheduling]
-[EKUndoManager setDisableUndoForOrganizerScheduling:]
-[EKUndoManager commitDelegate]
-[EKUndoManager setCommitDelegate:]
-[EKUndoManager decisionDelegate]
-[EKUndoManager setDecisionDelegate:]
-[EKUndoManager lastError]
-[EKUndoManager setLastError:]
-[EKUndoManager .cxx_destruct]
-[EKCalendarItem initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
+[EKCalendarItem _classForOccurrence:]
+[EKCalendarItem itemWithOccurrence:createPartialBackingObject:eventStore:]
+[EKCalendarItem itemWithOccurrence:createPartialBackingObject:eventStore:preFrozenRelationshipObjects:]
+[EKCalendarItem itemWithOccurrence:eventStore:]
+[EKCalendarItem itemWithOccurrence:eventStore:preFrozenRelationshipObjects:]
-[EKCalendarItem attendeeForMe]
-[EKCalendarItem selfAttendee]
-[EKCalendarItem calendarItemPermission]
-[EKCalendarItem currentUserGeneralizedParticipantRole]
-[EKCalendarItem currentUserMayActAsOrganizer]
-[EKCalendarItem _currentUserMayActAsOrganizerForCalendar:]
-[EKCalendarItem entityType]
-[EKCalendarItem isCalendarOwnerInvitedAttendee]
-[EKCalendarItem _isCalendarOwnerInvitedAttendeeForCalendar:]
-[EKCalendarItem isCurrentUserInvitedAttendee]
-[EKCalendarItem _isCurrentUserInvitedAttendeeForCalendar:]
-[EKCalendarItem isOrganizedByCurrentUser]
-[EKCalendarItem _isOrganizedByCurrentUserForCalendar:]
-[EKCalendarItem isOrganizedBySharedCalendarOwner]
-[EKCalendarItem _isOrganizedBySharedCalendarOwnerForCalendar:]
-[EKCalendarItem isOrganizedBySomeoneElse]
-[EKCalendarItem _isOrganizedBySomeoneElseForCalendar:]
-[EKCalendarItem isScheduled]
-[EKCalendarItem participantForMe]
-[EKCalendarItem scheduleAgent]
___30-[EKCalendarItem setCalendar:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKCalendarItem setParticipantForMe:]
-[EKCalendarItem setScheduleAgent:]
-[EKCalendarItem setAttendees:]
-[EKCalendarItem markDefaultAlarmsDeleted]
-[EKCalendarItem defaultAlarmWasDeleted]
-[EKCalendarItem setDefaultAlarmWasDeleted:]
-[EKCalendarItem _removeDefaultAlarms]
-[EKCalendarItem _addDefaultAlarms]
-[EKCalendarItem defaultAlarms]
-[EKCalendarItem _wrapWithDefaultAlarmsUpdate:]
-[EKCalendarItem allowsAttachmentModifications]
-[EKCalendarItem allowsAttendeesModifications]
-[EKCalendarItem allowsResponseCommentModifications]
-[EKCalendarItem isDeletable]
-[EKCalendarItem isEditable]
-[EKCalendarItem setAttendeeSet:]
-[EKCalendarItem scheduleAgentString]
-[EKCalendarItem setOrganizedByMe:]
-[EKCalendarItem setScheduleAgentString:]
-[EKCalendarItem _hasAbsoluteAlarms]
-[EKCalendarItem attendeeRepresentingOrganizer]
-[EKCalendarItem canMoveFromCalendar:toCalendar:error:]
-[EKCalendarItem canMoveToCalendar:error:]
-[EKCalendarItem canMoveOrCopyFromCalendar:toCalendar:error:]
-[EKCalendarItem canMoveOrCopyToCalendar:error:]
-[EKCalendarItem organizerIsRepresentedByAttendee:]
-[EKCalendarItem _cachedMeltedParticipantForMe]
-[EKCalendarItem _cachedMeltedParticipantForMeInAttendeeSet]
-[EKCalendarItem _setCachedMeltedParticipantForMe:]
-[EKCalendarItem _setCachedMeltedParticipantForMeInAttendeeSet:]
+[EKCalendarItem frozenClass]
+[EKCalendarItem uniqueIdentifierForObject:]
+[EKCalendarItem _dateFormat]
+[EKCalendarItem recurrenceIdentifierWithRecurrenceDate:localUID:]
+[EKCalendarItem knownRequireRSVPKeys]
___38+[EKCalendarItem knownRequireRSVPKeys]_block_invoke
+[EKCalendarItem knownPerUserPropertyKeys]
___42+[EKCalendarItem knownPerUserPropertyKeys]_block_invoke
___35+[EKCalendarItem knownIdentityKeys]_block_invoke
+[EKCalendarItem knownImmutableKeys]
___36+[EKCalendarItem knownImmutableKeys]_block_invoke
-[EKCalendarItem _applyKnownImmutableValuesFrom:]
___50+[EKCalendarItem knownRelationshipSingleValueKeys]_block_invoke
___49+[EKCalendarItem knownRelationshipMultiValueKeys]_block_invoke
___38+[EKCalendarItem knownSingleValueKeys]_block_invoke
+[EKCalendarItem keysToCheckForChangedKeysMethod]
-[EKCalendarItem UUID]
-[EKCalendarItem calendarItemExternalIdentifier]
-[EKCalendarItem externalURI]
-[EKCalendarItem isReminder]
-[EKCalendarItem setPriority:]
+[EKCalendarItem isValidDateComponents:]
+[EKCalendarItem isAllDayDateComponents:]
+[EKCalendarItem calculateDateFromDateComponents:usingTimeZone:]
-[EKCalendarItem nonNoneAlarms]
___31-[EKCalendarItem nonNoneAlarms]_block_invoke
-[EKCalendarItem attachments]
-[EKCalendarItem setAttachments:]
-[EKCalendarItem attachmentSet]
-[EKCalendarItem setAttachmentSet:]
-[EKCalendarItem hasAttachment]
-[EKCalendarItem addAttachment:]
-[EKCalendarItem removeAllAttachments]
-[EKCalendarItem removeAttachment:]
-[EKCalendarItem addAttendee:]
-[EKCalendarItem removeAttendee:]
-[EKCalendarItem organizerEmail]
-[EKCalendarItem setOrganizerEmail:]
-[EKCalendarItem organizer]
-[EKCalendarItem setOrganizer:]
-[EKCalendarItem clearCachedTimeValues]
-[EKCalendarItem _decodeValueForKey:withCoder:]
-[EKCalendarItem setAllDay:]
___28-[EKCalendarItem setAllDay:]_block_invoke
___copy_helper_block_476
___destroy_helper_block_477
-[EKCalendarItem cachedHasAttachment]
-[EKCalendarItem hasNotes]
-[EKCalendarItem _canonicalizeRecurrenceRules]
-[EKCalendarItem duplicate]
-[EKCalendarItem _keysToChangeForDuplicateWithOptions:]
-[EKCalendarItem changeIdentifiers]
-[EKCalendarItem action]
-[EKCalendarItem setAction:]
-[EKCalendarItem isDeleted]
-[EKCalendarItem futureOccurrencesCannotBeAffectedByChangingStartDateToDate:]
-[EKCalendarItem suggestedStartDateForCurrentRecurrenceRule]
-[EKCalendarItem removeRecurrenceRule:]
-[EKCalendarItem meltedAndCachedSingleRelationObjectForKey:]
-[EKCalendarItem _resetMeltedCache]
-[EKCalendarItem hasEquivalentRecurrenceRuleToItem:]
+[EKCalendarItem canonicalizedEqualityTestValue1:value2:key:object1:object2:]
-[EKCalendarItem hasComplexRecurrence]
-[EKCalendarItem singleRecurrenceRule]
-[EKCalendarItem setSingleRecurrenceRule:]
-[EKCalendarItem adjustRangeIntoUTC:]
-[EKCalendarItem _updateDatesForRecurrenceDate:]
-[EKCalendarItem _clearRecurrenceDate]
-[EKCalendarItem _nsCalendar]
+[EKCalendarItem exportToICS:]
+[EKCalendarItem itemWithIdentifier:inStore:]
+[EKCalendarItem existingItemFromTruthFile:inStore:]
-[EKCalendarItem roomAttendees]
___31-[EKCalendarItem roomAttendees]_block_invoke
-[EKCalendarItem roomAttendeeForLocationString:]
-[EKCalendarItem updateManagedObjectID]
-[EKCalendarItem _removeAllAlarms]
-[EKCalendarItem _suggestedStartDateHelperRecurrenceRuleRequiresExpansion:forDate:]
-[EKCalendarItem _validateAccessConsent:]
-[EKCalendarItem _validateAlarms:]
-[EKCalendarItem _validateRecurrence:]
-[EKCalendarItem _attachment:isDuplicateOfAttachmentInSet:]
-[EKCalendarItem _assignAttachment:toEquivalenceClassInSet:]
-[EKCalendarItem _getRepresentativesFromEquivalenceClasses:]
-[EKCalendarItem _getEquivalenceClassesOfAttachments]
-[EKCalendarItem _handleDuplicateAttachments]
+[EKCalendarItem _scheduleAgentFromScheduleAgentString:]
+[EKCalendarItem _scheduleAgentStringFromScheduleAgent:]
-[EKCalendarItem _hasCalendarChange]
-[EKCalendarItem _previousCalendar]
-[EKCalendarItem _validateAttachments:]
-[EKCalendarItem _validateAttendees:]
-[EKCalendarItem _needsAttendeePartStatReset]
-[EKCalendarItem _validateEditable:]
-[EKCalendarItem _validateEntityTypeIsSupported:]
-[EKCalendarItem _validateDefaultOrganizerExists:]
-[EKCalendarItem _validateHasCalendar:]
-[EKCalendarItem _validateMoveToCalendar:]
-[EKCalendarItem _validatePriority:]
-[EKCalendarItem _validateSchedulingAllowed:]
-[EKCalendarItem _validateDeletableBySharedCalendarShareeWithError:]
-[EKCalendarItem _validateDeletableInCalendarWithError:]
-[EKCalendarItem _validateDeletable:]
-[EKCalendarItem calendarItemPermissionNumber]
-[EKCalendarItem cachedHasAttendee]
-[EKCalendarItem cachedHasAlarm]
-[EKCalendarItem cachedIsCalendarOwnerInvitedAttendee]
-[EKCalendarItem cachedIsCurrentUserInvitedAttendee]
-[EKCalendarItem setLocalUID:]
-[EKCalendarItem setRecurrenceDateUnadjustedFromUTC:]
-[EKCalendarItem setSharedUID:]
-[EKCalendarItem .cxx_destruct]
-[EKChangeSet initWithChangeSet:]
-[EKChangeSet initWithUnbatchedChanges:]
-[EKChangeSet initWithUnbatchedSingleValueChanges:unbatchedMultiValueAdditions:unbatchedMultiValueRemovals:batchedSingleValueChanges:batchedMultiValueAdditions:batchedMultiValueRemovals:]
-[EKChangeSet initWithChangeSet:changesToSkip:]
___47-[EKChangeSet initWithChangeSet:changesToSkip:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKChangeSet initWithChangeSet:changesToKeep:]
___47-[EKChangeSet initWithChangeSet:changesToKeep:]_block_invoke
___copy_helper_block_52
___destroy_helper_block_53
-[EKChangeSet _initWithChangeSet:filter:]
-[EKChangeSet copyWithZone:]
-[EKChangeSet rollbackChanges]
-[EKChangeSet rollbackUnbatchedChanges]
-[EKChangeSet markChangesAsBatched]
-[EKChangeSet markChangesAsUnbatched]
-[EKChangeSet addObjectsToBatched:forMultiValueKey:basedOn:]
-[EKChangeSet addObjectsToUnbatched:forMultiValueKey:basedOn:]
-[EKChangeSet _addObjects:toExistingAdded:forMultiValueKey:basedOn:checkBatchedOnly:]
-[EKChangeSet _cleanupEmptySetsForMultiValueKey:]
-[EKChangeSet removeObjectsFromBatched:forMultiValueKey:basedOn:]
-[EKChangeSet removeObjectsFromUnbatched:forMultiValueKey:basedOn:]
-[EKChangeSet _removeObjects:toExistingRemoved:forMultiValueKey:basedOn:checkBatchedOnly:]
-[EKChangeSet _uniqueIDToObjectMapForObjects:]
-[EKChangeSet changedKeys]
-[EKChangeSet hasUnbatchedChangeForKey:]
-[EKChangeSet hasUnsavedMultiValueAdditionForKey:]
-[EKChangeSet unsavedMultiValueAddedObjectsForKey:]
-[EKChangeSet hasUnsavedMultiValueRemovalForKey:]
-[EKChangeSet unsavedMultiValueRemovedObjectsForKey:]
-[EKChangeSet _unsavedSingleValueChanges]
-[EKChangeSet _unsavedMultiValueAdditions]
-[EKChangeSet _unsavedMultiValueRemovals]
-[EKChangeSet valueForSingleValueKey:basedOn:]
-[EKChangeSet forceUnchangeBatchedValueForKey:]
-[EKChangeSet summary]
-[EKChangeSet setIsDeleted:]
-[EKChangeSet unbatchedSingleValueChanges]
-[EKChangeSet setUnbatchedSingleValueChanges:]
-[EKChangeSet unbatchedMultiValueAdditions]
-[EKChangeSet setUnbatchedMultiValueAdditions:]
-[EKChangeSet unbatchedMultiValueRemovals]
-[EKChangeSet setUnbatchedMultiValueRemovals:]
-[EKChangeSet batchedSingleValueChanges]
-[EKChangeSet setBatchedSingleValueChanges:]
-[EKChangeSet batchedMultiValueAdditions]
-[EKChangeSet setBatchedMultiValueAdditions:]
-[EKChangeSet batchedMultiValueRemovals]
-[EKChangeSet setBatchedMultiValueRemovals:]
-[EKChangeSet .cxx_destruct]
-[EKFrozenNotificationBoxMessage initWithObject:createPartialObject:preFrozenRelationshipObjects:]
+[EKFrozenNotificationBoxMessage meltedClass]
-[EKFrozenNotificationBoxMessage messageTypeNumber]
-[EKFrozenNotificationBoxMessage path]
-[EKFrozenNotificationBoxMessage .cxx_destruct]
-[EKEventChangeListener initWithDelegate:]
-[EKEventChangeListener dealloc]
-[EKEventChangeListener eventsChangedNotification:]
+[EKEventChangeListener updatedEventFor:changeNotification:]
-[EKEventChangeListener delegate]
-[EKEventChangeListener setDelegate:]
-[EKEventChangeListener .cxx_destruct]
-[EKReminder canMoveFromCalendar:toCalendar:error:]
-[EKReminder canMoveOrCopyFromCalendar:toCalendar:error:]
-[EKReminder entityType]
+[EKReminder itemWithIdentifier:inStore:]
___copy_helper_block_
___destroy_helper_block_
+[EKReminder knownImmutableKeys]
___32+[EKReminder knownImmutableKeys]_block_invoke
___copy_helper_block_48
___destroy_helper_block_49
-[EKReminder _applyKnownImmutableValuesFrom:]
+[EKReminder keysToCheckForChangedKeysMethod]
-[EKReminder startDateComponents]
-[EKReminder setStartDateComponents:]
-[EKReminder setDueDateComponents:]
-[EKReminder setPriority:]
-[EKReminder hasLocationAlarm]
-[EKReminder externalURI]
-[EKReminder compareDueDateWithReminder:]
+[EKReminder _adjustOrderOnReminders:boundaryOrder:reverse:eventStore:]
___71+[EKReminder _adjustOrderOnReminders:boundaryOrder:reverse:eventStore:]_block_invoke
___copy_helper_block_306
___destroy_helper_block_307
___71+[EKReminder _adjustOrderOnReminders:boundaryOrder:reverse:eventStore:]_block_invoke312
___71+[EKReminder _adjustOrderOnReminders:boundaryOrder:reverse:eventStore:]_block_invoke_2
___copy_helper_block_317
___destroy_helper_block_318
___copy_helper_block_320
___destroy_helper_block_321
___71+[EKReminder _adjustOrderOnReminders:boundaryOrder:reverse:eventStore:]_block_invoke323
___copy_helper_block_324
___destroy_helper_block_325
-[EKReminder _adjustOrderOnReminders:reverse:]
___copy_helper_block_341
___destroy_helper_block_342
-[EKReminder reorderBetweenEarlier:later:]
+[EKReminder fixBrokenICalReminderOrdersInReminderList:]
+[EKReminder fixBrokenICalReminderOrdersWithEventStore:]
-[EKReminder humanReadableRecurrenceDescription]
-[EKReminder _validateEntityTypeIsSupported:]
-[EKReminder cachedHasLocationAlarm]
+[EKEventStore setDenyAccessToEvents:]
+[EKEventStore setDenyAccessToReminders:]
+[EKEventStore accessGrantedForSource:]
___copy_helper_block_
___destroy_helper_block_
-[EKEventStore _requestAccessForMask:]
-[EKEventStore init]
-[EKEventStore initAsyncWithCompletionBlock:]
-[EKEventStore initWithAccessToEntityTypes:]
-[EKEventStore initWithSourceFilters:]
-[EKEventStore initWithStoreType:]
-[EKEventStore initWithStoreType:sourceFilters:]
-[EKEventStore initWithStoreType:includeEnabledDelegates:]
-[EKEventStore initWithStoreType:includeEnabledDelegates:sourceFilters:asyncWithCompletion:]
-[EKEventStore initWithStoreType:includeEnabledDelegates:sourceFilters:asyncWithCompletion:orWithExistingStore:andBackingStore:]
-[EKEventStore initWithEventStore:andNewBackingStore:]
-[EKEventStore copyForBackgroundUpdate]
-[EKEventStore includeEnabledDelegates]
-[EKEventStore sourceFilters]
-[EKEventStore commitObjects:error:]
-[EKEventStore _commit:onlyCommitObjects:]
-[EKEventStore _savePreFlight:withValidateBlock:anObject:error:]
___copy_helper_block_141
___destroy_helper_block_142
-[EKEventStore reset]
-[EKEventStore _setEventStoreOnObject:]
-[EKEventStore calendarWithIdentifier:]
-[EKEventStore defaultCalendarForNewEvents]
-[EKEventStore setDefaultCalendarForNewEvents:]
-[EKEventStore setDefaultCalendarForNewReminders:]
-[EKEventStore localSource]
-[EKEventStore sourceWithIdentifier:]
-[EKEventStore sourcesEnabledForEntityType:]
___44-[EKEventStore sourcesEnabledForEntityType:]_block_invoke
-[EKEventStore calendarItemWithIdentifier:]
-[EKEventStore calendarItemsWithExternalIdentifier:]
-[EKEventStore recurrenceChangeManager]
-[EKEventStore stringForOpenOption:]
-[EKEventStore stringForViewOption:]
+[EKEventStore dateStringFromDate:]
+[EKEventStore dateFromDateString:]
-[EKEventStore showDateInCalendar:inView:]
-[EKEventStore showCalendarItemInApp:withOpenOptions:inView:]
-[EKEventStore showEventInCalendar:withOpenOptions:inView:]
-[EKEventStore showReminderInReminders:withOpenOptions:]
-[EKEventStore calendarWithExternalURI:]
-[EKEventStore calendarItemWithExternalURI:]
-[EKEventStore eventWithExternalURI:]
-[EKEventStore reminderWithExternalURI:]
-[EKEventStore allReminders]
___copy_helper_block_345
___destroy_helper_block_346
-[EKEventStore removeReminder:commit:error:]
___44-[EKEventStore removeReminder:commit:error:]_block_invoke
___copy_helper_block_352
___destroy_helper_block_353
___44-[EKEventStore removeReminder:commit:error:]_block_invoke355
___copy_helper_block_358
___destroy_helper_block_359
___copy_helper_block_361
___destroy_helper_block_362
___copy_helper_block_366
___destroy_helper_block_367
___44-[EKEventStore removeCalendar:commit:error:]_block_invoke369
___copy_helper_block_370
___destroy_helper_block_371
-[EKEventStore saveSource:commit:error:]
___40-[EKEventStore saveSource:commit:error:]_block_invoke
___copy_helper_block_373
___destroy_helper_block_374
-[EKEventStore removeSource:commit:error:]
___42-[EKEventStore removeSource:commit:error:]_block_invoke
___copy_helper_block_378
___destroy_helper_block_379
___42-[EKEventStore removeSource:commit:error:]_block_invoke381
___copy_helper_block_382
___destroy_helper_block_383
-[EKEventStore remindersWithExternalIdentifier:]
-[EKEventStore _wrapReminderOccurrence:]
-[EKEventStore remindersWithCalendarIdentifiers:]
-[EKEventStore notifyChangedCalendarSource:changedCalendarSourceIdentifiers:calendar:changedCalendarIdentifiers:reminder:changedReminderIdentifiers:event:changedEventIdentifiers:otherChanges:]
-[EKEventStore calendarItemsMatchingPredicate:entityClass:]
-[EKEventStore fetchRemindersMatchingPredicate:completion:]
-[EKEventStore fetchRemindersMatchingPredicate:completionCallback:cancelCallback:]
-[EKEventStore cancelFetchRequest:]
-[EKEventStore predicateForIncompleteRemindersWithDueDateStarting:ending:calendars:]
-[EKEventStore predicateForCompletedRemindersWithCompletionDateStarting:ending:calendars:]
-[EKEventStore _predicateForRemindersWithDate:useAsCompletionDate:calendars:limitToCompletedOrIncomplete:completed:includeDatesBefore:sortOrder:]
-[EKEventStore predicateForIncompleteRemindersWithDueDate:calendars:]
-[EKEventStore predicateForIncompleteRemindersDueBeforeOrOnDueDate:calendars:]
-[EKEventStore predicateForCompletedRemindersWithDueDateOrCompletionDate:calendars:sortOrder:]
-[EKEventStore predicateForAllRemindersWithDueDate:calendars:]
-[EKEventStore predicateForRemindersWithTitle:calendars:]
-[EKEventStore predicateForRemindersWithSearchTerm:]
-[EKEventStore predicateForRemindersWithTitle:listTitle:limitToCompletedOrIncomplete:completed:dueAfter:dueBefore:searchTerm:sortOrder:]
-[EKEventStore predicateForRemindersWithTitle:listTitle:limitToCompletedOrIncomplete:completed:dueAfter:dueBefore:searchTerm:sortOrder:maxResults:]
-[EKEventStore predicateForCompletedRemindersMaxResults:]
-[EKEventStore predicateForCompletedRemindersMaxResults:calendars:]
-[EKEventStore numberOfCompletedRemindersInCalendars:]
-[EKEventStore anyCompletedRemindersInCalendars:]
-[EKEventStore _predicateForNumberOfCompletedRemindersInCalendars:]
-[EKEventStore allEvents]
-[EKEventStore saveEvent:span:commit:error:]
-[EKEventStore _saveEvent:span:commit:error:ignoreValidation:]
-[EKEventStore _saveEvents:span:commit:error:ignoreValidation:]
___63-[EKEventStore _saveEvents:span:commit:error:ignoreValidation:]_block_invoke
___copy_helper_block_504
___destroy_helper_block_505
___63-[EKEventStore _saveEvents:span:commit:error:ignoreValidation:]_block_invoke507
___copy_helper_block_510
___destroy_helper_block_511
-[EKEventStore removeEvent:span:commit:error:]
___46-[EKEventStore removeEvent:span:commit:error:]_block_invoke
___copy_helper_block_517
___destroy_helper_block_518
___46-[EKEventStore removeEvent:span:commit:error:]_block_invoke520
___copy_helper_block_521
___destroy_helper_block_522
-[EKEventStore eventsWithExternalIdentifier:]
-[EKEventStore eventWithIdentifier:]
-[EKEventStore eventsWithIdentifiers:]
-[EKEventStore wrapEventOccurrences:]
-[EKEventStore _wrapEventOccurrence:]
-[EKEventStore _wrapAndValidateEventOccurrence:]
-[EKEventStore eventsMatchingPredicate:]
-[EKEventStore fetchEventsMatchingPredicate:completion:]
___56-[EKEventStore fetchEventsMatchingPredicate:completion:]_block_invoke
___copy_helper_block_543
___destroy_helper_block_544
-[EKEventStore enumerateEventsMatchingPredicate:usingBlock:]
-[EKEventStore eventWithUniqueId:occurrenceDate:]
-[EKEventStore predicateForEventsWithStartDate:endDate:calendars:]
-[EKEventStore predicateForEventsWithStartDate:endDate:calendarIdentifiers:prefetchHint:]
-[EKEventStore predicateForEventsWithStartDate:endDate:timeZone:calendars:]
-[EKEventStore predicateForEventsWithStartDate:endDate:timeZone:calendars:prefetchHint:]
-[EKEventStore predicateForEventsWithStartDate:endDate:timeZone:calendars:calendarIdentifiers:prefetchHint:]
-[EKEventStore predicateForEventsWithTitle:location:notes:participantNames:calendars:]
-[EKEventStore resetCache]
-[EKEventStore refreshObjectIDs:inContext:]
-[EKEventStore _setRangeOfInterest:identifiersOfInterest:]
___58-[EKEventStore _setRangeOfInterest:identifiersOfInterest:]_block_invoke
___copy_helper_block_579
___destroy_helper_block_580
-[EKEventStore _newBackingStoreForType:includeEnabledDelegates:sourceFilters:asyncWithCompletion:]
-[EKEventStore backingStoreAvailableGroup]
-[EKEventStore saveDraftOfEvent:]
-[EKEventStore _saveDraftOfEvent:toDirectory:]
-[EKEventStore loadDraftOfEventWithOccurrenceID:]
-[EKEventStore _loadDraftOfEventWithOccurrenceID:fromDirectory:]
-[EKEventStore deleteDraftOfEventWithOccurrenceID:]
-[EKEventStore _deleteDraftOfEventWithOccurrenceID:fromDirectory:]
-[EKEventStore _deleteDraft:]
-[EKEventStore _draftPathForEventWithOccurrenceID:draftDirectory:]
-[EKEventStore setBackingStore:]
-[EKEventStore backingStoreType]
-[EKEventStore backgroundFetchQueue]
-[EKEventStore allowScheduling]
-[EKEventStore setAllowScheduling:]
-[EKEventStore onlyNotifyForAccountedChanges]
-[EKEventStore setOnlyNotifyForAccountedChanges:]
-[EKEventStore .cxx_destruct]
___barrierAsyncIfQueueNotNil_block_invoke
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_1
___destroy_helper_block_2
___copy_helper_block_4
___destroy_helper_block_5
___copy_helper_block_7
___destroy_helper_block_8
___copy_helper_block_10
___destroy_helper_block_11
-[EKBackingStore init]
-[EKBackingStore initWithSourceFilters:includeEnabledDelegates:]
-[EKBackingStore initWithBackingStore:]
-[EKBackingStore initWithSourceFilters:includeEnabledDelegates:orWithExistingStore:]
-[EKBackingStore backingStoreAvailableGroup]
-[EKBackingStore _copyForBackgroundUpdate]
-[EKBackingStore _updateFromBackingStore:]
-[EKBackingStore includeEnabledDelegates]
-[EKBackingStore sourceFilters]
-[EKBackingStore resetCache]
-[EKBackingStore cachedRange]
-[EKBackingStore _emptyCache]
-[EKBackingStore pruneCacheForRange:localUIDs:]
-[EKBackingStore _interestedInAndAuthorizedForEntityType:]
-[EKBackingStore _logIfNoAccessRequested]
-[EKBackingStore allEvents]
___27-[EKBackingStore allEvents]_block_invoke
-[EKBackingStore allReminders]
___30-[EKBackingStore allReminders]_block_invoke
-[EKBackingStore allOccurrences]
-[EKBackingStore _allOccurrenceKeys]
-[EKBackingStore _allCachedOccurrences]
-[EKBackingStore _allCachedMasters]
-[EKBackingStore _baseOccurrenceWithLocalUID:]
-[EKBackingStore _calendarItemForLocalUID:]
-[EKBackingStore masterEventForUID:]
-[EKBackingStore _masterEventForUID:inQueue:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___45-[EKBackingStore _masterEventForUID:inQueue:]_block_invoke
___copy_helper_block_131
___destroy_helper_block_132
-[EKBackingStore _occurrenceWithIdentifier:]
-[EKBackingStore updatedCalendarItemForOccurrence:]
-[EKBackingStore _occurrencesWithCalendarIdentifiers:]
-[EKBackingStore remindersWithCalendarIdentifiers:]
-[EKBackingStore _remindersWithCalendarIdentifiers:]
___52-[EKBackingStore _remindersWithCalendarIdentifiers:]_block_invoke
-[EKBackingStore _eventsWithCalendarIdentifiers:]
___49-[EKBackingStore _eventsWithCalendarIdentifiers:]_block_invoke
-[EKBackingStore _occurrencesForCompletionLookup]
-[EKBackingStore remindersWithDueDates]
-[EKBackingStore remindersWithDueDatesInRange:withCalendarIdentifiers:withCompletion:]
___86-[EKBackingStore remindersWithDueDatesInRange:withCalendarIdentifiers:withCompletion:]_block_invoke
___copy_helper_block_198
___destroy_helper_block_199
-[EKBackingStore remindersWithIsCompleted:maxResults:]
-[EKBackingStore remindersWithIsCompleted:maxResults:withCalendarIdentifiers:]
___78-[EKBackingStore remindersWithIsCompleted:maxResults:withCalendarIdentifiers:]_block_invoke
___copy_helper_block_206
___destroy_helper_block_207
-[EKBackingStore _changedItemForOccurrence:]
-[EKBackingStore _frozenItemWithUpdatedCalendarForOccurrence:]
___62-[EKBackingStore _frozenItemWithUpdatedCalendarForOccurrence:]_block_invoke
___copy_helper_block_224
___destroy_helper_block_225
-[EKBackingStore _reminderForOccurrence:]
-[EKBackingStore _eventForOccurrence:]
-[EKBackingStore occurrenceWithIdentifier:]
___43-[EKBackingStore occurrenceWithIdentifier:]_block_invoke
___copy_helper_block_233
___destroy_helper_block_234
-[EKBackingStore occurrencesWithIdentifiers:]
___45-[EKBackingStore occurrencesWithIdentifiers:]_block_invoke
___copy_helper_block_248
___destroy_helper_block_249
-[EKBackingStore _lookupOccurrenceWithIdentifier:type:]
-[EKBackingStore _lookupOccurrencesWithIdentifiers:type:]
-[EKBackingStore occurrencesWithExternalIdentifier:ofType:]
___59-[EKBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke
___copy_helper_block_262
___destroy_helper_block_263
___59-[EKBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke269
___copy_helper_block_272
___destroy_helper_block_273
-[EKBackingStore eventsExistOnCalendar:]
-[EKBackingStore futureScheduledEventsExistOnCalendar:]
-[EKBackingStore _expandEvent:recurrenceDate:]
-[EKBackingStore _expandEvent:recurrenceDate:prepopulatedExceptions:]
-[EKBackingStore _expandRecurrenceForIdentifier:deleteCheckQueue:lookupBlock:]
-[EKBackingStore _expandRecurrencesForIdentifiers:deleteCheckQueue:lookupBlock:]
-[EKBackingStore _expandRecurrencesForExternalIdentifier:deleteCheckQueue:externalIdentifierLookupBlock:identifierLookupBlock:]
-[EKBackingStore _expandedOccurrencesForEvent:range:]
-[EKBackingStore occurrencesForEvent:inRange:]
-[EKBackingStore _occurrencesForEvent:inRange:inQueue:]
___55-[EKBackingStore _occurrencesForEvent:inRange:inQueue:]_block_invoke
___copy_helper_block_359
___destroy_helper_block_360
-[EKBackingStore _expandEventsRange:masterEvents:]
___50-[EKBackingStore _expandEventsRange:masterEvents:]_block_invoke
___copy_helper_block_364
___destroy_helper_block_365
-[EKBackingStore canCachePredicate:]
-[EKBackingStore _expandEventRangePredicate:]
-[EKBackingStore expandAndCachePredicate:]
-[EKBackingStore _allCalendarKeys]
-[EKBackingStore eventsMarkedScheduleAgentClientExistOnCalendar:]
-[EKBackingStore calendarWithIdentifier:]
___41-[EKBackingStore calendarWithIdentifier:]_block_invoke
___copy_helper_block_385
___destroy_helper_block_386
-[EKBackingStore updatedCalendarForContainer:]
-[EKBackingStore _calendarWithIdentifier:]
-[EKBackingStore _changedCalendarForIdentifier:]
-[EKBackingStore _allCalendarsInQueue:passingTest:]
___51-[EKBackingStore _allCalendarsInQueue:passingTest:]_block_invoke
___copy_helper_block_396
___destroy_helper_block_397
-[EKBackingStore _allCalendarsInQueue:]
___39-[EKBackingStore _allCalendarsInQueue:]_block_invoke
-[EKBackingStore _allEventCalendarsInQueue:]
___44-[EKBackingStore _allEventCalendarsInQueue:]_block_invoke
-[EKBackingStore _allReminderCalendarsInQueue:]
___47-[EKBackingStore _allReminderCalendarsInQueue:]_block_invoke
-[EKBackingStore allCalendars]
-[EKBackingStore allEventCalendars]
-[EKBackingStore allReminderCalendars]
-[EKBackingStore _calendarForCalendar:]
-[EKBackingStore _frozenCalendarWithUpdatedSourceForCalendar:]
___62-[EKBackingStore _frozenCalendarWithUpdatedSourceForCalendar:]_block_invoke
___copy_helper_block_448
___destroy_helper_block_449
-[EKBackingStore setDefaultCalendarForNewEvents:]
-[EKBackingStore setDefaultCalendarForNewReminders:]
-[EKBackingStore defaultCalendarForNewEvents]
-[EKBackingStore defaultCalendarForNewReminders]
-[EKBackingStore allSources]
-[EKBackingStore sourceWithIdentifier:]
-[EKBackingStore _sourceForCalendarSource:]
-[EKBackingStore _changedSourceForIdentifier:]
-[EKBackingStore addDetachedEvents:andExceptions:toEvent:]
___58-[EKBackingStore addDetachedEvents:andExceptions:toEvent:]_block_invoke
___copy_helper_block_476
___destroy_helper_block_477
-[EKBackingStore _addExceptionDate:forLocalUID:]
-[EKBackingStore _removeExceptionDate:forLocalUID:]
-[EKBackingStore _addDetachedEvent:forLocalUID:]
-[EKBackingStore _removeDetachedEvent:forLocalUID:]
-[EKBackingStore detachedEventsForLocalUID:]
___44-[EKBackingStore detachedEventsForLocalUID:]_block_invoke
___copy_helper_block_505
___destroy_helper_block_506
-[EKBackingStore exceptionsForLocalUID:]
___40-[EKBackingStore exceptionsForLocalUID:]_block_invoke
___copy_helper_block_516
___destroy_helper_block_517
-[EKBackingStore isEventUndetached:]
-[EKBackingStore isEventUnexcepted:]
-[EKBackingStore isEventDeletedDetached:]
-[EKBackingStore diffFromCommittedEventForEvent:]
-[EKBackingStore _eventIsUndetached:inQueue:]
___45-[EKBackingStore _eventIsUndetached:inQueue:]_block_invoke
___copy_helper_block_529
___destroy_helper_block_530
-[EKBackingStore _eventIsUnexcepted:inQueue:]
___45-[EKBackingStore _eventIsUnexcepted:inQueue:]_block_invoke
___copy_helper_block_534
___destroy_helper_block_535
-[EKBackingStore _eventIsDeletedDetached:inQueue:]
-[EKBackingStore _diffFromCommittedEvent:inQueue:]
___50-[EKBackingStore _diffFromCommittedEvent:inQueue:]_block_invoke
___copy_helper_block_548
___destroy_helper_block_549
-[EKBackingStore isObjectDeletedForIdentifier:]
-[EKBackingStore isObjectDeletedForIdentifier:checkExceptions:]
-[EKBackingStore _objectIsDeletedForIdentifier:inQueue:]
-[EKBackingStore _objectIsDeletedForIdentifier:inQueue:checkExceptions:]
___72-[EKBackingStore _objectIsDeletedForIdentifier:inQueue:checkExceptions:]_block_invoke
___copy_helper_block_557
___destroy_helper_block_558
-[EKBackingStore batchRemoveEvent:span:error:]
-[EKBackingStore batchSaveEvents:span:error:]
___45-[EKBackingStore batchSaveEvents:span:error:]_block_invoke
___copy_helper_block_569
___destroy_helper_block_570
-[EKBackingStore batchChange:error:]
___36-[EKBackingStore batchChange:error:]_block_invoke
___copy_helper_block_574
___destroy_helper_block_575
-[EKBackingStore _batchChange:rebin:error:]
-[EKBackingStore batchChangeAllOrFuture:span:error:]
___52-[EKBackingStore batchChangeAllOrFuture:span:error:]_block_invoke
___copy_helper_block_593
___destroy_helper_block_594
-[EKBackingStore batchDelete:error:]
___36-[EKBackingStore batchDelete:error:]_block_invoke
___copy_helper_block_598
___destroy_helper_block_599
-[EKBackingStore batchDeleteAllOrFuture:span:error:]
___52-[EKBackingStore batchDeleteAllOrFuture:span:error:]_block_invoke
___copy_helper_block_603
___destroy_helper_block_604
-[EKBackingStore batchChangeCalendar:error:]
___44-[EKBackingStore batchChangeCalendar:error:]_block_invoke
___copy_helper_block_608
___destroy_helper_block_609
-[EKBackingStore batchChangeSource:error:]
___42-[EKBackingStore batchChangeSource:error:]_block_invoke
___copy_helper_block_613
___destroy_helper_block_614
-[EKBackingStore batchDeleteCalendar:queue:error:]
___50-[EKBackingStore batchDeleteCalendar:queue:error:]_block_invoke
___copy_helper_block_620
___destroy_helper_block_621
-[EKBackingStore batchDeleteCalendar:error:]
-[EKBackingStore batchDeleteSource:error:]
___42-[EKBackingStore batchDeleteSource:error:]_block_invoke
___copy_helper_block_629
___destroy_helper_block_630
-[EKBackingStore _batchDelete:deleteFuture:error:]
___50-[EKBackingStore _batchDelete:deleteFuture:error:]_block_invoke
___copy_helper_block_642
___destroy_helper_block_643
-[EKBackingStore _batchChange:appliesToMaster:isNewItem:error:]
-[EKBackingStore _batchChange:appliesToMaster:isNewItem:rebin:error:]
-[EKBackingStore _propagateNonDateChangesToDetachedForMaster:]
-[EKBackingStore _batchChangeCalendar:isNewCalendar:error:]
-[EKBackingStore _batchChangeCalendarSource:isNewSource:error:]
-[EKBackingStore unbatchChangeAll:originalMaster:originalExceptions:originalDetachedEvents:]
___92-[EKBackingStore unbatchChangeAll:originalMaster:originalExceptions:originalDetachedEvents:]_block_invoke
___copy_helper_block_708
___destroy_helper_block_709
-[EKBackingStore unbatchChangeFuture:fromDate:originalMaster:originalExceptions:originalDetachedEvents:]
___104-[EKBackingStore unbatchChangeFuture:fromDate:originalMaster:originalExceptions:originalDetachedEvents:]_block_invoke
___copy_helper_block_713
___destroy_helper_block_714
-[EKBackingStore unbatchDeleteAll:originalMaster:originalExceptions:originalDetachedEvents:]
___92-[EKBackingStore unbatchDeleteAll:originalMaster:originalExceptions:originalDetachedEvents:]_block_invoke
___copy_helper_block_718
___destroy_helper_block_719
-[EKBackingStore unbatchDeleteFuture:originalMaster:originalExceptions:originalDetachedEvents:]
___95-[EKBackingStore unbatchDeleteFuture:originalMaster:originalExceptions:originalDetachedEvents:]_block_invoke
___copy_helper_block_723
___destroy_helper_block_724
-[EKBackingStore unbatchDetach:]
___32-[EKBackingStore unbatchDetach:]_block_invoke
___copy_helper_block_728
___destroy_helper_block_729
-[EKBackingStore unbatchExcept:]
___32-[EKBackingStore unbatchExcept:]_block_invoke
___copy_helper_block_733
___destroy_helper_block_734
-[EKBackingStore shouldCommitObjectWithIdentifier:]
-[EKBackingStore finishBatch:]
-[EKBackingStore finishBatch:onlyCommitObjects:]
-[EKBackingStore _finishBatch:onlyCommitObjects:managedObjectContext:]
___70-[EKBackingStore _finishBatch:onlyCommitObjects:managedObjectContext:]_block_invoke
___copy_helper_block_752
___destroy_helper_block_753
-[EKBackingStore _clearCachedNotificationBoxMessageCountsBehindDispatchQueue:]
___78-[EKBackingStore _clearCachedNotificationBoxMessageCountsBehindDispatchQueue:]_block_invoke
___copy_helper_block_774
___destroy_helper_block_775
-[EKBackingStore _cleanUpAfterBatchWithError:managedObjectContext:]
-[EKBackingStore _calendarsRequiringNotificationBoxMessageCountCacheUpdate]
___75-[EKBackingStore _calendarsRequiringNotificationBoxMessageCountCacheUpdate]_block_invoke
___copy_helper_block_785
___destroy_helper_block_786
-[EKBackingStore _finishBatchCalendarItemsWithChangedIdentifiers:error:managedObjectContext:]
-[EKBackingStore createNewManagedItemBlockWithContext:error:]
-[EKBackingStore prepareForManagedItemChangesBlock]
-[EKBackingStore applyChangeToManagedItemBlockWithError:]
-[EKBackingStore deleteManagedItemBlock]
-[EKBackingStore frozenItemBlock]
___33-[EKBackingStore frozenItemBlock]_block_invoke
___copy_helper_block_816
___destroy_helper_block_817
-[EKBackingStore lookupChangedItemBlock]
___40-[EKBackingStore lookupChangedItemBlock]_block_invoke
___copy_helper_block_822
___destroy_helper_block_823
-[EKBackingStore updateCreatedItemsBlock]
___41-[EKBackingStore updateCreatedItemsBlock]_block_invoke
___copy_helper_block_826
___destroy_helper_block_827
-[EKBackingStore updateChangedItemBlock]
___40-[EKBackingStore updateChangedItemBlock]_block_invoke
___copy_helper_block_830
___destroy_helper_block_831
-[EKBackingStore updateDeletedItemsBlock]
___41-[EKBackingStore updateDeletedItemsBlock]_block_invoke
___copy_helper_block_837
___destroy_helper_block_838
-[EKBackingStore _updateItemsWithContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:wrappedVersionBlock:lookupChangedBlock:updateCreatedBackingObjectBlock:updateChangedBackingObjectBlock:updateDeletedBackingObjectBlock:changedIdentifiers:]
-[EKBackingStore _updateCreatedItemsWithCreatedObjectDictionary:managedObjectContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:locallyChangedIdentifiers:]
-[EKBackingStore _updateChangedAndDeletedItemsWithCreatedObjectDictionary:managedObjectContext:error:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:changedLocalIDs:locallyChangedIdentifiers:]
-[EKBackingStore _updateRecurrenceExceptionsInContext:error:]
-[EKBackingStore _finishBatchCalendarsWithChangedIdentifiers:error:managedObjectContext:]
-[EKBackingStore createNewManagedCalendarBlockWithContext:error:]
-[EKBackingStore prepareForManagedCalendarChangesBlock]
-[EKBackingStore applyChangeToManagedCalendarBlockWithError:]
-[EKBackingStore deleteManagedCalendarBlock]
-[EKBackingStore frozenCalendarBlock]
___37-[EKBackingStore frozenCalendarBlock]_block_invoke
-[EKBackingStore lookupChangedCalendarBlock]
___44-[EKBackingStore lookupChangedCalendarBlock]_block_invoke
___copy_helper_block_882
___destroy_helper_block_883
-[EKBackingStore updateCreatedCalendarsBlock]
___45-[EKBackingStore updateCreatedCalendarsBlock]_block_invoke
___copy_helper_block_886
___destroy_helper_block_887
-[EKBackingStore updateChangedCalendarBlock]
___44-[EKBackingStore updateChangedCalendarBlock]_block_invoke
___copy_helper_block_890
___destroy_helper_block_891
-[EKBackingStore updateDeletedCalendarsBlock]
___45-[EKBackingStore updateDeletedCalendarsBlock]_block_invoke
___copy_helper_block_893
___destroy_helper_block_894
-[EKBackingStore _updateCalendarsWithContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:wrappedVersionBlock:lookupChangedBlock:updateCreatedBackingObjectBlock:updateChangedBackingObjectBlock:updateDeletedBackingObjectBlock:changedIdentifiers:]
-[EKBackingStore _updateCreatedCalendarsWithCreatedObjectDictionary:managedObjectContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:locallyChangedIdentifiers:]
-[EKBackingStore _updateChangedAndDeletedCalendarsWithCreatedObjectDictionary:managedObjectContext:error:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:changedLocalIDs:locallyChangedIdentifiers:]
-[EKBackingStore _finishBatchSourcesWithChangedIdentifiers:error:managedObjectContext:]
-[EKBackingStore createNewManagedGroupBlockWithContext:error:]
-[EKBackingStore prepareForManagedGroupChangesBlock]
-[EKBackingStore applyChangeToManagedGroupBlockWithError:]
-[EKBackingStore deleteManagedGroupBlock]
-[EKBackingStore frozenCalendarSource]
___38-[EKBackingStore frozenCalendarSource]_block_invoke
-[EKBackingStore lookupChangedCalendarSourceBlock]
___50-[EKBackingStore lookupChangedCalendarSourceBlock]_block_invoke
___copy_helper_block_928
___destroy_helper_block_929
-[EKBackingStore updateCreatedCalendarSourceBlock]
___50-[EKBackingStore updateCreatedCalendarSourceBlock]_block_invoke
___copy_helper_block_932
___destroy_helper_block_933
-[EKBackingStore updateChangedCalendarSourceBlock]
___50-[EKBackingStore updateChangedCalendarSourceBlock]_block_invoke
___copy_helper_block_936
___destroy_helper_block_937
-[EKBackingStore updateDeletedCalendarSourceBlock]
___50-[EKBackingStore updateDeletedCalendarSourceBlock]_block_invoke
___copy_helper_block_939
___destroy_helper_block_940
-[EKBackingStore _updateSourcesWithContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:wrappedVersionBlock:lookupChangedBlock:updateCreatedBackingObjectBlock:updateChangedBackingObjectBlock:updateDeletedBackingObjectBlock:changedIdentifiers:]
-[EKBackingStore _updateCreatedSourcesWithCreatedObjectDictionary:managedObjectContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:locallyChangedIdentifiers:]
-[EKBackingStore _updateChangedAndDeletedSourcesWithCreatedObjectDictionary:managedObjectContext:error:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:changedLocalIDs:locallyChangedIdentifiers:]
-[EKBackingStore _updateBackingSource:createdObjects:changedLocalIDs:wrappedVersionBlock:lookupChangedBlock:updateCreatedBackingObjectBlock:updateChangedBackingObjectBlock:updateDeletedBackingObjectBlock:inContext:]
___215-[EKBackingStore _updateBackingSource:createdObjects:changedLocalIDs:wrappedVersionBlock:lookupChangedBlock:updateCreatedBackingObjectBlock:updateChangedBackingObjectBlock:updateDeletedBackingObjectBlock:inContext:]_block_invoke
___copy_helper_block_950
___destroy_helper_block_951
-[EKBackingStore createNonPartialFrozenObjectAndUpdateBackingObjectsTrackerForPartialObject:withFrozenClass:]
+[EKBackingStore createNonPartialFrozenObjectForPartialObject:withFrozenClass:]
-[EKBackingStore createNonPartialObjectAndUpdateBackingObjectsTrackerForPartialObject:withMeltedClass:]
-[EKBackingStore errorForCalendar:]
-[EKBackingStore errorForSource:]
-[EKBackingStore notificationBoxMessageCountForCalendar:]
-[EKBackingStore notificationBoxMessageCountForCalendar:allowCachedValue:]
-[EKBackingStore refreshObject:]
-[EKBackingStore refreshObject:inQueue:]
-[EKBackingStore resetObject:inQueue:]
-[EKBackingStore _rollbackObjectToSaved:inQueue:]
___49-[EKBackingStore _rollbackObjectToSaved:inQueue:]_block_invoke
___copy_helper_block_1000
___destroy_helper_block_1001
-[EKBackingStore rollbackObject:]
-[EKBackingStore rollbackObject:unbatchedOnly:]
-[EKBackingStore resetObject:]
-[EKBackingStore rollbackObjectToSaved:]
-[EKBackingStore refreshBackingStore]
___37-[EKBackingStore refreshBackingStore]_block_invoke
___copy_helper_block_1017
___destroy_helper_block_1018
-[EKBackingStore refreshCalendarItemsWithObjectIDs:]
-[EKBackingStore refreshCalendarItemsWithObjectIDs:createPartialObjects:]
-[EKBackingStore _refreshCalendarItemsWithObjectIDs:createPartialObjects:inQueue:]
-[EKBackingStore refreshCalendarsWithObjectIDs:]
-[EKBackingStore refreshCalendarsWithObjectIDs:createPartialObjects:]
-[EKBackingStore refreshSourcesWithObjectIDs:]
-[EKBackingStore refreshSourcesWithObjectIDs:createPartialObjects:]
-[EKBackingStore _refreshCalendarsWithObjectIDs:createPartialObjects:inQueue:]
-[EKBackingStore _refreshSourcesWithObjectIDs:createPartialObjects:inQueue:]
-[EKBackingStore refreshSources]
-[EKBackingStore _notifyChangedOccurrence:]
-[EKBackingStore _notifyChangedCalendarSource:changedCalendarSourceIdentifiers:calendar:changedCalendarIdentifiers:reminder:changedReminderIdentifiers:event:changedEventIdentifiers:]
-[EKBackingStore _notifyChangedCalendarSource:changedCalendarSourceIdentifiers:calendar:changedCalendarIdentifiers:reminder:changedReminderIdentifiers:event:changedEventIdentifiers:otherChanges:]
-[EKBackingStore _notifyErrorStateChanged]
-[EKBackingStore _reminderAlertFired:]
-[EKBackingStore _reminderBecameOverdue:]
-[EKBackingStore sourceErrors]
-[EKBackingStore accessToRemindersRequested]
-[EKBackingStore setAccessToRemindersRequested:]
-[EKBackingStore accessToEventsRequested]
-[EKBackingStore setAccessToEventsRequested:]
-[EKBackingStore changeTracker]
-[EKBackingStore commitOnlyTheseObjects]
-[EKBackingStore setCommitOnlyTheseObjects:]
-[EKBackingStore createdObjectsTracker]
-[EKBackingStore backingObjectsTracker]
-[EKBackingStore mainStore]
-[EKBackingStore setMainStore:]
-[EKBackingStore occurrenceCache]
-[EKBackingStore setOccurrenceCache:]
-[EKBackingStore recurrenceChangeManager]
-[EKBackingStore calendarChangeHelper]
-[EKBackingStore backingObjectsQueue]
-[EKBackingStore setBackingObjectsQueue:]
-[EKBackingStore backingStoreIdentifier]
-[EKBackingStore setBackingStoreIdentifier:]
-[EKBackingStore cachedNotificationBoxMessageCounts]
-[EKBackingStore setCachedNotificationBoxMessageCounts:]
-[EKBackingStore .cxx_destruct]
-[EKCalendarStoreBackingStore init]
-[EKCalendarStoreBackingStore initWithSourceFilters:includeEnabledDelegates:asyncWithCompletion:]
-[EKCalendarStoreBackingStore initWithBackingStore:]
-[EKCalendarStoreBackingStore backingStoreAvailableGroup]
-[EKCalendarStoreBackingStore initWithSourceFilters:includeEnabledDelegates:asyncWithCompletion:orWithExistingStore:]
___117-[EKCalendarStoreBackingStore initWithSourceFilters:includeEnabledDelegates:asyncWithCompletion:orWithExistingStore:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___117-[EKCalendarStoreBackingStore initWithSourceFilters:includeEnabledDelegates:asyncWithCompletion:orWithExistingStore:]_block_invoke19
___117-[EKCalendarStoreBackingStore initWithSourceFilters:includeEnabledDelegates:asyncWithCompletion:orWithExistingStore:]_block_invoke_2
___117-[EKCalendarStoreBackingStore initWithSourceFilters:includeEnabledDelegates:asyncWithCompletion:orWithExistingStore:]_block_invoke_3
___copy_helper_block_24
___destroy_helper_block_25
___copy_helper_block_28
___destroy_helper_block_29
___copy_helper_block_31
___destroy_helper_block_32
-[EKCalendarStoreBackingStore dealloc]
-[EKCalendarStoreBackingStore _updatePersistenceAvailability]
-[EKCalendarStoreBackingStore cachedRange]
-[EKCalendarStoreBackingStore pruneCacheForRange:localUIDs:]
___60-[EKCalendarStoreBackingStore pruneCacheForRange:localUIDs:]_block_invoke
___copy_helper_block_101
___destroy_helper_block_102
-[EKCalendarStoreBackingStore allEvents]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___40-[EKCalendarStoreBackingStore allEvents]_block_invoke
___copy_helper_block_106
___destroy_helper_block_107
___40-[EKCalendarStoreBackingStore allEvents]_block_invoke109
___copy_helper_block_112
___destroy_helper_block_113
___40-[EKCalendarStoreBackingStore allEvents]_block_invoke115
___copy_helper_block_118
___destroy_helper_block_119
___40-[EKCalendarStoreBackingStore allEvents]_block_invoke121
___copy_helper_block_127
___destroy_helper_block_128
-[EKCalendarStoreBackingStore allReminders]
___43-[EKCalendarStoreBackingStore allReminders]_block_invoke
___copy_helper_block_135
___destroy_helper_block_136
___43-[EKCalendarStoreBackingStore allReminders]_block_invoke138
___copy_helper_block_141
___destroy_helper_block_142
___43-[EKCalendarStoreBackingStore allReminders]_block_invoke144
___copy_helper_block_145
___destroy_helper_block_146
___43-[EKCalendarStoreBackingStore allReminders]_block_invoke148
___copy_helper_block_151
___destroy_helper_block_152
___copy_helper_block_160
___destroy_helper_block_161
___64-[EKCalendarStoreBackingStore remindersWithCalendarIdentifiers:]_block_invoke163
___copy_helper_block_164
___destroy_helper_block_165
___64-[EKCalendarStoreBackingStore remindersWithCalendarIdentifiers:]_block_invoke167
___copy_helper_block_168
___destroy_helper_block_169
-[EKCalendarStoreBackingStore remindersWithIsCompleted:maxResults:withCalendarIdentifiers:]
___91-[EKCalendarStoreBackingStore remindersWithIsCompleted:maxResults:withCalendarIdentifiers:]_block_invoke
___copy_helper_block_179
___destroy_helper_block_180
___91-[EKCalendarStoreBackingStore remindersWithIsCompleted:maxResults:withCalendarIdentifiers:]_block_invoke182
___copy_helper_block_183
___destroy_helper_block_184
___91-[EKCalendarStoreBackingStore remindersWithIsCompleted:maxResults:withCalendarIdentifiers:]_block_invoke186
___copy_helper_block_189
___destroy_helper_block_190
-[EKCalendarStoreBackingStore remindersWithDueDatesInRange:withCalendarIdentifiers:withCompletion:]
___99-[EKCalendarStoreBackingStore remindersWithDueDatesInRange:withCalendarIdentifiers:withCompletion:]_block_invoke
___copy_helper_block_200
___destroy_helper_block_201
___99-[EKCalendarStoreBackingStore remindersWithDueDatesInRange:withCalendarIdentifiers:withCompletion:]_block_invoke203
___copy_helper_block_204
___destroy_helper_block_205
___99-[EKCalendarStoreBackingStore remindersWithDueDatesInRange:withCalendarIdentifiers:withCompletion:]_block_invoke207
___copy_helper_block_208
___destroy_helper_block_209
-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]
___72-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke
___copy_helper_block_220
___destroy_helper_block_221
___72-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke223
___copy_helper_block_231
___destroy_helper_block_232
___72-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke234
___copy_helper_block_248
___destroy_helper_block_249
___72-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke251
___72-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke_2
___copy_helper_block_254
___destroy_helper_block_255
___copy_helper_block_259
___destroy_helper_block_260
___72-[EKCalendarStoreBackingStore occurrencesWithExternalIdentifier:ofType:]_block_invoke263
___copy_helper_block_266
___destroy_helper_block_267
-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke
___copy_helper_block_274
___destroy_helper_block_275
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke277
___copy_helper_block_280
___destroy_helper_block_281
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke283
___copy_helper_block_284
___destroy_helper_block_285
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke287
___copy_helper_block_290
___destroy_helper_block_291
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke299
___copy_helper_block_302
___destroy_helper_block_303
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke305
___copy_helper_block_306
___destroy_helper_block_307
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke309
___copy_helper_block_310
___destroy_helper_block_311
___68-[EKCalendarStoreBackingStore _lookupOccurrenceWithIdentifier:type:]_block_invoke313
___copy_helper_block_316
___destroy_helper_block_317
-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke
___copy_helper_block_322
___destroy_helper_block_323
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke325
___copy_helper_block_326
___destroy_helper_block_327
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke330
___copy_helper_block_331
___destroy_helper_block_332
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke334
___copy_helper_block_340
___destroy_helper_block_341
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke346
___copy_helper_block_351
___destroy_helper_block_352
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke354
___copy_helper_block_355
___destroy_helper_block_356
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke358
___copy_helper_block_359
___destroy_helper_block_360
___70-[EKCalendarStoreBackingStore _lookupOccurrencesWithIdentifiers:type:]_block_invoke362
___copy_helper_block_363
___destroy_helper_block_364
-[EKCalendarStoreBackingStore eventsMarkedScheduleAgentClientExistOnCalendar:]
-[EKCalendarStoreBackingStore futureScheduledEventsExistOnCalendar:]
-[EKCalendarStoreBackingStore eventsExistOnCalendar:]
-[EKCalendarStoreBackingStore _expandEventRangePredicate:]
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke
___copy_helper_block_417
___destroy_helper_block_418
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke420
___copy_helper_block_423
___destroy_helper_block_424
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke426
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke_2
___copy_helper_block_447
___destroy_helper_block_448
___copy_helper_block_455
___destroy_helper_block_456
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke458
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke_2462
___copy_helper_block_463
___destroy_helper_block_464
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke475
___copy_helper_block_478
___destroy_helper_block_479
___copy_helper_block_490
___destroy_helper_block_491
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke493
___58-[EKCalendarStoreBackingStore _expandEventRangePredicate:]_block_invoke_2495
___copy_helper_block_500
___destroy_helper_block_501
___copy_helper_block_508
___destroy_helper_block_509
-[EKCalendarStoreBackingStore _expandedRangeForPredicate:]
-[EKCalendarStoreBackingStore _kickOffEventPrefetchIfNecessary:]
___64-[EKCalendarStoreBackingStore _kickOffEventPrefetchIfNecessary:]_block_invoke
___copy_helper_block_537
___destroy_helper_block_538
___64-[EKCalendarStoreBackingStore _kickOffEventPrefetchIfNecessary:]_block_invoke544
___copy_helper_block_554
___destroy_helper_block_555
-[EKCalendarStoreBackingStore errorForCalendar:]
-[EKCalendarStoreBackingStore errorForSource:]
___46-[EKCalendarStoreBackingStore errorForSource:]_block_invoke
___copy_helper_block_574
___destroy_helper_block_575
-[EKCalendarStoreBackingStore notificationBoxMessageCountForCalendar:allowCachedValue:]
___87-[EKCalendarStoreBackingStore notificationBoxMessageCountForCalendar:allowCachedValue:]_block_invoke
___copy_helper_block_588
___destroy_helper_block_589
___87-[EKCalendarStoreBackingStore notificationBoxMessageCountForCalendar:allowCachedValue:]_block_invoke595
___copy_helper_block_602
___destroy_helper_block_603
___87-[EKCalendarStoreBackingStore notificationBoxMessageCountForCalendar:allowCachedValue:]_block_invoke605
___copy_helper_block_613
___destroy_helper_block_614
-[EKCalendarStoreBackingStore setDefaultCalendarForNewEvents:]
-[EKCalendarStoreBackingStore defaultCalendarForNewEvents]
___58-[EKCalendarStoreBackingStore defaultCalendarForNewEvents]_block_invoke
___copy_helper_block_641
___destroy_helper_block_642
___copy_helper_block_651
___destroy_helper_block_652
-[EKCalendarStoreBackingStore allSources]
___41-[EKCalendarStoreBackingStore allSources]_block_invoke
___copy_helper_block_672
___destroy_helper_block_673
-[EKCalendarStoreBackingStore sourceWithIdentifier:]
___52-[EKCalendarStoreBackingStore sourceWithIdentifier:]_block_invoke
___copy_helper_block_677
___destroy_helper_block_678
___48-[EKCalendarStoreBackingStore sourceIdentifiers]_block_invoke
___copy_helper_block_682
___destroy_helper_block_683
-[EKCalendarStoreBackingStore finishBatch:onlyCommitObjects:]
-[EKCalendarStoreBackingStore _cleanUpAfterBatchWithError:managedObjectContext:]
-[EKCalendarStoreBackingStore createNewManagedItemBlockWithContext:error:]
___74-[EKCalendarStoreBackingStore createNewManagedItemBlockWithContext:error:]_block_invoke
___copy_helper_block_737
___destroy_helper_block_738
-[EKCalendarStoreBackingStore prepareForManagedItemChangesBlock]
___64-[EKCalendarStoreBackingStore prepareForManagedItemChangesBlock]_block_invoke
___copy_helper_block_745
___destroy_helper_block_746
-[EKCalendarStoreBackingStore applyChangeToManagedItemBlockWithError:]
___70-[EKCalendarStoreBackingStore applyChangeToManagedItemBlockWithError:]_block_invoke
___copy_helper_block_757
___destroy_helper_block_758
-[EKCalendarStoreBackingStore deleteManagedItemBlock]
___53-[EKCalendarStoreBackingStore deleteManagedItemBlock]_block_invoke
___copy_helper_block_780
___destroy_helper_block_781
-[EKCalendarStoreBackingStore _updateCreatedItemsWithCreatedObjectDictionary:managedObjectContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore _updateChangedAndDeletedItemsWithCreatedObjectDictionary:managedObjectContext:error:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:changedLocalIDs:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore _updateRecurrenceExceptionsInContext:error:]
-[EKCalendarStoreBackingStore createNewManagedCalendarBlockWithContext:error:]
___78-[EKCalendarStoreBackingStore createNewManagedCalendarBlockWithContext:error:]_block_invoke
___copy_helper_block_845
___destroy_helper_block_846
-[EKCalendarStoreBackingStore prepareForManagedCalendarChangesBlock]
___68-[EKCalendarStoreBackingStore prepareForManagedCalendarChangesBlock]_block_invoke
___copy_helper_block_849
___destroy_helper_block_850
-[EKCalendarStoreBackingStore applyChangeToManagedCalendarBlockWithError:]
___74-[EKCalendarStoreBackingStore applyChangeToManagedCalendarBlockWithError:]_block_invoke
___copy_helper_block_855
___destroy_helper_block_856
-[EKCalendarStoreBackingStore deleteManagedCalendarBlock]
___57-[EKCalendarStoreBackingStore deleteManagedCalendarBlock]_block_invoke
___copy_helper_block_877
___destroy_helper_block_878
-[EKCalendarStoreBackingStore _updateCreatedCalendarsWithCreatedObjectDictionary:managedObjectContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore _updateChangedAndDeletedCalendarsWithCreatedObjectDictionary:managedObjectContext:error:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:changedLocalIDs:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore createNewManagedGroupBlockWithContext:error:]
___75-[EKCalendarStoreBackingStore createNewManagedGroupBlockWithContext:error:]_block_invoke
___copy_helper_block_891
___destroy_helper_block_892
-[EKCalendarStoreBackingStore prepareForManagedGroupChangesBlock]
-[EKCalendarStoreBackingStore applyChangeToManagedGroupBlockWithError:]
___71-[EKCalendarStoreBackingStore applyChangeToManagedGroupBlockWithError:]_block_invoke
___copy_helper_block_897
___destroy_helper_block_898
-[EKCalendarStoreBackingStore deleteManagedGroupBlock]
___54-[EKCalendarStoreBackingStore deleteManagedGroupBlock]_block_invoke
-[EKCalendarStoreBackingStore _updateCreatedSourcesWithCreatedObjectDictionary:managedObjectContext:error:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore _updateChangedAndDeletedSourcesWithCreatedObjectDictionary:managedObjectContext:error:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:changedLocalIDs:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore _createMObjWithIdentifier:createNewManagedObjectBlock:prepareForChangesBlock:applyChangeBlock:createdManagedObjects:locallyChangedIdentifiers:]
-[EKCalendarStoreBackingStore _updateMultiValueRelationshipObjectsOnCalManagedObject:fromEKObject:usingRelationKey:uniqueIdentifierKeyForRelationshipObject:createNewManagedObjectBlock:applyChangesFromEKObjectToCalManagedObjectBlock:removeAndAddNewlyCreatedObjectBlock:deleteManagedObjectBlock:context:error:]
___308-[EKCalendarStoreBackingStore _updateMultiValueRelationshipObjectsOnCalManagedObject:fromEKObject:usingRelationKey:uniqueIdentifierKeyForRelationshipObject:createNewManagedObjectBlock:applyChangesFromEKObjectToCalManagedObjectBlock:removeAndAddNewlyCreatedObjectBlock:deleteManagedObjectBlock:context:error:]_block_invoke
___copy_helper_block_924
___destroy_helper_block_925
___308-[EKCalendarStoreBackingStore _updateMultiValueRelationshipObjectsOnCalManagedObject:fromEKObject:usingRelationKey:uniqueIdentifierKeyForRelationshipObject:createNewManagedObjectBlock:applyChangesFromEKObjectToCalManagedObjectBlock:removeAndAddNewlyCreatedObjectBlock:deleteManagedObjectBlock:context:error:]_block_invoke930
___copy_helper_block_931
___destroy_helper_block_932
___copy_helper_block_951
___destroy_helper_block_952
___94-[EKCalendarStoreBackingStore _changeAlarmsOnCalManagedCalendarItem:fromEKCalendarItem:error:]_block_invoke955
___copy_helper_block_1016
___destroy_helper_block_1017
___94-[EKCalendarStoreBackingStore _changeAlarmsOnCalManagedCalendarItem:fromEKCalendarItem:error:]_block_invoke1019
-[EKCalendarStoreBackingStore _getPathInCacheForAttachment:onEvent:]
-[EKCalendarStoreBackingStore principalFromSource:]
-[EKCalendarStoreBackingStore _prepAttachment:forUploadingForEvent:]
-[EKCalendarStoreBackingStore _needToSetAttachmentDeletionEtagForEvent:]
-[EKCalendarStoreBackingStore _removeAttachment:fromEvent:]
-[EKCalendarStoreBackingStore _changeAttachmentsOnCalManagedEvent:fromEKEvent:error:]
___85-[EKCalendarStoreBackingStore _changeAttachmentsOnCalManagedEvent:fromEKEvent:error:]_block_invoke
___copy_helper_block_1098
___destroy_helper_block_1099
___85-[EKCalendarStoreBackingStore _changeAttachmentsOnCalManagedEvent:fromEKEvent:error:]_block_invoke1101
___copy_helper_block_1120
___destroy_helper_block_1121
___85-[EKCalendarStoreBackingStore _changeAttachmentsOnCalManagedEvent:fromEKEvent:error:]_block_invoke1123
___copy_helper_block_1128
___destroy_helper_block_1129
___85-[EKCalendarStoreBackingStore _changeAttachmentsOnCalManagedEvent:fromEKEvent:error:]_block_invoke1131
___copy_helper_block_1134
___destroy_helper_block_1135
-[EKCalendarStoreBackingStore _changeAttendeesOnCalManagedEvent:fromEKEvent:error:]
___83-[EKCalendarStoreBackingStore _changeAttendeesOnCalManagedEvent:fromEKEvent:error:]_block_invoke
___copy_helper_block_1150
___destroy_helper_block_1151
___83-[EKCalendarStoreBackingStore _changeAttendeesOnCalManagedEvent:fromEKEvent:error:]_block_invoke1153
___copy_helper_block_1190
___destroy_helper_block_1191
___83-[EKCalendarStoreBackingStore _changeAttendeesOnCalManagedEvent:fromEKEvent:error:]_block_invoke1193
___copy_helper_block_1201
___destroy_helper_block_1202
___83-[EKCalendarStoreBackingStore _changeAttendeesOnCalManagedEvent:fromEKEvent:error:]_block_invoke1204
-[EKCalendarStoreBackingStore _updateUnrecognizedICSOnCalManagedEvent:fromEvent:]
-[EKCalendarStoreBackingStore _changeEvent:withLocalUID:error:]
-[EKCalendarStoreBackingStore _changeGroup:withIdentifier:error:]
-[EKCalendarStoreBackingStore _changeNotificationBoxMessagesOnCalManagedEvent:fromEKEvent:error:]
___97-[EKCalendarStoreBackingStore _changeNotificationBoxMessagesOnCalManagedEvent:fromEKEvent:error:]_block_invoke
___copy_helper_block_1343
___destroy_helper_block_1344
___97-[EKCalendarStoreBackingStore _changeNotificationBoxMessagesOnCalManagedEvent:fromEKEvent:error:]_block_invoke1346
___97-[EKCalendarStoreBackingStore _changeNotificationBoxMessagesOnCalManagedEvent:fromEKEvent:error:]_block_invoke_2
___97-[EKCalendarStoreBackingStore _changeNotificationBoxMessagesOnCalManagedEvent:fromEKEvent:error:]_block_invoke_3
-[EKCalendarStoreBackingStore _changeOrDeleteMObj:withIdentifier:prepareForChangesBlock:applyChangeBlock:deleteManagedObjectBlock:locallyChangedIdentifiers:]
___copy_helper_block_1394
___destroy_helper_block_1395
___87-[EKCalendarStoreBackingStore _changeShareesOnCalManagedCalendar:fromEKCalendar:error:]_block_invoke1397
___copy_helper_block_1415
___destroy_helper_block_1416
___87-[EKCalendarStoreBackingStore _changeShareesOnCalManagedCalendar:fromEKCalendar:error:]_block_invoke1418
-[EKCalendarStoreBackingStore _managedObjectForEKObject:withIdentifier:context:error:]
-[EKCalendarStoreBackingStore _eventForLocalUID:]
-[EKCalendarStoreBackingStore _eventForLocalUID:createNonPartialObject:]
-[EKCalendarStoreBackingStore _reminderForLocalUID:createNonPartialObject:]
-[EKCalendarStoreBackingStore createNonPartialFrozenObjectAndUpdateBackingObjectsTrackerForPartialObject:withFrozenClass:]
+[EKCalendarStoreBackingStore createNonPartialFrozenObjectForPartialObject:withFrozenClass:]
-[EKCalendarStoreBackingStore resetObject:inQueue:]
-[EKCalendarStoreBackingStore refreshBackingStore]
___50-[EKCalendarStoreBackingStore refreshBackingStore]_block_invoke
___copy_helper_block_1451
___destroy_helper_block_1452
-[EKCalendarStoreBackingStore refreshCalendarItemsWithObjectIDs:inManagedObjectContext:]
-[EKCalendarStoreBackingStore _refreshCalendarItemsWithObjectIDs:createPartialObjects:inQueue:]
-[EKCalendarStoreBackingStore _refreshCalendarItemsWithObjectIDs:createPartialObjects:inQueue:inManagedObjectContext:]
___118-[EKCalendarStoreBackingStore _refreshCalendarItemsWithObjectIDs:createPartialObjects:inQueue:inManagedObjectContext:]_block_invoke
___copy_helper_block_1472
___destroy_helper_block_1473
-[EKCalendarStoreBackingStore _refreshCalendarsWithObjectIDs:createPartialObjects:inQueue:]
___91-[EKCalendarStoreBackingStore _refreshCalendarsWithObjectIDs:createPartialObjects:inQueue:]_block_invoke
___copy_helper_block_1480
___destroy_helper_block_1481
-[EKCalendarStoreBackingStore _refreshSourcesWithObjectIDs:createPartialObjects:inQueue:]
___89-[EKCalendarStoreBackingStore _refreshSourcesWithObjectIDs:createPartialObjects:inQueue:]_block_invoke
___copy_helper_block_1487
___destroy_helper_block_1488
-[EKCalendarStoreBackingStore refreshSources]
-[EKCalendarStoreBackingStore _removeManagedObjectIDsFromCache:]
-[EKCalendarStoreBackingStore _calendarItemPredicateWithItemIdentifiers:]
-[EKCalendarStoreBackingStore _calendarItemPredicateWithItemIdentifiers:calendarIdentifiers:]
-[EKCalendarStoreBackingStore _calendarItemPredicateWithExternalIdentifiers:]
-[EKCalendarStoreBackingStore _calendarItemPredicateWithCalendarIdentifiers:]
-[EKCalendarStoreBackingStore _calendarPredicateWithCalendarIdentifiers:]
-[EKCalendarStoreBackingStore _reminderPredicateForIncompleteReminders]
-[EKCalendarStoreBackingStore contextToleratingInaccessibleFault]
-[EKCalendarStoreBackingStore _managedObjectsForClass:withManagedObjectIDs:managedObjectContext:]
-[EKCalendarStoreBackingStore _addExceptionsForItem:inRange:toUpdates:]
___71-[EKCalendarStoreBackingStore _addExceptionsForItem:inRange:toUpdates:]_block_invoke
___copy_helper_block_1539
___destroy_helper_block_1540
+[EKCalendarStoreBackingStore _addPrefetchRelationshipsForCalendarItemFetch:]
+[EKCalendarStoreBackingStore _addPrefetchRelationshipsForCalendarItemFetch:prefetchItemsThatSupportFaulting:]
-[EKCalendarStoreBackingStore _coreDataCalendarsFromCalendarIdentifiers:inContext:]
-[EKCalendarStoreBackingStore _coreDataEventCalendarsFromCalendarIdentifiers:inContext:]
-[EKCalendarStoreBackingStore _coreDataSourcesFromSourceIdentifiers:inContext:]
-[EKCalendarStoreBackingStore _handleTimeZoneChange:]
___53-[EKCalendarStoreBackingStore _handleTimeZoneChange:]_block_invoke
___53-[EKCalendarStoreBackingStore _handleTimeZoneChange:]_block_invoke_2
___copy_helper_block_1582
___destroy_helper_block_1583
-[EKCalendarStoreBackingStore _handleLocaleChange:]
___51-[EKCalendarStoreBackingStore _handleLocaleChange:]_block_invoke
___51-[EKCalendarStoreBackingStore _handleLocaleChange:]_block_invoke_2
___copy_helper_block_1587
___destroy_helper_block_1588
-[EKCalendarStoreBackingStore _shouldHandleNotification:]
-[EKCalendarStoreBackingStore _updateTagsForNotification:contextForTags:]
___73-[EKCalendarStoreBackingStore _updateTagsForNotification:contextForTags:]_block_invoke
___copy_helper_block_1618
___destroy_helper_block_1619
-[EKCalendarStoreBackingStore _fetchUpdatedRemindersForUpdatedCalendars:updatedCalendarItems:accountingInfo:]
___109-[EKCalendarStoreBackingStore _fetchUpdatedRemindersForUpdatedCalendars:updatedCalendarItems:accountingInfo:]_block_invoke
___copy_helper_block_1628
___destroy_helper_block_1629
-[EKCalendarStoreBackingStore _fetchUpdatedEventsForUpdatedCalendars:updatedCalendarItems:accountingInfo:]
___106-[EKCalendarStoreBackingStore _fetchUpdatedEventsForUpdatedCalendars:updatedCalendarItems:accountingInfo:]_block_invoke
___copy_helper_block_1648
___destroy_helper_block_1649
-[EKCalendarStoreBackingStore _fetchUpdatedCalendarItemsForItems:updatedCalendars:accountingInfo:]
-[EKCalendarStoreBackingStore _sharedCalendarInviteChanged:]
___copy_helper_block_1690
___destroy_helper_block_1691
-[EKCalendarStoreBackingStore _reloadSourceErrors:]
-[EKCalendarStoreBackingStore _changesFromOldBackingObjects:toNewBackingObjects:]
-[EKCalendarStoreBackingStore _createNonPartialEventForLocalUID:]
+[EKCalendarStoreBackingStore _createNonPartialFrozenObjectForPartialObject:inManagedObjectContext:withFrozenClass:updateBackingObjectsTracker:onQueue:]
___152+[EKCalendarStoreBackingStore _createNonPartialFrozenObjectForPartialObject:inManagedObjectContext:withFrozenClass:updateBackingObjectsTracker:onQueue:]_block_invoke
___copy_helper_block_1865
___destroy_helper_block_1866
___152+[EKCalendarStoreBackingStore _createNonPartialFrozenObjectForPartialObject:inManagedObjectContext:withFrozenClass:updateBackingObjectsTracker:onQueue:]_block_invoke1939
___copy_helper_block_1940
___destroy_helper_block_1941
___152+[EKCalendarStoreBackingStore _createNonPartialFrozenObjectForPartialObject:inManagedObjectContext:withFrozenClass:updateBackingObjectsTracker:onQueue:]_block_invoke1948
___copy_helper_block_1957
___destroy_helper_block_1958
-[EKCalendarStoreBackingStore _objectIsDeletedInCoreData:]
+[EKCalendarStoreBackingStore _processExternalChangeHelperPopulateChangedBackingCalendarItems:newBackingCalendarItems:withNewBackingCalendars:backingStore:]
+[EKCalendarStoreBackingStore _updateOccurrenceCacheForChangedBackingCalendarItems:backingStore:]
+[EKCalendarStoreBackingStore _processExternalChangeHelperPopulateChangedBackingCalendars:newBackingCalendars:withNewBackingSources:backingStore:]
+[EKCalendarStoreBackingStore _processExternalChangeHelperPopulateChangedBackingSources:newBackingSources:backingStore:]
-[EKCalendarStoreBackingStore _processExternalChangeHelperUpdateBackingStoreWithTags:changedBackingSources:changedBackingCalendars:changedBackingCalendarItems:newBackingSources:newBackingCalendars:newBackingCalendarItems:accountingReceiptGeneration:copiedBackingStore:]
___269-[EKCalendarStoreBackingStore _processExternalChangeHelperUpdateBackingStoreWithTags:changedBackingSources:changedBackingCalendars:changedBackingCalendarItems:newBackingSources:newBackingCalendars:newBackingCalendarItems:accountingReceiptGeneration:copiedBackingStore:]_block_invoke
___copy_helper_block_2017
___destroy_helper_block_2018
-[EKCalendarStoreBackingStore _processExternalChangeWithTags:context:]
___70-[EKCalendarStoreBackingStore _processExternalChangeWithTags:context:]_block_invoke
___copy_helper_block_2024
___destroy_helper_block_2025
___70-[EKCalendarStoreBackingStore _processExternalChangeWithTags:context:]_block_invoke2045
___copy_helper_block_2052
___destroy_helper_block_2053
-[EKCalendarStoreBackingStore _queueRetryIfReceiptIsStale:tags:]
___64-[EKCalendarStoreBackingStore _queueRetryIfReceiptIsStale:tags:]_block_invoke
___copy_helper_block_2055
___destroy_helper_block_2056
-[EKCalendarStoreBackingStore _queueRetryForOldReceipt:currentReceipt:tags:backoff:]
___84-[EKCalendarStoreBackingStore _queueRetryForOldReceipt:currentReceipt:tags:backoff:]_block_invoke
___copy_helper_block_2064
___destroy_helper_block_2065
-[EKCalendarStoreBackingStore _bumpBackoff]
+[EKCalendarStoreBackingStore _readOnlyContextToleratingInaccessibleFault]
-[EKCalendarStoreBackingStore _fetchFrozenEventsInCalendars:]
-[EKCalendarStoreBackingStore _fetchFrozenEventsWithCalendarIdentifiers:]
-[EKCalendarStoreBackingStore _predicateForBackingCalendars]
-[EKCalendarStoreBackingStore _fetchFrozenCalendarItemsOfType:withCoreDataPredicate:]
-[EKCalendarStoreBackingStore _fetchFrozenCalendarItemsOfType:withCoreDataPredicate:withCalendarPredicate:]
___107-[EKCalendarStoreBackingStore _fetchFrozenCalendarItemsOfType:withCoreDataPredicate:withCalendarPredicate:]_block_invoke
___copy_helper_block_2082
___destroy_helper_block_2083
-[EKCalendarStoreBackingStore _fetchFrozenMasterOrDetachedEventsInRange:]
-[EKCalendarStoreBackingStore _fetchFrozenMasterOrDetachedEventsInRange:inCalendars:]
___85-[EKCalendarStoreBackingStore _fetchFrozenMasterOrDetachedEventsInRange:inCalendars:]_block_invoke
___copy_helper_block_2104
___destroy_helper_block_2105
___85-[EKCalendarStoreBackingStore _fetchFrozenMasterOrDetachedEventsInRange:inCalendars:]_block_invoke2111
___copy_helper_block_2112
___destroy_helper_block_2113
-[EKCalendarStoreBackingStore _fetchFrozenRemindersInCalendars:]
-[EKCalendarStoreBackingStore _fetchFrozenRemindersWithCalendarIdentifiers:]
-[EKCalendarStoreBackingStore isPrefetching]
-[EKCalendarStoreBackingStore setIsPrefetching:]
-[EKCalendarStoreBackingStore persistenceAvailable]
-[EKCalendarStoreBackingStore setPersistenceAvailable:]
-[EKCalendarStoreBackingStore externalChangeQueue]
-[EKCalendarStoreBackingStore setExternalChangeQueue:]
-[EKCalendarStoreBackingStore .cxx_destruct]
-[EKCoreDataFaultDelegate context:shouldHandleInaccessibleFault:forObjectID:andTrigger:]
-[EKCalendar initWithAllowEvents:allowReminders:]
-[EKCalendar initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
+[EKCalendar calendarWithCalendar:eventStore:]
+[EKCalendar uniqueIdentifierForObject:]
-[EKCalendar calendarError]
-[EKCalendar hasSharees]
-[EKCalendar isCurrentUserCalendarOwner]
-[EKCalendar notificationBoxMessageCount]
-[EKCalendar reorderBetweenEarlier:later:]
-[EKCalendar reorderCalendars:betweenEarlier:later:]
___52-[EKCalendar reorderCalendars:betweenEarlier:later:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___34+[EKCalendar knownSingleValueKeys]_block_invoke
___31+[EKCalendar knownIdentityKeys]_block_invoke
___45+[EKCalendar knownRelationshipMultiValueKeys]_block_invoke
___46+[EKCalendar knownRelationshipSingleValueKeys]_block_invoke
+[EKCalendar knownImmutableKeys]
___32+[EKCalendar knownImmutableKeys]_block_invoke
-[EKCalendar symbolicColorName]
-[EKCalendar setSymbolicColorName:]
-[EKCalendar defaultOrganizerForNewItems]
-[EKCalendar ignoreAlarms]
-[EKCalendar setIgnoreAlarms:]
-[EKCalendar notes]
-[EKCalendar setNotes:]
-[EKCalendar shareesAndOwner]
-[EKCalendar setSharees:]
-[EKCalendar defaultAlarmsForAllDayEvents]
-[EKCalendar setDefaultAlarmsForAllDayEvents:]
-[EKCalendar defaultAlarmsForTimedEvents]
-[EKCalendar setDefaultAlarmsForTimedEvents:]
-[EKCalendar suppressEventSchedulingNotifications]
-[EKCalendar setSuppressEventSchedulingNotifications:]
-[EKCalendar _allowsPrivateModifications]
-[EKCalendar _allowsAttachments]
-[EKCalendar sourceIdentifierForCalendar]
-[EKCalendar setTypeString:]
+[EKCalendar typeStringForCalendar:]
+[EKCalendar typeForCalendar:]
+[EKCalendar typeDescription:]
-[EKCalendar color]
-[EKCalendar setColor:]
-[EKCalendar symbolicColor]
-[EKCalendar setSymbolicColor:]
-[EKCalendar isEditable]
-[EKCalendar _isReadOnlyDelegate]
-[EKCalendar supportedEventAvailabilities]
-[EKCalendar externalURI]
-[EKCalendar reinviteSharees:]
-[EKCalendar freeBusyCache]
-[EKCalendar remove:]
-[EKCalendar _validateDeletable:]
-[EKCalendar eligibleForDefaultSchedulingCalendar]
-[EKCalendar _calendarsInEventStoreMatchingOurEntityType]
-[EKCalendar _allCalendarsInSameSource]
___39-[EKCalendar _allCalendarsInSameSource]_block_invoke
___copy_helper_block_397
___destroy_helper_block_398
-[EKCalendar _otherCalendarsInSameSource]
___41-[EKCalendar _otherCalendarsInSameSource]_block_invoke
___copy_helper_block_409
___destroy_helper_block_410
-[EKCalendar _otherCalendarsAllowUsToBeDeleted]
-[EKCalendar _validateAccessConsent:]
-[EKCalendar _hasChangesForKeyAndKeyIsOnlyChangedKey:]
-[EKCalendar _validateEditable:]
-[EKCalendar _validateSource:]
-[EKCalendar _validateEntityTypeIsSupported:]
-[EKCalendar _validateDeletableHelper:]
-[EKCalendar importData:synchronous:processEvents:processReminders:progressBlock:finishBlock:]
___94-[EKCalendar importData:synchronous:processEvents:processReminders:progressBlock:finishBlock:]_block_invoke
___copy_helper_block_476
___destroy_helper_block_477
+[EKCalendar _calendarIdentifiersForCalendars:]
-[EKCalendar deletionWarningsMask]
-[EKCalendar updateManagedObjectID]
-[EKCalendar _useExistingObjectWhenDecoding]
-[EKCalendar _existingObjectForDecodedIdentifier:]
+[EKCalendar _calendarsContainsSharedToMeCalendar:]
+[EKCalendar _calendarsAllowSharedSchedulingIfNeeded:]
+[EKCalendar _calendarsAreInSameSource:]
+[EKCalendar _calendarsAreSharedToMeInSameSourceAndHaveSameOwner:]
-[EKCalendar allowsScheduling]
-[EKCalendar setAllowsScheduling:]
-[EKCalendar setAllowEvents:]
-[EKCalendar setAllowReminders:]
-[EKCalendar cachedHasSharees]
-[EKCalendar defaultOrganizerEmailForNewItems]
-[EKCalendar isDefaultSchedulingCalendar]
-[EKCalendar setIsDefaultSchedulingCalendar:]
-[EKCalendar isDistinguishedExchangeCalendar]
-[EKCalendar setIsDistinguishedExchangeCalendar:]
-[EKCalendar isFamilyCalendar]
-[EKCalendar isMarkedUndeletable]
-[EKCalendar isMarkedImmutableSharees]
-[EKCalendar isFacebookBirthdayCalendar]
-[EKCalendar isColorEditable]
-[EKCalendar isSubscribedHolidayCalendar]
-[EKCalendar path]
-[EKCalendar sharedOwnerAddresses]
-[EKCalendar serverPath]
-[EKCalendar isSubscribed]514
-[EKCalendar .cxx_destruct]
-[EKChangeTracker initWithBackingStore:]
-[EKChangeTracker copyForBackingStore:]
-[EKChangeTracker noteDeleteObject:]
-[EKChangeTracker noteDeleteObject:thisAndFuture:]
-[EKChangeTracker noteDeleteMasterObject:]
-[EKChangeTracker _noteDeleteObject:]
-[EKChangeTracker applyChangesToCalendar:]
-[EKChangeTracker applyChangesToCalendarSource:]
-[EKChangeTracker applyChangesToItem:forIdentifier:]
-[EKChangeTracker applyChangesToItem:forIdentifier:fromItem:]
-[EKChangeTracker _applyChanges:forIdentifier:]
-[EKChangeTracker _applyRelationChangesFromItem:toItem:forIdentifier:]
-[EKChangeTracker _applyMultiRelationChanges:forIdentifier:forRelationKey:forRelationObjectIdentifier:]
-[EKChangeTracker _applyRelationChanges:forIdentifier:forRelationKey:]
-[EKChangeTracker _applyRelationChanges:forIdentifier:forRelationKey:forRelationObjectIdentifier:]
-[EKChangeTracker _applyChanges:forIdentifier:forRelationKey:forRelationObjectIdentifier:isRelationChange:]
-[EKChangeTracker noteChangedObject:]
-[EKChangeTracker applyBatchedChangesToObject:forIdentifier:]
___61-[EKChangeTracker applyBatchedChangesToObject:forIdentifier:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKChangeTracker removeChangesForIdentifier:]
-[EKChangeTracker changedObjectIdentifiers]
-[EKChangeTracker exceptionDatesForIdentifier:]
-[EKChangeTracker addExceptionDateWithIdentifier:]
-[EKChangeTracker deleteExceptionDateWithIdentifier:]
-[EKChangeTracker clearExceptionDateWithIdentifier:]
-[EKChangeTracker undetachEventWithIdentifier:]
-[EKChangeTracker redetachEventWithIdentifier:]
-[EKChangeTracker deletedExceptionDatesForIdentifier:]
-[EKChangeTracker undetachedEventsForIdentifier:]
-[EKChangeTracker exceptionDateWithIdentifierIsDeleted:]
-[EKChangeTracker eventWithIdentifierIsUndetached:]
-[EKChangeTracker deletedExceptionOrUndetachedEventForIdentifier:]
-[EKChangeTracker deletedExceptionDateIdentifiers]
-[EKChangeTracker undetachedEventIdentifiers]
-[EKChangeTracker deletedExceptionDateAndUndetachedEventIdentifiers]
-[EKChangeTracker objectWithIdentifierIsDeleted:]
-[EKChangeTracker objectWithIdentifierAndFutureAreDeleted:]
-[EKChangeTracker objectWithIdentifierIsFuturedDeleted:]
-[EKChangeTracker objectWithIdentifierHasChanges:]
-[EKChangeTracker changesForIdentifier:]
-[EKChangeTracker relationChangesForIdentifier:]
-[EKChangeTracker changedIdentifiersFromBackingSource:]
___55-[EKChangeTracker changedIdentifiersFromBackingSource:]_block_invoke
___copy_helper_block_314
___destroy_helper_block_315
___55-[EKChangeTracker changedIdentifiersFromBackingSource:]_block_invoke320
___copy_helper_block_321
___destroy_helper_block_322
-[EKChangeTracker cleanBatchedChangesWithBackingTracker:]
-[EKChangeTracker _cleanCalendarsToItemMappingWithBackingTracker:]
___66-[EKChangeTracker _cleanCalendarsToItemMappingWithBackingTracker:]_block_invoke
-[EKChangeTracker _cleanBatchedObjectsWithBackingTracker:]
-[EKChangeTracker _commitTrackedChangesForObject:]
___50-[EKChangeTracker _commitTrackedChangesForObject:]_block_invoke
___copy_helper_block_368
___destroy_helper_block_369
-[EKChangeTracker _emptySets]
-[EKChangeTracker backingStore]
-[EKChangeTracker setBackingStore:]
-[EKChangeTracker setChanges:]
-[EKChangeTracker setRelationChanges:]
-[EKChangeTracker batchedDeletedFutureObjects]
-[EKChangeTracker setBatchedDeletedFutureObjects:]
-[EKChangeTracker batchedDeletedExceptionDates]
-[EKChangeTracker setBatchedDeletedExceptionDates:]
-[EKChangeTracker batchedUndetachedEvents]
-[EKChangeTracker setBatchedUndetachedEvents:]
-[EKChangeTracker .cxx_destruct]
-[EKAttachment initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
-[EKAttachment initWithAttachment:]
+[EKAttachment attachmentWithAttachment:]
+[EKAttachment filePathForAttachment:event:]
+[EKAttachment filePathOnServerForAttachment:onEvent:]
-[EKAttachment icon]
-[EKAttachment isCached]
-[EKAttachment _updateUrlOnServer:]
-[EKAttachment setUrlOnServer:]
-[EKAttachment _updateUrlOnDisk:]
-[EKAttachment setUrlOnDisk:]
+[EKAttachment frozenClass]
-[EKAttachment backingAttachment]
-[EKAttachment initWithFilepath:]
-[EKAttachment filename]
-[EKAttachment _fileIsAutoArchivedNumber:]
+[EKAttachment uniqueIdentifierForObject:]
-[EKAttachment _fileIsAutoZipped:]
-[EKAttachment urlOnDisk]
-[EKAttachment urlOnServer]
-[EKAttachment attachmentIDOnServer]
-[EKAttachment setAttachmentIDOnServer:]
+[EKAttachment knownIdentityKeys]
+[EKAttachment knownSingleValueKeys]
+[EKAttachment knownImmutableKeys]
-[EKAttachment contentType]
-[EKAttachment filenameSuggestedByServer]
-[EKAttachment isAutoArchivedNumber]
-[EKAttachment uuid]
-[EKAttachment .cxx_destruct]
-[EKObject initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
-[EKObject initWithObject:]
-[EKObject initWithObject:keepBackingObject:]
-[EKObject initWithObject:keepBackingObject:preFrozenRelationshipObjects:]
-[EKObject initWithObject:createPartialBackingObject:keepBackingObject:]
+[EKObject objectWithObject:]
+[EKObject objectWithObject:preFrozenRelationshipObjects:]
-[EKObject preFrozenRelationshipObjects]
-[EKObject _initChangeSetIfNone]
-[EKObject _markAsNew]
-[EKObject _markAsDeleted]
-[EKObject hasChangesIgnoreKeys:]
___33-[EKObject hasChangesIgnoreKeys:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKObject applyChangesFromObject:]
-[EKObject applyChangesFromObject:except:]
-[EKObject applyOnlyCertainChangesFromObject:keep:]
-[EKObject applyUnbatchedChangesFromObject:except:]
-[EKObject _applyChangesFromObject:unbatchedOnly:except:keep:]
-[EKObject rollback]
-[EKObject rollbackUnbatched]
-[EKObject reset]
-[EKObject _reset]
-[EKObject _resetWithObject:]
-[EKObject _clearCachedHash]
-[EKObject updateManagedObjectID]
-[EKObject meltedObjectInStore:]
-[EKObject markObjectAndRelationshipChangesAsCommitted]
-[EKObject markObjectAndRelationshipChangesAsBatched]
-[EKObject markObjectAndRelationshipsAsDeleted]
+[EKObject frozenClass]
-[EKObject frozenObject]
-[EKObject _cachedMeltedObjectsForMultiValueKey:copy:]
-[EKObject setCachedMeltedObject:forSingleValueKey:]
-[EKObject cachedMeltedObjectForSingleValueKey:]
-[EKObject frozenOrMeltedCachedSingleRelationObjectForKey:]
-[EKObject meltedAndCachedSingleRelationObjectForKey:]
-[EKObject updateMeltedAndCachedSingleRelationObject:forKey:frozenClass:]
-[EKObject meltedAndCachedMultiRelationObjectsForKey:]
-[EKObject updateMeltedAndCachedMultiRelationObjects:forKey:]
-[EKObject meltedAndCachedMultiRelationCountForKey:]
-[EKObject updatedMeltedCacheForChangeSet:]
___43-[EKObject updatedMeltedCacheForChangeSet:]_block_invoke
___copy_helper_block_219
___destroy_helper_block_220
-[EKObject _resetMeltedCache]
___29-[EKObject _resetMeltedCache]_block_invoke
___copy_helper_block_251
___destroy_helper_block_252
-[EKObject _cachedMeltedObjectsForMultiValueKey:]
-[EKObject emptyMeltedCache]
+[EKObject knownIdentityKeys]
+[EKObject knownSingleValueKeys]
+[EKObject knownImmutableKeys]
+[EKObject keysToCheckForChangedKeysMethod]
-[EKObject changedKeysAgainstObject:]
___37-[EKObject changedKeysAgainstObject:]_block_invoke
___37-[EKObject changedKeysAgainstObject:]_block_invoke_2
___copy_helper_block_274
___destroy_helper_block_275
___copy_helper_block_284
___destroy_helper_block_285
___37-[EKObject changedKeysAgainstObject:]_block_invoke290
___copy_helper_block_293
___destroy_helper_block_294
___37-[EKObject changedKeysAgainstObject:]_block_invoke299
___copy_helper_block_300
___destroy_helper_block_301
___37-[EKObject changedKeysAgainstObject:]_block_invoke303
___copy_helper_block_306
___destroy_helper_block_307
___37-[EKObject changedKeysAgainstObject:]_block_invoke309
___copy_helper_block_312
___destroy_helper_block_313
-[EKObject copyWithZone:]
-[EKObject mutableCopyWithZone:]
-[EKObject _copyWithoutFaulting]
-[EKObject mutableCopyWithZone:andFault:]
-[EKObject initWithCoder:]
-[EKObject _decodeValueForKey:withCoder:]
-[EKObject encodeWithCoder:]
-[EKObject _encodeValueForKey:withCoder:]
-[EKObject _shouldEncodeValue:forKey:]
-[EKObject _useExistingObjectWhenDecoding]
-[EKObject _existingObjectForDecodedIdentifier:]
-[EKObject _applyKnownImmutableValuesFrom:]
-[EKObject _applyDefinedAfterFirstSaveFrom:]
-[EKObject addMultiChangedObjectValue:forKey:]
-[EKObject addMultiChangedObjectValues:forKey:]
-[EKObject multiChangedObjectValuesForKey:]
-[EKObject removeMultiChangedObjectValue:forKey:]
-[EKObject removeMultiChangedObjectValues:forKey:]
-[EKObject replaceMultiChangedObjectValuesWithObjectValues:forKey:]
-[EKObject setSingleChangedValue:forKey:]
-[EKObject singleChangedValueForKey:]
+[EKObject canonicalizedEqualityTestValue1:value2:key:object1:object2:]
+[EKObject hashForObject:]
+[EKObject uniqueIdentifierForObject:]
-[EKObject uniqueIdentifier]
+[EKObject _object:equalsObject:]
+[EKObject _object:equalsObject:compareImmutableKeys:]
+[EKObject _object:equalsObject:forKeys:]
+[EKObject _object:equalsObject:forKeys:compareImmutableKeys:]
-[EKObject isCompletelyEqual:]
-[EKObject isEqual:comparingKeys:]
-[EKObject isEqual:comparingKeys:compareImmutableKeys:]
-[EKObject _prepareToPotentiallyBeRecreated]
-[EKObject isDeleted]
-[EKObject duplicateWithOptions:]
-[EKObject duplicate]
-[EKObject changeIdentifiers]
+[EKObject isMeltedAndNotWeakRelationshipObject:]
-[EKObject diffWithObject:]
-[EKObject applyChanges:]
-[EKObject applyUnbatchedChanges:]
-[EKObject applyChangesByCopying:]
-[EKObject applyChanges:doCopy:includeBatched:]
+[EKObject inverseObjectForObject:fromObject:]
-[EKObject summaryDiffWithObject:]
-[EKObject description]
-[EKObject summary]
+[EKObject batchChangeNotificationName]
-[EKObject canBeConvertedToFullObject]
-[EKObject isPartialObject]
-[EKObject isPropertyUnavailable:]
+[EKObject propertiesUnavailableForPartialObjects]
-[EKObject _areOnlyChangedKeys:]
+[EKObject _compareAllKnownKeysExceptKeys:forObject:againstObject:]
+[EKObject _compareAllKnownKeysExceptKeys:forObject:againstObject:compareIdentityKeys:]
+[EKObject _compareKnownKeys:forObject:againstObject:]
+[EKObject _compareKnownKeys:forObject:againstObject:compareIdentityKeys:compareImmutableKeys:]
+[EKObject _compareKnownKeys:forObject:againstObject:compareImmutableKeys:]
+[EKObject _compareMultiValueRelationshipKeys:forObject:againstObject:]
+[EKObject _compareMutliValueRelationshipKey:forObject:againstObject:]
+[EKObject _compareNonIdentityKeys:forObject:againstObject:]
+[EKObject _compareNonIdentityKeys:forObject:againstObject:compareImmutableKeys:]
+[EKObject _compareNonRelationshipKeys:forObject:againstObject:]
___64+[EKObject _compareNonRelationshipKeys:forObject:againstObject:]_block_invoke
___copy_helper_block_463
___destroy_helper_block_464
+[EKObject _compareSingleValueRelationshipKey:forObject:againstObject:]
+[EKObject _compareSingleValueRelationshipKeys:forObject:againstObject:]
-[EKObject _convertToNonPartialObject]
-[EKObject _duplicateWithChangedKeys:]
-[EKObject _keysToChangeForDuplicateWithOptions:]
-[EKObject _hasChangesForKey:]
___30-[EKObject _hasChangesForKey:]_block_invoke
-[EKObject _hasUnbatchedChangesForKey:]
___39-[EKObject _hasUnbatchedChangesForKey:]_block_invoke
-[EKObject _isPropertyUnavailable:convertToFullObjectIfUnavailable:]
+[EKObject _insertPreFrozenRelationshipObject:withKey:intoDictionary:]
-[EKObject _isOnlyChangedKey:]
+[EKObject _compareIdentityKeysForObject:againstObject:]
+[EKObject _compareRelationshipObject1:againstRelationshipObject2:]
+[EKObject _createNonPartialObjectFromObject:ifPropertyIsUnavailable:]
+[EKObject _objects:haveSameMeltedClass:frozenClass:]
-[EKObject managedObjectID]
-[EKObject setManagedObjectID:]
-[EKObject backingObject]
-[EKObject setBackingObject:]
-[EKObject batchChangeInfo]
-[EKObject setBatchChangeInfo:]
-[EKObject setCachedMeltedObjects:]
-[EKObject cachedHash]
-[EKObject setCachedHash:]
-[EKObject .cxx_destruct]
-[EKFrozenCalendar initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenCalendar preFrozenRelationshipObjects]
-[EKFrozenCalendar color]
+[EKFrozenCalendar propertiesUnavailableForPartialObjects]
___58+[EKFrozenCalendar propertiesUnavailableForPartialObjects]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKFrozenCalendar allowsScheduling]
-[EKFrozenCalendar cachedHasSharees]
-[EKFrozenCalendar defaultAlarmsForAllDayEvents]
-[EKFrozenCalendar defaultAlarmsForTimedEvents]
-[EKFrozenCalendar defaultOrganizerEmailForNewItems]
-[EKFrozenCalendar ignoreAlarms]
-[EKFrozenCalendar isDefaultSchedulingCalendar]
-[EKFrozenCalendar isDistinguishedExchangeCalendar]
-[EKFrozenCalendar isFamilyCalendar]
-[EKFrozenCalendar isMarkedUndeletable]
-[EKFrozenCalendar isMarkedImmutableSharees]
-[EKFrozenCalendar isFacebookBirthdayCalendar]
-[EKFrozenCalendar isColorEditable]
-[EKFrozenCalendar isSubscribedHolidayCalendar]
-[EKFrozenCalendar notes]
-[EKFrozenCalendar path]
-[EKFrozenCalendar serverPath]
-[EKFrozenCalendar sharedOwnerAddresses]
-[EKFrozenCalendar symbolicColorName]
-[EKFrozenCalendar suppressEventSchedulingNotifications]
-[EKFrozenCalendar cachedPreFrozenRelationshipObjects]
-[EKFrozenCalendar setCachedPreFrozenRelationshipObjects:]
-[EKFrozenCalendar .cxx_destruct]
+[EKFrozenCalendarItem meltedClass]
-[EKFrozenCalendarItem _getFrozenVersionsOfObjects:withFrozenType:]
-[EKFrozenCalendarItem initWithObject:createPartialObject:preFrozenRelationshipObjects:]
+[EKFrozenCalendarItem frozenObjectForObject:createPartialObject:preFrozenRelationshipObjects:forceUpdate:]
-[EKFrozenCalendarItem preFrozenRelationshipObjects]
-[EKFrozenCalendarItem isReminder]
+[EKFrozenCalendarItem propertiesUnavailableForPartialObjects]
___62+[EKFrozenCalendarItem propertiesUnavailableForPartialObjects]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKFrozenCalendarItem isPropertyUnavailable:]
-[EKFrozenCalendarItem attachmentSet]
-[EKFrozenCalendarItem cachedHasAlarm]
-[EKFrozenCalendarItem cachedHasAttendee]
-[EKFrozenCalendarItem cachedHasAttachment]
-[EKFrozenCalendarItem cachedIsCalendarOwnerInvitedAttendee]
-[EKFrozenCalendarItem cachedIsCurrentUserInvitedAttendee]
-[EKFrozenCalendarItem calendarItemPermissionNumber]
-[EKFrozenCalendarItem defaultAlarmWasDeleted]
-[EKFrozenCalendarItem organizerEmail]
-[EKFrozenCalendarItem participantForMe]
-[EKFrozenCalendarItem scheduleAgentString]
-[EKFrozenCalendarItem cachedPreFrozenRelationshipObjects]
-[EKFrozenCalendarItem setCachedPreFrozenRelationshipObjects:]
-[EKFrozenCalendarItem .cxx_destruct]
-[EKEventOccurrenceCache initWithBackingStore:]
-[EKEventOccurrenceCache copyForBackingStore:]
-[EKEventOccurrenceCache binEvents:]
-[EKEventOccurrenceCache _binEvents:]
-[EKEventOccurrenceCache _binEvent:]
-[EKEventOccurrenceCache eventsInRange:passingTest:]
-[EKEventOccurrenceCache eventsInRange:]
-[EKEventOccurrenceCache allEvents]
___35-[EKEventOccurrenceCache allEvents]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKEventOccurrenceCache rebinAllEvents]
-[EKEventOccurrenceCache rebinOccurrences:]
-[EKEventOccurrenceCache _rebinOccurrences:]
-[EKEventOccurrenceCache _groupOccurrencesByUID:]
-[EKEventOccurrenceCache _rebinOccurrence:]
-[EKEventOccurrenceCache unbinOccurrences:]
-[EKEventOccurrenceCache _nonNilEventOccurrences:]
-[EKEventOccurrenceCache _unbinOccurrences:]
___44-[EKEventOccurrenceCache _unbinOccurrences:]_block_invoke
___copy_helper_block_168
___destroy_helper_block_169
-[EKEventOccurrenceCache unbinOccurrencesWithObjectIDs:]
___56-[EKEventOccurrenceCache unbinOccurrencesWithObjectIDs:]_block_invoke
___copy_helper_block_176
___destroy_helper_block_177
-[EKEventOccurrenceCache _unbinOccurrencesHelperWithOccurrenceTestBlock:]
-[EKEventOccurrenceCache pruneForRange:localUIDs:]
___50-[EKEventOccurrenceCache pruneForRange:localUIDs:]_block_invoke
___copy_helper_block_189
___destroy_helper_block_190
-[EKEventOccurrenceCache _binDate:]
-[EKEventOccurrenceCache _insertIndexForDate:]
___46-[EKEventOccurrenceCache _insertIndexForDate:]_block_invoke
-[EKEventOccurrenceCache _startIndexForRange:]
-[EKEventOccurrenceCache _cachedRange]
-[EKEventOccurrenceCache _allBinnedOccurrences]
-[EKEventOccurrenceCache backingStore]
-[EKEventOccurrenceCache setBackingStore:]
-[EKEventOccurrenceCache binnedDates]
-[EKEventOccurrenceCache setBinnedDates:]
-[EKEventOccurrenceCache binnedEvents]
-[EKEventOccurrenceCache setBinnedEvents:]
-[EKEventOccurrenceCache cacheQueue]
-[EKEventOccurrenceCache setCacheQueue:]
-[EKEventOccurrenceCache .cxx_destruct]
+[EKEventChangeSummarizer singleValueDiffKeys]
+[EKEventChangeSummarizer multiValueDiffKeys]
+[EKEventChangeSummarizer changeSummaryForEvent:]
+[EKEventChangeSummarizer diffSummaryBetweenEvent:andEvent:]
-[EKCreatedObjectsTracker initWithBackingStore:]
-[EKCreatedObjectsTracker copyForBackingStore:]
-[EKCreatedObjectsTracker itemWithIdentifier:]
-[EKCreatedObjectsTracker trackItemWithIdentifier:occurrence:]
-[EKCreatedObjectsTracker updateItemWithIdentifier:occurrence:]
-[EKCreatedObjectsTracker removeItemWithIdentifier:]
-[EKCreatedObjectsTracker removeItemsWithManagedObjectIDs:]
-[EKCreatedObjectsTracker itemIdentifiers]
-[EKCreatedObjectsTracker items]
-[EKCreatedObjectsTracker sortedItemIdentifiers]
___48-[EKCreatedObjectsTracker sortedItemIdentifiers]_block_invoke
-[EKCreatedObjectsTracker totalItems]
-[EKCreatedObjectsTracker itemDictionary]
-[EKCreatedObjectsTracker detachedItemsForIdentifier:]
-[EKCreatedObjectsTracker enumerateItemsUsingBlock:]
-[EKCreatedObjectsTracker calendarWithIdentifier:]
-[EKCreatedObjectsTracker trackCalendarWithIdentifier:calendar:]
-[EKCreatedObjectsTracker removeCalendarWithIdentifier:]
-[EKCreatedObjectsTracker calendarIdentifiers]
-[EKCreatedObjectsTracker calendars]
-[EKCreatedObjectsTracker calendarDictionary]
-[EKCreatedObjectsTracker calendarSourceIdentifiers]
-[EKCreatedObjectsTracker calendarSources]
-[EKCreatedObjectsTracker calendarSourcesDictionary]
-[EKCreatedObjectsTracker calendarSourceWithIdentifier:]
-[EKCreatedObjectsTracker removeCalendarSourceWithIdentifier:]
-[EKCreatedObjectsTracker trackCalendarSource:withIdentifier:]
-[EKCreatedObjectsTracker createdCalendarItems]
-[EKCreatedObjectsTracker setCreatedCalendarItems:]
-[EKCreatedObjectsTracker createdCalendars]
-[EKCreatedObjectsTracker setCreatedCalendars:]
-[EKCreatedObjectsTracker createdCalendarSources]
-[EKCreatedObjectsTracker setCreatedCalendarSources:]
-[EKCreatedObjectsTracker .cxx_destruct]
-[EKFrozenReminder initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenReminder cachedHasLocationAlarm]
-[EKFrozenReminder dueDate]
-[EKFrozenReminder .cxx_destruct]
-[EKFrozenObject initWithObject:]
-[EKFrozenObject initWithObject:createPartialObject:]
-[EKFrozenObject initWithObject:createPartialObject:preFrozenRelationshipObjects:]
+[EKFrozenObject frozenObjectForObject:]
+[EKFrozenObject frozenObjectForObject:createPartialObject:]
+[EKFrozenObject frozenObjectForObject:createPartialObject:preFrozenRelationshipObjects:]
+[EKFrozenObject frozenObjectForObject:createPartialObject:preFrozenRelationshipObjects:forceUpdate:]
+[EKFrozenObject frozenObjectForObject:preFrozenRelationshipObjects:]
+[EKFrozenObject frozenObjectForObject:preFrozenRelationshipObjects:forceUpdate:]
-[EKFrozenObject canBeConvertedToFullObject]
-[EKFrozenObject preFrozenRelationshipObjects]
-[EKFrozenObject isPropertyUnavailable:]
+[EKFrozenObject propertiesUnavailableForPartialObjects]
-[EKFrozenObject changeSet]
-[EKFrozenObject existingMeltedObject]
-[EKFrozenObject meltedObjectInStore:]
+[EKFrozenObject frozenClass]
+[EKFrozenObject meltedClass]
-[EKFrozenObject uniqueIdentifier]
-[EKFrozenObject isCompletelyEqual:]
-[EKFrozenObject initWithCoder:]
-[EKFrozenObject encodeWithCoder:]
-[EKFrozenObject isNew]
-[EKFrozenObject setIsNew:]
-[EKFrozenObject isPartialObject]
-[EKFrozenObject setIsPartialObject:]
-[EKFrozenObject managedObjectID]
-[EKFrozenObject setManagedObjectID:]
-[EKFrozenObject cachedHash]
-[EKFrozenObject setCachedHash:]
-[EKFrozenObject .cxx_destruct]
-[EKAlarm initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
+[EKAlarm alarmWithDefaultAlarm:]
-[EKAlarm _keysToChangeForDuplicateWithOptions:]
+[EKAlarm alarmWithAbsoluteDate:]
+[EKAlarm procedureAlarmWithBookmark:]
+[EKAlarm uniqueIdentifierForObject:]
+[EKAlarm knownImmutableKeys]
+[EKAlarm noneTriggerDate]
-[EKAlarm notRelativeToTravelTime]
-[EKAlarm setNotRelativeToTravelTime:]
-[EKAlarm triggerIsNotRelativeToTravelTime]
-[EKAlarm setTriggerIsNotRelativeToTravelTime:]
-[EKAlarm setAcknowledgedDate:]
-[EKAlarm setEmailAddress:]
-[EKAlarm setSoundName:]
-[EKAlarm setUrl:]
-[EKAlarm setBookmark:]
-[EKAlarm setProximityString:]
-[EKAlarm setStructuredLocation:]
-[EKAlarm setProximity:]
-[EKAlarm isDefaultAlarm]
+[EKAlarm areLocationsAvailable]
+[EKAlarm _currentAuthorizationStatus]
+[EKAlarm areLocationsAllowed]
+[EKAlarm areLocationsAllowedWithAuthorizationStatus:]
+[EKAlarm areLocationsCurrentlyEnabled]
-[EKAlarm isDefault]
-[EKAlarm .cxx_destruct]
-[EKFrozenAlarm initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenAlarm isDefault]
-[EKFrozenAlarm notRelativeToTravelTime]
-[EKFrozenAlarm .cxx_destruct]
-[EKSource initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
+[EKSource sourceWithCalendarSource:eventStore:]
+[EKSource sourceWithEventStore:]
-[EKSource isNestedLocalSource]
-[EKSource sourceError]
-[EKSource setTitle:]
-[EKSource supportsAbsoluteAlarms]
-[EKSource supportsAlarmsOverlappingCalendarItemsInSameSeries]
-[EKSource supportsCalendarItemsOverlappingInSameSeries]
-[EKSource supportsCalendarItemsStartingOnSameDayInSameSeries]
-[EKSource supportsDurationLongerThanRecurrenceInterval]
-[EKSource supportsFloatingTimeZone]
-[EKSource supportsMultipleAlarms]
-[EKSource supportsMultipleMonthsInYearlyRecurrence]
-[EKSource supportsMultipleDaysInMonthlyRecurrence]
-[EKSource supportsReorderingDetachedEvents]
-[EKSource supportsSeriesStartingOnDateOutsideRecurrence]
-[EKSource supportsURLs]
-[EKSource supportsYearlyRecurrenceWithArbitraryInterval]
-[EKSource copyWithZone:]
-[EKSource coreDataEntityName]
+[EKSource uniqueIdentifierForObject:]
+[EKSource localSource]
___copy_helper_block_
___destroy_helper_block_
___35-[EKSource calendarsForEntityType:]_block_invoke
+[EKSource orderSortDescriptors]
___32+[EKSource orderSortDescriptors]_block_invoke
-[EKSource description]
-[EKSource dropBoxPathFromEvent:]
+[EKSource calendarTypeFromSourceType:]
-[EKSource backingSource]
-[EKSource commit:]
___29+[EKSource knownIdentityKeys]_block_invoke
+[EKSource knownImmutableKeys]
___30+[EKSource knownImmutableKeys]_block_invoke
-[EKSource _applyKnownImmutableValuesFrom:]
___32+[EKSource knownSingleValueKeys]_block_invoke
-[EKSource validate:]
-[EKSource _validateDeletable:]
-[EKSource supportsInvitationModificationsWithoutNotification]
-[EKSource _useExistingObjectWhenDecoding]
-[EKSource _existingObjectForDecodedIdentifier:]
-[EKSource updateManagedObjectID]
-[EKSource isWritable]
-[EKSource ownerAddresses]
-[EKSource providerIdentifier]
-[EKSource supportsAttendeeComments]
-[EKSource supportsDropBoxAttachments]
-[EKSource supportsFreebusy]
-[EKSource supportsManagedAttachments]
-[EKSource supportsPrivateEvents]
-[EKSource supportsSharingScheduling]
-[EKSource dropBoxPathString]
-[EKSource serverURL]
-[EKSource supportsUnbind]
-[EKSource .cxx_destruct]
+[EKUndoableOperation operationWithSnapshotters:span:]
-[EKUndoableOperation initWithSnapshotters:span:]
-[EKUndoableOperation execute]
-[EKUndoableOperation actionName]
-[EKUndoableOperation inverseOperation]
-[EKUndoableOperation _inverseOperationClass]
-[EKUndoableOperation snapshotters]
-[EKUndoableOperation setSnapshotters:]
-[EKUndoableOperation span]
-[EKUndoableOperation setSpan:]
-[EKUndoableOperation type]
-[EKUndoableOperation setType:]
-[EKUndoableOperation error]
-[EKUndoableOperation setError:]
-[EKUndoableOperation .cxx_destruct]
+[EKEditingContext initialize]
+[EKEditingContext allOpenEditingContexts]
+[EKEditingContext allCurrentlyEditedEvents]
+[EKEditingContext uniqueIDForObject:]
+[EKEditingContext _objectIDSetForEKObjects:]
+[EKEditingContext openEditingContext:withObjects:]
+[EKEditingContext closeEditingContext:]
+[EKEditingContext editingContextForEKObjectIDSet:]
+[EKEditingContext openEditingContextsForObject:]
+[EKEditingContext editingContextsForUniqueID:]
+[EKEditingContext editingContextsAreOpenForObject:]
+[EKEditingContext reset]
-[EKEditingContext init]
-[EKEditingContext _removeSnapshotter:]
+[EKEditingContext contextWithObjects:sender:]
+[EKEditingContext contextWithSnapshotters:sender:]
-[EKEditingContext openWithObjects:sender:]
-[EKEditingContext openWithSnapshotters:sender:]
-[EKEditingContext _resetOriginalObjectsWithSnapshotters:]
___58-[EKEditingContext _resetOriginalObjectsWithSnapshotters:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKEditingContext objects]
-[EKEditingContext contextsVersionOfObject:]
-[EKEditingContext allObjectsAreEvents]
-[EKEditingContext allObjectsAreCalendars]
-[EKEditingContext trackedEvents]
-[EKEditingContext trackedEventsDidUpdate:]
-[EKEditingContext addAllObjects:]
-[EKEditingContext deleteAllObjects:]
-[EKEditingContext _setAllObjectsToDontNotify]
-[EKEditingContext _spanDecisionForSpan:]
-[EKEditingContext setSpan:]
-[EKEditingContext _applySpanDecision:]
-[EKEditingContext _requestSaveAndSpanDecisionIfNeededForAction:]
-[EKEditingContext _doCheckForConflictsWhenAcceptingAllWithSpanDecision:action:diffSummary:]
-[EKEditingContext _doEarlyRequestCommitDecisionAtSaveTimeForAction:]
-[EKEditingContext _requestCommitDecisionIfNeededForAction:]
-[EKEditingContext savePartialChange:]
-[EKEditingContext saveCompleteChange:]
-[EKEditingContext saveCompleteChangeWithImpliedCommitDecision:]
-[EKEditingContext revert:]
-[EKEditingContext saveChange:sender:]
___38-[EKEditingContext saveChange:sender:]_block_invoke
-[EKEditingContext saveActionIsDecline]
-[EKEditingContext diffSummarySinceLastSaveType:commit:]
-[EKEditingContext hasChangesForSaveType:]
-[EKEditingContext performUndoableOperation:]
-[EKEditingContext _originalObjectForSnapshottedObject:]
-[EKEditingContext _revert]
-[EKEditingContext _updateObjectsToCommitForSnapshotter:]
-[EKEditingContext _updateRevertStateForSnapshotter:]
-[EKEditingContext cancelCurrentSave]
-[EKEditingContext _hasChangesRequiringSpanAllAndSpanIsThis]
-[EKEditingContext _resetObjects]
-[EKEditingContext close:]
-[EKEditingContext closeAndForceCommit:]
-[EKEditingContext closeAndForceDontCommit:]
-[EKEditingContext commit:]
-[EKEditingContext _close:andCommit:]
-[EKEditingContext _commitAndShouldClose]
-[EKEditingContext shouldResetUndoStack]
-[EKEditingContext makeSenderActive:]
-[EKEditingContext _allEditors]
-[EKEditingContext _removeEditor:]
-[EKEditingContext _makeAllEditorsInactive]
-[EKEditingContext _addEditor:active:]
-[EKEditingContext decisionDelegate]
-[EKEditingContext setDecisionDelegate:]
-[EKEditingContext undoDelegate]
-[EKEditingContext setUndoDelegate:]
-[EKEditingContext commitDelegate]
-[EKEditingContext setCommitDelegate:]
-[EKEditingContext deferredCommit]
-[EKEditingContext setDeferredCommit:]
-[EKEditingContext snapshotters]
-[EKEditingContext setSnapshotters:]
-[EKEditingContext conflictsToExcludeFromAll]
-[EKEditingContext setConflictsToExcludeFromAll:]
-[EKEditingContext originalObjects]
-[EKEditingContext setOriginalObjects:]
-[EKEditingContext objectsToCommit]
-[EKEditingContext setObjectsToCommit:]
-[EKEditingContext currentSpan]
-[EKEditingContext setCurrentSpan:]
-[EKEditingContext requestedSpan]
-[EKEditingContext setRequestedSpan:]
-[EKEditingContext commitDecision]
-[EKEditingContext setCommitDecision:]
-[EKEditingContext isRequestingDecision]
-[EKEditingContext setIsRequestingDecision:]
-[EKEditingContext didPartialSave]
-[EKEditingContext setDidPartialSave:]
-[EKEditingContext isDeletingObjects]
-[EKEditingContext setIsDeletingObjects:]
-[EKEditingContext inactiveEditors]
-[EKEditingContext setInactiveEditors:]
-[EKEditingContext activeEditors]
-[EKEditingContext setActiveEditors:]
-[EKEditingContext eventChangeListener]
-[EKEditingContext setEventChangeListener:]
-[EKEditingContext trackedEKObjectIDs]
-[EKEditingContext setTrackedEKObjectIDs:]
-[EKEditingContext revertSnapshotter]
-[EKEditingContext setRevertSnapshotter:]
-[EKEditingContext .cxx_destruct]
-[EKObject(Saving) saveWithSpan:]
-[EKObject(Saving) saveWithSpan:error:]
-[EKObject(Saving) removeWithSpan:]
-[EKObject(Saving) removeWithSpan:error:]
-[EKEvent(Saving) saveWithSpan:error:]
-[EKEvent(Saving) removeWithSpan:error:]
-[EKReminder(Saving) saveWithSpan:error:]
-[EKReminder(Saving) removeWithSpan:error:]
-[EKCalendar(Saving) saveWithSpan:error:]
-[EKCalendar(Saving) removeWithSpan:error:]
-[EKSource(Saving) saveWithSpan:error:]
-[EKSource(Saving) removeWithSpan:error:]
-[EKFrozenAttachment initWithObject:createPartialObject:preFrozenRelationshipObjects:]
+[EKFrozenAttachment meltedClass]
-[EKFrozenAttachment attachmentIDOnServer]
-[EKFrozenAttachment contentType]
-[EKFrozenAttachment filenameSuggestedByServer]
-[EKFrozenAttachment isAutoArchivedNumber]
-[EKFrozenAttachment urlOnDisk]
-[EKFrozenAttachment urlOnServer]
-[EKFrozenAttachment uuid]
-[EKFrozenAttachment .cxx_destruct]
-[EKObjectTracker initWithBackingStore:]
-[EKObjectTracker copyForBackingStore:]
-[EKObjectTracker itemWithIdentifier:]
-[EKObjectTracker trackItemWithIdentifier:occurrence:]
-[EKObjectTracker updateItemWithIdentifier:occurrence:]
-[EKObjectTracker removeItemWithIdentifier:]
-[EKObjectTracker removeItemsWithIdentifiers:]
-[EKObjectTracker removeItemsWithoutIdentifiers:]
-[EKObjectTracker removeItemsWithManagedObjectIDs:]
-[EKObjectTracker itemIdentifiers]
-[EKObjectTracker items]
-[EKObjectTracker sortedItemIdentifiers]
-[EKObjectTracker totalItems]
-[EKObjectTracker itemDictionary]
-[EKObjectTracker detachedItemsForIdentifier:]
-[EKObjectTracker enumerateItemsUsingBlock:]
-[EKObjectTracker calendarWithIdentifier:]
-[EKObjectTracker trackCalendarWithIdentifier:calendar:]
-[EKObjectTracker removeCalendarWithIdentifier:]
-[EKObjectTracker calendarIdentifiers]
-[EKObjectTracker calendars]
-[EKObjectTracker calendarDictionary]
-[EKObjectTracker calendarSourceIdentifiers]
-[EKObjectTracker calendarSources]
-[EKObjectTracker calendarSourcesDictionary]
-[EKObjectTracker calendarSourceWithIdentifier:]
-[EKObjectTracker removeCalendarSourceWithIdentifier:]
-[EKObjectTracker trackCalendarSource:withIdentifier:]
-[EKObjectTracker backingStore]
-[EKObjectTracker setBackingStore:]
-[EKObjectTracker .cxx_destruct]
-[EKFrozenCalendarSource initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenCalendarSource isWritable]
-[EKFrozenCalendarSource ownerAddresses]
-[EKFrozenCalendarSource providerIdentifier]
-[EKFrozenCalendarSource supportsAttendeeComments]
-[EKFrozenCalendarSource supportsDropBoxAttachments]
-[EKFrozenCalendarSource supportsFreebusy]
-[EKFrozenCalendarSource supportsManagedAttachments]
-[EKFrozenCalendarSource supportsPrivateEvents]
-[EKFrozenCalendarSource supportsSharingScheduling]
-[EKFrozenCalendarSource dropBoxPathString]
-[EKFrozenCalendarSource serverURL]
-[EKFrozenCalendarSource supportsUnbind]
-[EKFrozenCalendarSource .cxx_destruct]
+[EKCalendarPreferences calendarPreferences]
___44+[EKCalendarPreferences calendarPreferences]_block_invoke
-[EKCalendarPreferences init]
-[EKCalendarPreferences updateCheckedStateForCalendarWithUID:delegateID:state:]
-[EKCalendarPreferences checkedStateForCalendarWithUID:delegateID:]
-[EKCalendarPreferences disabledCalendarsForDelegateWithUID:]
-[EKCalendarPreferences disabledCalendarsForMainWindow]
-[EKCalendarPreferences updateExpandedStateForTopLevelNodeWithUID:state:]
-[EKCalendarPreferences expandedStateForTopLevelNodeWithUID:]
-[EKCalendarPreferences _updateStateForDisabledOrCollapsedItemWithUID:delegateID:state:withKey:withNotification:]
-[EKCalendarPreferences _disabledOrCollapsedItemsForDelegateID:withKey:]
-[EKCalendarPreferences _checkedStateForDisabledOrCollapsedItemWithUID:delegateID:withKey:]
-[EKCalendarPreferences _keyForDelegateID:]
-[EKCalendarPreferences displayOrderForLocalGroupWithSourceIdentifier:]
-[EKCalendarPreferences updateDisplayOrderForLocalGroupsWithSourceIdentifiers:]
-[EKCalendarPreferences displayOrderForAccountWithSourceIdentifier:]
-[EKCalendarPreferences updateDisplayOrderForAccountsWithSourceIdentifiers:]
-[EKCalendarPreferences _displayOrderForSourceWithIdentifier:key:]
-[EKCalendarPreferences _updateDisplayOrderForSources:key:]
-[EKCalendarPreferences calPreferences]
-[EKCalendarPreferences setCalPreferences:]
-[EKCalendarPreferences .cxx_destruct]
-[EKNotificationBoxMessage initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
-[EKNotificationBoxMessage initWithMessageType:]
-[EKNotificationBoxMessage messageType]
-[EKNotificationBoxMessage copyWithZone:]
+[EKNotificationBoxMessage knownIdentityKeys]
+[EKNotificationBoxMessage knownImmutableKeys]
+[EKNotificationBoxMessage uniqueIdentifierForObject:]
+[EKNotificationBoxMessage frozenClass]
+[EKNotificationBoxMessage _notificationBoxMessageTypeForCalMessageType:]
-[EKNotificationBoxMessage managedObjectID]
-[EKNotificationBoxMessage messageTypeNumber]
-[EKNotificationBoxMessage path]
-[EKNotificationBoxMessage .cxx_destruct]
-[EKPredicate description]
-[EKPredicate initWithCoder:]
-[EKPredicate encodeWithCoder:]
-[EKPredicate hasFastPathWithStore:]
-[EKPredicate fastPathResultWithStore:]
-[EKPredicate setCalendarIdentifiers:]
-[EKPredicate skipSorting]
-[EKPredicate setSkipSorting:]
-[EKPredicate .cxx_destruct]
+[EKEventPredicate predicateWithStartDate:endDate:timeZone:calendars:]
+[EKEventPredicate predicateWithStartDate:endDate:timeZone:calendars:prefetchHint:]
+[EKEventPredicate predicateWithStartDate:endDate:timeZone:calendarIdentifiers:prefetchHint:]
-[EKEventPredicate initWithStartDate:endDate:timeZone:calendars:prefetchHint:]
-[EKEventPredicate initWithCoder:]
-[EKEventPredicate encodeWithCoder:]
-[EKEventPredicate startDate]
-[EKEventPredicate endDate]
-[EKEventPredicate timeZone]
-[EKEventPredicate prefetchHint]
-[EKEventPredicate evaluateWithObject:]
-[EKEventPredicate copyWithZone:]
-[EKEventPredicate predicateFormat]
-[EKEventPredicate isEqual:]
-[EKEventPredicate .cxx_destruct]
-[EKDeleteOperation actionName]
-[EKDeleteOperation execute]
-[EKDeleteOperation _inverseOperationClass]
-[EKPredicateSearch _processManagedObjectsIntoEKObjects:]
___57-[EKPredicateSearch _processManagedObjectsIntoEKObjects:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKPredicateSearch _completeOnAppropriateThreadWithResults:]
___61-[EKPredicateSearch _completeOnAppropriateThreadWithResults:]_block_invoke
___copy_helper_block_75
___destroy_helper_block_76
-[EKPredicateSearch _updateQuery:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___34-[EKPredicateSearch _updateQuery:]_block_invoke
___copy_helper_block_79
___destroy_helper_block_80
-[EKPredicateSearch _finishQuery:]
-[EKPredicateSearch _endSpotlightQuery]
___39-[EKPredicateSearch _endSpotlightQuery]_block_invoke
___copy_helper_block_102
___destroy_helper_block_103
-[EKPredicateSearch _startSpotlightQuery:synchronous:]
___54-[EKPredicateSearch _startSpotlightQuery:synchronous:]_block_invoke
___copy_helper_block_105
___destroy_helper_block_106
___54-[EKPredicateSearch _startSpotlightQuery:synchronous:]_block_invoke112
___copy_helper_block_121
___destroy_helper_block_122
-[EKPredicateSearch _beginQueryWithMDQueryString:onCalendars:synchronous:]
+[EKPredicateSearch _fastPathAvailableForPredicate:inStore:]
+[EKPredicateSearch _fastPathResultForPredicate:inStore:]
___57+[EKPredicateSearch _fastPathResultForPredicate:inStore:]_block_invoke
___24-[EKPredicateSearch run]_block_invoke
___copy_helper_block_174
___destroy_helper_block_175
-[EKPredicateSearch _managedCalendarsForCalendarUIDs:context:]
-[EKPredicateSearch startWithCompletionCallback:cancelCallback:synchronous:isEventQuery:]
___89-[EKPredicateSearch startWithCompletionCallback:cancelCallback:synchronous:isEventQuery:]_block_invoke
___copy_helper_block_211
___destroy_helper_block_212
-[EKPredicateSearch cancelSearch]
___33-[EKPredicateSearch cancelSearch]_block_invoke
___copy_helper_block_239
___destroy_helper_block_240
-[EKPredicateSearch currentResults]
-[EKPredicateSearch completionCallback]
-[EKPredicateSearch setCompletionCallback:]
-[EKPredicateSearch cancelCallback]
-[EKPredicateSearch setCancelCallback:]
-[EKPredicateSearch queryQueue]
-[EKPredicateSearch setQueryQueue:]
-[EKPredicateSearch .cxx_destruct]
-[NSString(StringBrokenUpByWordsHasPrefixOnAnyWord) brokenUpByWordsHasPrefixOnAnyWord:]
-[NSString(StringBrokenUpByWordsHasPrefixOnAnyWord) brokenUpByWordsHasPrefixOnAnyWord:usingLocale:]
+[EKEvent eventWithEventStore:]
-[EKEvent entityType]
-[EKEvent isPrivacySet]
-[EKEvent isPrivacySetInDelegateOrSharedToMeCalendar]
-[EKEvent _isPrivacySetInDelegateOrSharedToMeCalendar:]
-[EKEvent privacyLevel]
-[EKEvent setPrivacyLevel:]
-[EKEvent notificationBoxMessageSet]
-[EKEvent privacyLevelString]
-[EKEvent setNotificationBoxMessageSet:]
-[EKEvent setPrivacyLevelString:]
-[EKEvent _startDateIsOnSameDayAsOtherEventInSeries]
+[EKEvent frozenClass]
+[EKEvent hashForObject:]
+[EKEvent knownImmutableKeys]
___29+[EKEvent knownImmutableKeys]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKEvent _applyKnownImmutableValuesFrom:]
+[EKEvent knownRelationshipMultiValueKeys]
___42+[EKEvent knownRelationshipMultiValueKeys]_block_invoke
___copy_helper_block_138
___destroy_helper_block_139
+[EKEvent knownRelationshipSingleValueKeys]
___43+[EKEvent knownRelationshipSingleValueKeys]_block_invoke
___copy_helper_block_148
___destroy_helper_block_149
+[EKEvent knownSingleValueKeys]
___31+[EKEvent knownSingleValueKeys]_block_invoke
___copy_helper_block_168
___destroy_helper_block_169
+[EKEvent knownSkipValidationKeys]
___34+[EKEvent knownSkipValidationKeys]_block_invoke
-[EKEvent _keysToChangeForDuplicateWithOptions:]
+[EKEvent batchChangeNotificationName]
-[EKEvent copy]
-[EKEvent frozenObject]
-[EKEvent _isNonDetachedOccurrenceInSeries]
-[EKEvent endDate]
-[EKEvent endDateUnadjustedFromUTC]
-[EKEvent setEndDateUnadjustedFromUTC:]
-[EKEvent travelTime]
-[EKEvent setTravelTime:]
-[EKEvent title]
-[EKEvent dontSendNotificationForChanges]
-[EKEvent setDontSendNotificationForChanges:]
-[EKEvent intersectsRangeIfFloating:normalRange:]
-[EKEvent travelDuration]
-[EKEvent setTravelDuration:]
-[EKEvent startDateIncludingTravelUnadjustedFromUTC]
-[EKEvent startDateIncludingTravel]
-[EKEvent statusString]
-[EKEvent setStatusString:]
-[EKEvent attendeesStatus]
-[EKEvent status]
-[EKEvent structuredLocation]
-[EKEvent ekStructuredLocation]
-[EKEvent setStructuredLocation:]
-[EKEvent setEkStructuredLocation:]
-[EKEvent travelStartLocation]
-[EKEvent ekStructuredStartLocation]
-[EKEvent setTravelStartLocation:]
-[EKEvent setEkStructuredStartLocation:]
-[EKEvent isDetached]
-[EKEvent setIsDetached:]
+[EKEvent _basicChangesRequiringSpanAll]
___40+[EKEvent _basicChangesRequiringSpanAll]_block_invoke
-[EKEvent hasChangesRequiringSpanAll]
-[EKEvent _hasBasicChangesRequiringSpanAll]
-[EKEvent _hasRecurrenceRuleChangeRequiringSpanAll]
-[EKEvent _undoRequiresSpanAll]
-[EKEvent _hasRecurrenceRuleChangeHelperIncludeAddition:includeRemoval:]
-[EKEvent hasChangesAffectingRecurrenceDate]
-[EKEvent availabilityEnum]
-[EKEvent setAvailabilityEnum:]
-[EKEvent availability]
-[EKEvent setAvailability:]
-[EKEvent changeAttendeeStatusAndUpdateAvailability:]
-[EKEvent setTimeZoneObject:]
-[EKEvent setStartDate:]
-[EKEvent setEndDate:]
-[EKEvent defaultAlarms]
-[EKEvent setAllDay:]
-[EKEvent organizer]
-[EKEvent isEvent]
-[EKEvent compareStartDateWithEvent:]
-[EKEvent birthdayPersonUniqueID]
-[EKEvent isBirthday]
-[EKEvent commitWithSpan:error:]
-[EKEvent removeWithSpan:error:]
-[EKEvent eventIdentifier]
-[EKEvent externalURI]
-[EKEvent responseComment]
-[EKEvent setResponseComment:]
-[EKEvent locations]
-[EKEvent setLocations:]
-[EKEvent allowsAlarmModifications]
-[EKEvent allowsAllDayModifications]
-[EKEvent allowsAttachmentModifications]
-[EKEvent allowsAttendeesModifications]
-[EKEvent allowsAvailabilityModifications]
-[EKEvent allowsParticipantStatusModifications]
-[EKEvent allowsPrivateModifications]
-[EKEvent allowsResponseCommentModifications]
-[EKEvent allowsTravelTimeModifications]
-[EKEvent _travelTimeModificationIsOK]
-[EKEvent isEditable]
+[EKEvent _eventAvailabilityForParticipantStatus:]
-[EKEvent _removeAllNotificationBoxMessages]
-[EKEvent _removeNotificationBoxMessage:]
-[EKEvent requirementsToMoveFromCalendar:toCalendar:]
-[EKEvent requirementsToMoveToCalendar:]
-[EKEvent canMoveFromCalendar:toCalendar:error:]
-[EKEvent canMoveOrCopyFromCalendar:toCalendar:error:]
-[EKEvent requiresCopyToMoveFromCalendar:toCalendar:]
-[EKEvent copyToCalendar:withOptions:]
-[EKEvent validate:]
-[EKEvent validateWithSpan:error:]
-[EKEvent _validateDatesWithError:]
-[EKEvent _validatePrivacyWithError:]
-[EKEvent _validateSpan:error:]
-[EKEvent refresh]
-[EKEvent eventOccurrenceID]
-[EKEvent occurrenceDate]
-[EKEvent isValidRecurrenceDate:]
+[EKEvent _isValidRecurrenceDate:inSeries:]
+[EKEvent _isValidRecurrenceDate:event:master:]
-[EKEvent dropBoxLocation]
-[EKEvent _conflictDatesFromConflicts:]
-[EKEvent conflictDetails]
-[EKEvent _existingOrNewOccurrenceForDate:]
-[EKEvent createConflictsForDates:]
-[EKEvent _updateDatesForRecurrenceDate:]
-[EKEvent _updateDatesForStartDate:]
+[EKEvent _eventWithMasterEvent:forRecurrenceDate:]
+[EKEvent _eventWithOriginalOccurrence:forRecurrenceDate:store:]
+[EKEvent _eventWithOriginalOccurrence:forRecurrenceDate:createPartialBackingObject:eventStore:]
-[EKEvent _newDetachedEventWithDetachedOccurrence:forRecurrenceDate:]
-[EKEvent _detachedEventForDetachedOccurrence:forRecurrenceDate:]
-[EKEvent checkAndSetCalendarForCaching:]
-[EKEvent clearCachedTimeValues]
-[EKEvent startOfDayForStartDateInCalendar:]
-[EKEvent startOfDayForEndDateInCalendar:]
-[EKEvent isMultiDayTimedEventInCalendar:]
-[EKEvent daysSpannedInCalendar:]
-[EKEvent _hasOrHadRecurrenceRule]
-[EKEvent overlapsWithOrIsSameDayAsEventInSeries]
-[EKEvent _sortedExpandedEventsForSeriesTilLatestRelevantDateHelperEarlyDate:laterDate:]
___88-[EKEvent _sortedExpandedEventsForSeriesTilLatestRelevantDateHelperEarlyDate:laterDate:]_block_invoke
-[EKEvent isOutOfOrderWithEventInSeries]
-[EKEvent alarmOverlapsWithEventInSeries]
+[EKEvent _eventsFromSameSeriesAreOutOfOrderForEvent:otherEvent:]
-[EKEvent seriesHasOutOfOrderEvents]
-[EKEvent seriesHasOverlappingOrOnSameDayOrOutOfOrderEvents]
-[EKEvent seriesHasOverlappingAlarms]
-[EKEvent durationOverlapsRecurrenceInterval]
-[EKEvent hasFieldsIncompatibleWithMoveToCalendar:]
-[EKEvent compareTimeEndingRecently:]
-[EKEvent makeRecurrenceEndCountBased]
-[EKEvent makeRecurrenceEndDateBased]
-[EKEvent masterEventOccurrence]
-[EKEvent exceptionDates]
-[EKEvent detachedEventOccurrences]
-[EKEvent isUndetached]
-[EKEvent isUnexcepted]
-[EKEvent isDeletedDetached]
-[EKEvent isDifferentFromCommittedEvent]
-[EKEvent isDifferentFromCommittedEventAndRequiresReschedule]
-[EKEvent isDifferentFromCommittedEventAndRequiresRSVP]
-[EKEvent _isDifferentFromCommittedEventHelperRequiresReschedule:]
-[EKEvent isDifferentFromCommittedEventExceptingPerUserProperties]
-[EKEvent isDifferentFromCommittedEventAndHasUnscheduledAttendees]
-[EKEvent isDifferentFromCommittedEventAndHasOnlyUnscheduledAttendees]
-[EKEvent isSignificantlyDetached]
-[EKEvent isSignificantlyDetachedIgnoringParticipation]
-[EKEvent isMainOccurrence]
-[EKEvent isFirstOccurrence]
-[EKEvent isOnlyOccurrence]
+[EKEvent itemWithIdentifier:inStore:]
+[EKEvent eventFromICSEvent:withDocument:inStore:]
+[EKEvent eventFromICSEvent:inStore:]
-[EKEvent _downloadAttachments]
-[EKEvent _allowsAnyModificationsByAttendees]
-[EKEvent _canMoveOrCopyFromCalendar:toCalendar:allowedRequirements:error:]
-[EKEvent _requirementsToMoveOrCopyToCalendarHelperAllowedToMoveOrCopyEventFromCalendar:toCalendar:]
-[EKEvent _requirementsToMoveToCalendarHelperAlterationsRequiredToMoveEventFromCalendar:toCalendar:]
-[EKEvent _requirementsToMoveToCalendarHelperDuplicationRequiredToMoveEventFromCalendar:toCalendar:]
-[EKEvent _requirementsToMoveToCalendarHelperNeedToRemoveOriginalToMoveEventFromCalendar:toCalendar:]
-[EKEvent _requirementsToMoveToCalendarHelperReinviteAttendeesRequiredToMoveEventFromCalendar:toCalendar:]
-[EKEvent _requirementsToMoveToCalendarHelperRemoveAttendeesRequiredToMoveEventFromCalendar:toCalendar:]
+[EKEvent _stringForEventStatus:]
-[EKEvent _validateEntityTypeIsSupported:]
-[EKEvent _validateRecurrence:]
-[EKEvent _validateEditable:]
-[EKEvent _validateEditableHelperBasedOnChangesToKey:checkBoolPropertiesAndValues:error:errorCode:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateEditableHelperBasedOnChangesToKey:checkBoolProperty:propertyValue:error:errorCode:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateAlarmsEditable:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateCalendarEditable:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateParticipationStatusEditable:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _onlyAttendeeChangeWasToMyPartStat]
-[EKEvent _validateAllDayEditable:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateAvailability:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateResponseCommentEditable:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _validateTravelTimeEditable:requiresFurtherValidation:keysAlreadyValidated:]
-[EKEvent _needsAttendeePartStatReset]
-[EKEvent lunarCalendarString]
-[EKEvent isPhantom]
-[EKEvent setIsPhantom:]
-[EKEvent participantsStatus]
-[EKEvent sliceParentID]
-[EKEvent setSliceParentID:]
-[EKEvent birthdayTitle]
-[EKEvent setBirthdayTitle:]
-[EKEvent nameForBirthday]
-[EKEvent isYearlessBirthday]
-[EKEvent isYearlessLeapMonthBirthday]
-[EKEvent cachedStartOfDayForStartDate]
-[EKEvent setCachedStartOfDayForStartDate:]
-[EKEvent cachedStartOfDayForEndDate]
-[EKEvent setCachedStartOfDayForEndDate:]
-[EKEvent cachedIsMultiDayTimedEvent]
-[EKEvent setCachedIsMultiDayTimedEvent:]
-[EKEvent cachedDaysSpanned]
-[EKEvent setCachedDaysSpanned:]
-[EKEvent cachedTimeValuesCalendar]
-[EKEvent setCachedTimeValuesCalendar:]
-[EKEvent .cxx_destruct]
-[EKConflictDetails initWithDates:totalOccurrences:]
-[EKConflictDetails description]
-[EKConflictDetails dates]
-[EKConflictDetails totalOccurrences]
-[EKConflictDetails .cxx_destruct]
+[EKSaveOperation multipleEventsChangedActionName]
+[EKSaveOperation genericEventChangedActionName:]
+[EKSaveOperation changedTimeActionName:]
+[EKSaveOperation changedTitleActionName:]
+[EKSaveOperation changedTimeZoneActionName:]
+[EKSaveOperation changedCalendarActionName:]
+[EKSaveOperation changedAvailablityActionName:]
+[EKSaveOperation changedPrivacyActionName:]
+[EKSaveOperation changedNotesActionName:]
+[EKSaveOperation changedURLActionName:]
+[EKSaveOperation changedAttachmentPermissionsActionName:]
+[EKSaveOperation changedAttendeeCommentActionName:]
+[EKSaveOperation changedParticipationStatusActionName:]
+[EKSaveOperation changedResponseCommentActionName:]
+[EKSaveOperation alarmsAddedActionName:]
+[EKSaveOperation alarmsRemovedActionName:]
+[EKSaveOperation alarmsModifiedActionName:]
+[EKSaveOperation attachmentsAddedActionName:]
+[EKSaveOperation attachmentsRemovedActionName:]
+[EKSaveOperation attachmentsModifiedActionName:]
+[EKSaveOperation attendeesAddedActionName:]
+[EKSaveOperation attendeesRemovedActionName:]
+[EKSaveOperation attendeesModifiedActionName:]
+[EKSaveOperation changedAllDayActionNameWithCurrentEvent:previousEvent:]
+[EKSaveOperation changedTravelTimeActionNameWithCurrentEvent:previousEvent:]
+[EKSaveOperation changedRecurrenceRuleActionNameWithCurrentEvent:previousEvent:]
+[EKSaveOperation changedLocationActionNameWithCurrentEvent:previousEvent:]
+[EKSaveOperation changedColorOfCalendar:]
-[EKSaveOperation actionName]
-[EKSaveOperation execute]
-[EKSaveOperation _inverseOperationClass]
+[EKFrozenEvent meltedClass]
-[EKFrozenEvent initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenEvent isEvent]
+[EKFrozenEvent propertiesUnavailableForPartialObjects]
___55+[EKFrozenEvent propertiesUnavailableForPartialObjects]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKFrozenEvent availabilityEnum]
-[EKFrozenEvent birthdayTitle]
-[EKFrozenEvent dontSendNotificationForChanges]
-[EKFrozenEvent ekStructuredLocation]
-[EKFrozenEvent ekStructuredStartLocation]
-[EKFrozenEvent endDateUnadjustedFromUTC]
-[EKFrozenEvent isDetached]
-[EKFrozenEvent isPhantom]
-[EKFrozenEvent isYearlessBirthday]
-[EKFrozenEvent isYearlessLeapMonthBirthday]
-[EKFrozenEvent nameForBirthday]
-[EKFrozenEvent notificationBoxMessageSet]
-[EKFrozenEvent lunarCalendarString]
-[EKFrozenEvent participantsStatus]
-[EKFrozenEvent privacyLevelString]
-[EKFrozenEvent responseComment]
-[EKFrozenEvent sliceParentID]
-[EKFrozenEvent statusString]
-[EKFrozenEvent travelDuration]
-[EKFrozenEvent .cxx_destruct]
+[EKRecurrenceDayOfWeek dayOfWeek:]
+[EKRecurrenceDayOfWeek dayOfWeek:weekNumber:]
-[EKRecurrenceDayOfWeek initWithDayOfTheWeek:weekNumber:]
-[EKRecurrenceDayOfWeek initWithCoder:]
-[EKRecurrenceDayOfWeek encodeWithCoder:]
-[EKRecurrenceDayOfWeek iCalendarValueFromDayOfTheWeek:]
-[EKRecurrenceDayOfWeek iCalendarDescription]
-[EKRecurrenceDayOfWeek description]
-[EKRecurrenceDayOfWeek hash]
-[EKRecurrenceDayOfWeek isEqual:]
-[EKRecurrenceDayOfWeek copyWithZone:]
-[EKRecurrenceDayOfWeek dayOfTheWeek]
-[EKRecurrenceDayOfWeek weekNumber]
-[EKObjectSnapshotter initWithObject:]
-[EKObjectSnapshotter initWithObject:previousObject:]
-[EKObjectSnapshotter copyWithZone:]
-[EKObjectSnapshotter snapshot]
-[EKObjectSnapshotter updateCurrentObject:]
-[EKObjectSnapshotter inverseSnapshotter]
-[EKObjectSnapshotter useCustomInverseSnapshotter:]
-[EKObjectSnapshotter _affectedObjects]
-[EKObjectSnapshotter objectsToCommit]
-[EKObjectSnapshotter currentObject]
-[EKObjectSnapshotter setCurrentObject:]
-[EKObjectSnapshotter previousObject]
-[EKObjectSnapshotter setPreviousObject:]
-[EKObjectSnapshotter customInverseSnapshotter]
-[EKObjectSnapshotter setCustomInverseSnapshotter:]
-[EKObjectSnapshotter isSliceSnapshotter]
-[EKObjectSnapshotter setIsSliceSnapshotter:]
-[EKObjectSnapshotter requiresSpanOtherThanThis]
-[EKObjectSnapshotter setRequiresSpanOtherThanThis:]
-[EKObjectSnapshotter .cxx_destruct]
-[EKEventSliceSnapshotter initWithSlicedEvent:sliceDate:originalMaster:originalDetachments:originalExceptions:]
-[EKEventSliceSnapshotter copyWithZone:]
-[EKEventSliceSnapshotter slicedEvent]
-[EKEventSliceSnapshotter _affectedObjects]
-[EKEventSliceSnapshotter sliceDate]
-[EKEventSliceSnapshotter setSliceDate:]
-[EKEventSliceSnapshotter originalMaster]
-[EKEventSliceSnapshotter setOriginalMaster:]
-[EKEventSliceSnapshotter originalDetachments]
-[EKEventSliceSnapshotter setOriginalDetachments:]
-[EKEventSliceSnapshotter originalExceptions]
-[EKEventSliceSnapshotter setOriginalExceptions:]
-[EKEventSliceSnapshotter .cxx_destruct]
-[EKEventMultiSliceSnapshotter initWithSlicedEvent:sliceDate:preSliceMaster:postSliceMaster:postSliceDetachments:postSliceExceptions:]
-[EKEventMultiSliceSnapshotter copyWithZone:]
-[EKEventMultiSliceSnapshotter preSliceMaster]
-[EKEventMultiSliceSnapshotter _affectedObjects]
-[EKEventMultiSliceSnapshotter postSliceMaster]
-[EKEventMultiSliceSnapshotter setPostSliceMaster:]
-[EKEventMultiSliceSnapshotter postSliceDetachments]
-[EKEventMultiSliceSnapshotter setPostSliceDetachments:]
-[EKEventMultiSliceSnapshotter postSliceExceptions]
-[EKEventMultiSliceSnapshotter setPostSliceExceptions:]
-[EKEventMultiSliceSnapshotter .cxx_destruct]
-[EKBatchChangeInfo initWithCurrentUID:originalUID:]
-[EKBatchChangeInfo affectsObject:]
-[EKBatchChangeInfo updatedIdentifier:]
-[EKBatchChangeInfo description]
-[EKBatchChangeInfo copyWithZone:]
-[EKBatchChangeInfo changePending]
-[EKBatchChangeInfo setChangePending:]
-[EKBatchChangeInfo originalUID]
-[EKBatchChangeInfo setOriginalUID:]
-[EKBatchChangeInfo currentUID]
-[EKBatchChangeInfo setCurrentUID:]
-[EKBatchChangeInfo .cxx_destruct]
-[EKEventSliceInfo affectsObject:]
-[EKEventSliceInfo eventIsPreSlicedEvent:]
-[EKEventSliceInfo eventIsSlicedEvent:]
-[EKEventSliceInfo updatedIdentifier:]
-[EKEventSliceInfo description]
-[EKEventSliceInfo copyWithZone:]
-[EKEventSliceInfo sliceType]
-[EKEventSliceInfo setSliceType:]
-[EKEventSliceInfo sliceDate]
-[EKEventSliceInfo setSliceDate:]
-[EKEventSliceInfo currentDate]
-[EKEventSliceInfo setCurrentDate:]
-[EKEventSliceInfo .cxx_destruct]
-[EKRecurrenceChangeInfo updatedIdentifier:]
-[EKRecurrenceChangeInfo description]
-[EKRecurrenceChangeInfo copyWithZone:]
-[EKRecurrenceChangeInfo changeType]
-[EKRecurrenceChangeInfo setChangeType:]
-[EKRecurrenceChangeInfo offset]
-[EKRecurrenceChangeInfo setOffset:]
-[EKRecurrenceChangeInfo .cxx_destruct]
-[EKCreateOperation actionName]
-[EKCreateOperation execute]
-[EKCreateOperation _inverseOperationClass]
+[EKRecurrenceEnd recurrenceEndWithEndDate:]
+[EKRecurrenceEnd recurrenceEndWithOccurrenceCount:]
-[EKRecurrenceEnd initWithEndDate:]
-[EKRecurrenceEnd initWithOccurrenceCount:]
-[EKRecurrenceEnd initWithCoder:]
-[EKRecurrenceEnd encodeWithCoder:]
-[EKRecurrenceEnd usesEndDate]
-[EKRecurrenceEnd description]
-[EKRecurrenceEnd hash]
-[EKRecurrenceEnd isEqual:]
-[EKRecurrenceEnd copyWithZone:]
-[EKRecurrenceEnd endDate]
-[EKRecurrenceEnd occurrenceCount]
-[EKRecurrenceEnd .cxx_destruct]
+[EKEventInfoPredicate predicateWithCalendars:]
-[EKEventInfoPredicate initWithCalendars:]
+[EKEventInfoPredicate predicateWithTitle:location:notes:participantNames:calendars:]
-[EKEventInfoPredicate initWithTitle:location:notes:participantNames:calendars:]
-[EKEventInfoPredicate initWithCoder:]
-[EKEventInfoPredicate encodeWithCoder:]
-[EKEventInfoPredicate mdQueryString]
-[EKEventInfoPredicate _includeCalendarTitleInSearchTerm]
-[EKEventInfoPredicate isEventQuery]
-[EKEventInfoPredicate entityClass]
-[EKEventInfoPredicate evaluateWithObject:]
-[EKEventInfoPredicate location]
-[EKEventInfoPredicate setLocation:]
-[EKEventInfoPredicate notes]
-[EKEventInfoPredicate setNotes:]
-[EKEventInfoPredicate participantNames]
-[EKEventInfoPredicate setParticipantNames:]
-[EKEventInfoPredicate .cxx_destruct]
-[EKRecurrenceHelper initWithSpecifier:]
-[EKRecurrenceHelper revert]
-[EKRecurrenceHelper isDirty]
-[EKRecurrenceHelper isEqual:]
-[EKRecurrenceHelper specifier]
-[EKRecurrenceHelper setSpecifier:]
-[EKRecurrenceHelper daysOfTheWeek]
-[EKRecurrenceHelper setDaysOfTheWeek:]
-[EKRecurrenceHelper daysOfTheMonth]
-[EKRecurrenceHelper setDaysOfTheMonth:]
-[EKRecurrenceHelper daysOfTheYear]
-[EKRecurrenceHelper setDaysOfTheYear:]
-[EKRecurrenceHelper weeksOfTheYear]
-[EKRecurrenceHelper setWeeksOfTheYear:]
-[EKRecurrenceHelper monthsOfTheYear]
-[EKRecurrenceHelper setMonthsOfTheYear:]
-[EKRecurrenceHelper setPositions]
-[EKRecurrenceHelper setSetPositions:]
-[EKRecurrenceHelper _clearArrays]
-[EKRecurrenceHelper _updateSpecifier]
-[EKRecurrenceHelper _parseSpecifierIfNeeded]
-[EKRecurrenceHelper _appendDaysOfTheWeek:toSpecifier:]
-[EKRecurrenceHelper _appendIndexList:toSpecifier:propertyKey:]
-[EKRecurrenceHelper _parseDaysOfWeek:range:]
-[EKRecurrenceHelper _parseIndexList:range:]
-[EKRecurrenceHelper .cxx_destruct]
-[EKRecurrenceRule initRecurrenceWithFrequency:interval:daysOfTheWeek:daysOfTheMonth:monthsOfTheYear:weeksOfTheYear:daysOfTheYear:setPositions:end:]
+[EKRecurrenceRule frozenClass]
+[EKRecurrenceRule knownIdentityKeys]
+[EKRecurrenceRule uniqueIdentifierForObject:]
-[EKRecurrenceRule shouldPinMonthDays]
-[EKRecurrenceRule description]
-[EKRecurrenceRule copyWithZone:]
-[EKRecurrenceRule _initializeArrayWithCapacity:withValue:]
-[EKRecurrenceRule hasDuplicateMonthsOfYear]
-[EKRecurrenceRule newStartDateIsValid:currentStartDate:]
-[EKRecurrenceRule newStartDateIsInvalid:currentStartDate:]
+[EKRecurrenceRule _acceptableStartDateRangeForDailyRecurrenceWithCurrentStartDate:]
+[EKRecurrenceRule _acceptableStartDateRangeForWeeklyRecurrenceWithCurrentStartDate:]
+[EKRecurrenceRule _acceptableStartDateRangeForMonthlyRecurrenceWithCurrentStartDate:]
+[EKRecurrenceRule _acceptableStartDateRangeForYearlyRecurrenceWithCurrentStartDate:]
-[EKRecurrenceRule _acceptableStartDateRangeWithCurrentStartDate:]
-[EKRecurrenceRule calendarIdentifier]
-[EKRecurrenceRule cachedEndDate]
-[EKRecurrenceRule countNumber]
-[EKRecurrenceRule setCountNumber:]
-[EKRecurrenceRule endDate]
-[EKRecurrenceRule setEndDate:]
-[EKRecurrenceRule firstDayOfTheWeekNumber]
-[EKRecurrenceRule firstDayOfTheWeek]
-[EKRecurrenceRule setFirstDayOfTheWeek:]
-[EKRecurrenceRule reset]
+[EKRecurrenceRule iCalendarValueFromDayOfTheWeek:]
+[EKRecurrenceRule iCalendarValueFromDate:isDateOnly:isFloating:]
-[EKRecurrenceRule canonicalize]
+[EKRecurrenceRule _stringValueForRecurrenceRule:asDateOnly:isFloating:]
-[EKRecurrenceRule humanReadableDescriptionWithStartDate:]
+[EKRecurrenceRule _andDaysOfWeekString:]
+[EKRecurrenceRule _numberedWeekDayString:]
+[EKRecurrenceRule _daysOfWeek]
+[EKRecurrenceRule _dayOfMonthAsString:]
+[EKRecurrenceRule _weekDayPositionAsString:]
+[EKRecurrenceRule _orDaysOfWeekString:]
+[EKRecurrenceRule _customDayCombinationDescription:]
+[EKRecurrenceRule daysTypeForDayArray:]
-[EKRecurrenceRule setCachedEnd:]
-[EKRecurrenceRule .cxx_destruct]
+[EKFrozenRecurrenceRule meltedClass]
+[EKFrozenRecurrenceRule intervalFromICSDate:inTimezone:]
-[EKFrozenRecurrenceRule firstDayOfTheWeekNumber]
-[EKFrozenRecurrenceRule .cxx_destruct]
-[EKParticipant initWithName:url:]
-[EKParticipant initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
-[EKParticipant initWithParticipant:newURL:]
+[EKParticipant participantWithParticipant:]
+[EKParticipant participantWithParticipant:newURL:]
-[EKParticipant hasParticipantStatusChange]
-[EKParticipant isInviteUndeliverable]
-[EKParticipant setParticipantRole:]
-[EKParticipant setParticipantStatus:]
-[EKParticipant setParticipantType:]
-[EKParticipant email]
-[EKParticipant replyRequested]
-[EKParticipant setEmail:]
-[EKParticipant status]
-[EKParticipant setReplyRequested:]
-[EKParticipant setStatus:]
-[EKParticipant scheduleForceSend]
-[EKParticipant setScheduleForceSend:]
-[EKParticipant role]
-[EKParticipant setRole:]
-[EKParticipant type]
-[EKParticipant setType:]
-[EKParticipant isCurrentUser]
-[EKParticipant setIsCurrentUser:]
-[EKParticipant isCurrentUserForScheduling]
-[EKParticipant isCurrentUserForSharing]
+[EKParticipant frozenClass]
+[EKParticipant knownSingleValueKeys]
+[EKParticipant knownImmutableKeys]
+[EKParticipant knownIdentityKeys]
+[EKParticipant hashForObject:]
+[EKParticipant uniqueIdentifierForObject:]
-[EKParticipant participantType]
-[EKParticipant participantStatus]
-[EKParticipant participantRole]
-[EKParticipant description]
-[EKParticipant isEqualToParticipant:]
+[EKParticipant participantStatusFromProtocolParticipantStatus:]
+[EKParticipant protocolParticipantStatusFromEKParticipantStatus:]
+[EKParticipant participantRoleFromProtocolParticipantRole:]
+[EKParticipant protocolParticipantRoleFromEKParticipantRole:]
+[EKParticipant participantTypeFromCoreCalendarUserType:]
+[EKParticipant coreCalendarUserTypeFromEKParticipantType:]
-[EKParticipant ABPersonInAddressBook:]
-[EKParticipant nameUsingEmailAsBackup]
-[EKParticipant emailAddress]
-[EKParticipant participantScheduleStatus]
+[EKParticipant canonicalizedEqualityTestValue1:value2:key:object1:object2:]
+[EKParticipant _ensureSubclass]
-[EKParticipant comment]
-[EKParticipant name]
-[EKParticipant scheduleStatusString]
-[EKParticipant URL]
-[EKParticipant .cxx_destruct]
-[EKFrozenAttendee initWithObject:createPartialObject:preFrozenRelationshipObjects:]
+[EKFrozenAttendee meltedClass]
-[EKFrozenAttendee isCurrentUserForSharing]
-[EKFrozenAttendee isCurrentUserForScheduling]
-[EKFrozenAttendee comment]
-[EKFrozenAttendee email]
-[EKFrozenAttendee isCurrentUser]
-[EKFrozenAttendee name]
-[EKFrozenAttendee replyRequested]
-[EKFrozenAttendee scheduleStatusString]
-[EKFrozenAttendee scheduleForceSend]
-[EKFrozenAttendee role]
-[EKFrozenAttendee status]
-[EKFrozenAttendee type]
-[EKFrozenAttendee URL]
-[EKFrozenAttendee .cxx_destruct]
-[EKBackingStoreAccounting initWithBackingStore:]
-[EKBackingStoreAccounting copyForBackingStore:]
-[EKBackingStoreAccounting _accountForObjectCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]
___147-[EKBackingStoreAccounting _accountForObjectCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___147-[EKBackingStoreAccounting _accountForObjectCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke40
___147-[EKBackingStoreAccounting _accountForObjectCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke_2
___copy_helper_block_41
___destroy_helper_block_42
___copy_helper_block_44
___destroy_helper_block_45
___147-[EKBackingStoreAccounting _accountForObjectCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke47
___copy_helper_block_48
___destroy_helper_block_49
-[EKBackingStoreAccounting _accountForMultipleObjectsCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___156-[EKBackingStoreAccounting _accountForMultipleObjectsCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke
___copy_helper_block_51
___destroy_helper_block_52
___156-[EKBackingStoreAccounting _accountForMultipleObjectsCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke56
___156-[EKBackingStoreAccounting _accountForMultipleObjectsCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke_2
___copy_helper_block_57
___destroy_helper_block_58
___copy_helper_block_60
___destroy_helper_block_61
___156-[EKBackingStoreAccounting _accountForMultipleObjectsCheckBlock:lookupCachedBlock:fetchContainersBlock:fetchObjectsBlock:updateBlock:addReceiptBlock:queue:]_block_invoke63
___copy_helper_block_64
___destroy_helper_block_65
-[EKBackingStoreAccounting accountedForOccurrenceWithIdentifier:queue:lookupCachedBlock:fetchBlock:updateBlock:]
___112-[EKBackingStoreAccounting accountedForOccurrenceWithIdentifier:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_69
___destroy_helper_block_70
___112-[EKBackingStoreAccounting accountedForOccurrenceWithIdentifier:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke73
___copy_helper_block_74
___destroy_helper_block_75
___112-[EKBackingStoreAccounting accountedForOccurrenceWithIdentifier:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke77
___copy_helper_block_80
___destroy_helper_block_81
-[EKBackingStoreAccounting accountedForOccurrencesWithIdentifiers:queue:lookupCachedBlock:fetchBlock:updateBlock:]
___114-[EKBackingStoreAccounting accountedForOccurrencesWithIdentifiers:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_87
___destroy_helper_block_88
___114-[EKBackingStoreAccounting accountedForOccurrencesWithIdentifiers:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke91
___copy_helper_block_92
___destroy_helper_block_93
___114-[EKBackingStoreAccounting accountedForOccurrencesWithIdentifiers:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke95
___copy_helper_block_99
___destroy_helper_block_100
-[EKBackingStoreAccounting accountedForAllEventsInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]
___113-[EKBackingStoreAccounting accountedForAllEventsInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_106
___destroy_helper_block_107
___113-[EKBackingStoreAccounting accountedForAllEventsInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]_block_invoke109
___copy_helper_block_112
___destroy_helper_block_113
___113-[EKBackingStoreAccounting accountedForAllEventsInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]_block_invoke115
___copy_helper_block_116
___destroy_helper_block_117
-[EKBackingStoreAccounting accountedForEventsInRange:queue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:fetchedMasters:]
___131-[EKBackingStoreAccounting accountedForEventsInRange:queue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:fetchedMasters:]_block_invoke
___copy_helper_block_127
___destroy_helper_block_128
___131-[EKBackingStoreAccounting accountedForEventsInRange:queue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:fetchedMasters:]_block_invoke132
___copy_helper_block_135
___destroy_helper_block_136
___131-[EKBackingStoreAccounting accountedForEventsInRange:queue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:fetchedMasters:]_block_invoke138
___copy_helper_block_139
___destroy_helper_block_140
-[EKBackingStoreAccounting accountedForAllRemindersInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]
___116-[EKBackingStoreAccounting accountedForAllRemindersInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
___116-[EKBackingStoreAccounting accountedForAllRemindersInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]_block_invoke145
___copy_helper_block_148
___destroy_helper_block_149
___116-[EKBackingStoreAccounting accountedForAllRemindersInQueue:lookupCachedBlock:calendarsBlock:fetchBlock:updateBlock:]_block_invoke151
___copy_helper_block_152
___destroy_helper_block_153
-[EKBackingStoreAccounting accountedForCompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]
___107-[EKBackingStoreAccounting accountedForCompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_155
___destroy_helper_block_156
___107-[EKBackingStoreAccounting accountedForCompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke158
___copy_helper_block_161
___destroy_helper_block_162
___107-[EKBackingStoreAccounting accountedForCompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke164
___copy_helper_block_165
___destroy_helper_block_166
-[EKBackingStoreAccounting accountedForIncompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]
___109-[EKBackingStoreAccounting accountedForIncompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_168
___destroy_helper_block_169
___109-[EKBackingStoreAccounting accountedForIncompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke171
___copy_helper_block_174
___destroy_helper_block_175
___109-[EKBackingStoreAccounting accountedForIncompletedRemindersInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke177
___copy_helper_block_178
___destroy_helper_block_179
-[EKBackingStoreAccounting accountedForRemindersWithDueDatesInQueue:lookupCachedBlock:fetchBlock:updateBlock:]
___110-[EKBackingStoreAccounting accountedForRemindersWithDueDatesInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_181
___destroy_helper_block_182
___110-[EKBackingStoreAccounting accountedForRemindersWithDueDatesInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke184
___copy_helper_block_187
___destroy_helper_block_188
___110-[EKBackingStoreAccounting accountedForRemindersWithDueDatesInQueue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke190
___copy_helper_block_191
___destroy_helper_block_192
-[EKBackingStoreAccounting accountedForRemindersInCalendars:queue:lookupCachedBlock:fetchBlock:updateBlock:]
___108-[EKBackingStoreAccounting accountedForRemindersInCalendars:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke
___copy_helper_block_194
___destroy_helper_block_195
___108-[EKBackingStoreAccounting accountedForRemindersInCalendars:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke197
___copy_helper_block_200
___destroy_helper_block_201
___108-[EKBackingStoreAccounting accountedForRemindersInCalendars:queue:lookupCachedBlock:fetchBlock:updateBlock:]_block_invoke203
___copy_helper_block_204
___destroy_helper_block_205
-[EKBackingStoreAccounting unaccountedForIdentifiersIn:]
-[EKBackingStoreAccounting removeReceiptForOccurrenceIdentifier:]
-[EKBackingStoreAccounting addReceiptForOccurrence:]
-[EKBackingStoreAccounting updateCachedRange:]
-[EKBackingStoreAccounting updateIdentifierReceipts:]
-[EKBackingStoreAccounting addReceiptForAllEvents]
-[EKBackingStoreAccounting eventDateRangeAccountedFor:]
-[EKBackingStoreAccounting uncachedRangeForRange:]
-[EKBackingStoreAccounting cachedPercentageForRange:]
-[EKBackingStoreAccounting addReceiptForRange:]
-[EKBackingStoreAccounting addReceiptForAllReminders]
-[EKBackingStoreAccounting allIncompletedRemindersAccountedFor]
-[EKBackingStoreAccounting addReceiptForAllIncompletedReminders]
-[EKBackingStoreAccounting backingStore]
-[EKBackingStoreAccounting setBackingStore:]
-[EKBackingStoreAccounting fetchSerialQueue]
-[EKBackingStoreAccounting setFetchSerialQueue:]
-[EKBackingStoreAccounting .cxx_destruct]
+[EKAttendee attendeeWithName:url:]
+[EKAttendee attendeeWithParticipant:]
+[EKAttendee frozenClass]
-[EKOrganizer initWithName:url:email:isCurrentUserForScheduling:isCurrentUserForSharing:]
+[EKOrganizer organizerWithName:url:email:isCurrentUserForScheduling:isCurrentUserForSharing:]
+[EKOrganizer _object:equalsObject:forKeys:compareImmutableKeys:]
-[EKOrganizer isCurrentUserForSharing]
-[EKReminderPredicate copyWithZone:]
-[EKReminderPredicate isEqual:]
-[EKReminderPredicate initWithCoder:]
-[EKReminderPredicate encodeWithCoder:]
-[EKReminderPredicate _isSubsetOfRemindersCompletionExactly]
-[EKReminderPredicate _isSubsetOfRemindersWithDueDatesExactly]
-[EKReminderPredicate entityClass]
-[EKReminderPredicate isEventQuery]
-[EKReminderPredicate _includeCalendarTitleInSearchTerm]
-[EKReminderPredicate evaluateWithObject:]
-[EKReminderPredicate mdQueryString]
-[EKReminderPredicate title]
-[EKReminderPredicate setTitle:]
-[EKReminderPredicate calendarTitle]
-[EKReminderPredicate setCalendarTitle:]
-[EKReminderPredicate limitToCompletedOrIncomplete]
-[EKReminderPredicate completed]
-[EKReminderPredicate dueAfter]
-[EKReminderPredicate dueBefore]
-[EKReminderPredicate useDueDateAsCompletionDate]
-[EKReminderPredicate setUseDueDateAsCompletionDate:]
-[EKReminderPredicate searchTerm]
-[EKReminderPredicate setSearchTerm:]
-[EKReminderPredicate setMaxResults:]
-[EKReminderPredicate useCompletionDateAsAlternate]
-[EKReminderPredicate .cxx_destruct]
-[EKStructuredLocation initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
+[EKStructuredLocation locationWithTitle:]
+[EKStructuredLocation locationWithCalLocation:]
-[EKStructuredLocation calLocation]
+[EKStructuredLocation uniqueIdentifierForObject:]
-[EKStructuredLocation isStructured]
-[EKStructuredLocation address]
-[EKStructuredLocation setAddress:]
+[EKStructuredLocation canonicalizedEqualityTestValue1:value2:key:object1:object2:]
-[EKStructuredLocation routeType]
-[EKStructuredLocation setRouteType:]
-[EKStructuredLocation routing]
-[EKStructuredLocation setRouting:]
-[EKStructuredLocation addressBookEntityID]
-[EKStructuredLocation setAddressBookEntityID:]
-[EKStructuredLocation radius]
-[EKStructuredLocation setRadius:]
-[EKStructuredLocation setGeoLocation:]
-[EKStructuredLocation description]
+[EKStructuredLocation addressBookEntityIDForABPerson:unlocalizedLabel:]
-[EKStructuredLocation uuid]
-[EKStructuredLocation .cxx_destruct]
-[EKDiff initWithFirstObject:secondObject:]
-[EKDiff _nonNilObject]
+[EKDiff diffBetweenObject:andObject:]
+[EKDiff _populateSingleValueKeysForDiff:]
___42+[EKDiff _populateSingleValueKeysForDiff:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[EKDiff _populateSingleValueRelationshipKeysForDiff:]
___54+[EKDiff _populateSingleValueRelationshipKeysForDiff:]_block_invoke
___copy_helper_block_80
___destroy_helper_block_81
+[EKDiff _populateMultiValueRelationshipKeysForDiff:]
___53+[EKDiff _populateMultiValueRelationshipKeysForDiff:]_block_invoke
___copy_helper_block_118
___destroy_helper_block_119
+[EKDiff _populateIdentityKeysForDiff:]
___39+[EKDiff _populateIdentityKeysForDiff:]_block_invoke
___copy_helper_block_169
___destroy_helper_block_170
+[EKDiff _populateImmutableKeysForDiff:]
___40+[EKDiff _populateImmutableKeysForDiff:]_block_invoke
___copy_helper_block_180
___destroy_helper_block_181
-[EKDiff _multiValueModifiedObjectsForKey:]
-[EKDiff differentKeys]
-[EKDiff summaryDictionary]
+[EKDiff _addObject:forKey:toDiff:]
-[EKDiff summaryString]
-[EKDiff _summarizeDiffsBetweenFirstObject:secondObject:mutableString:depth:]
+[EKDiff _addSummaryWithDepth:toMutableString:forSingleValueKeys:firstObject:secondObject:]
+[EKDiff _addSummaryWithDepth:toMutableString:forRelationshipSingleValueKeys:firstObject:secondObject:]
+[EKDiff _addSummaryWithDepth:toMutableString:forRelationshipMultiValueKeys:firstObject:secondObject:]
+[EKDiff _addPaddedHeaderToMutableString:forKey:withDepth:]
+[EKDiff _addChangeStarIfChangedKey:onObject:]
+[EKDiff _indentStringAtDepth:]
-[EKDiff changeSetForDiff]
-[EKDiff firstObject]
-[EKDiff setFirstObject:]
-[EKDiff secondObject]
-[EKDiff setSecondObject:]
-[EKDiff result]
-[EKDiff setResult:]
-[EKDiff differentIdentityKeys]
-[EKDiff setDifferentIdentityKeys:]
-[EKDiff differentImmutableKeys]
-[EKDiff setDifferentImmutableKeys:]
-[EKDiff differentSingleValueKeys]
-[EKDiff setDifferentSingleValueKeys:]
-[EKDiff differentRelationshipSingleValueKeys]
-[EKDiff setDifferentRelationshipSingleValueKeys:]
-[EKDiff differentRelationshipMultiValueKeys]
-[EKDiff setDifferentRelationshipMultiValueKeys:]
-[EKDiff relationshipMultiValueAdds]
-[EKDiff setRelationshipMultiValueAdds:]
-[EKDiff relationshipMultiValueRemoves]
-[EKDiff setRelationshipMultiValueRemoves:]
-[EKDiff relationshipMultiValueModifies]
-[EKDiff setRelationshipMultiValueModifies:]
-[EKDiff relationshipSingleValueModifies]
-[EKDiff setRelationshipSingleValueModifies:]
-[EKDiff .cxx_destruct]
-[EKObject(EKObjectSummaryHelpers) _basicSummaryWithDepth:]
-[EKObject(EKObjectSummaryHelpers) _summaryWithDepth:]
-[EKObject(EKObjectSummaryHelpers) _addSummaryWithDepth:toMutableString:indentFirstLine:]
-[EKFrozenStructuredLocation initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenStructuredLocation address]
-[EKFrozenStructuredLocation routeType]
-[EKFrozenStructuredLocation uuid]
-[EKFrozenStructuredLocation .cxx_destruct]
-[EKCalendarChangeHelper initWithBackingStore:]
-[EKCalendarChangeHelper isAlreadyChangingCalendar]
-[EKCalendarChangeHelper doCalendarChangeForItem:isNewItem:error:]
-[EKCalendarChangeHelper doCopyEvent:toCalendar:withOptions:error:]
-[EKCalendarChangeHelper _handleCalendarChangeForEvent:fromCalendar:toCalendar:isNewItem:requirements:error:]
-[EKCalendarChangeHelper _handleCalendarChangeForEvent:fromCalendar:toCalendar:isNewItem:requirements:copyOptions:forceCopy:handlingDetached:outEvent:error:]
-[EKCalendarChangeHelper _moveEventHelperHandleDetachedEvents:fromCalendar:toCalendar:error:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterations:fromCalendar:toCalendar:requirements:]
-[EKCalendarChangeHelper _moveEventHelperMoveFieldsToNotes:fromCalendar:toCalendar:requirements:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToPrivacy:toCalendar:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToScheduleAgent:fromCalendar:toCalendar:requirements:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToAttachments:fromCalendar:toCalendar:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToAlarms:toCalendar:notes:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToTimeZone:toCalendar:notes:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToURL:toCalendar:notes:]
-[EKCalendarChangeHelper _moveEventHelperDoAlterationsToRecurrence:toCalendar:notes:]
-[EKCalendarChangeHelper _moveEventHelperDoDuplication:toCalendar:requirements:additionalOptions:error:]
-[EKCalendarChangeHelper _moveEventHelperDoRecreation:toCalendar:requirements:error:]
-[EKCalendarChangeHelper _moveEventHelperDoReinviteAttendees:toCalendar:requirements:]
-[EKCalendarChangeHelper _moveEventHelperDoRemoveAttendees:requirements:]
-[EKCalendarChangeHelper backingStore]
-[EKCalendarChangeHelper .cxx_destruct]
+[EKRecurrenceGenerator datesByExpandingRule:fromDate:toDate:inTimezone:isAllDay:lunarCalendarString:]
+[EKRecurrenceGenerator datesByExpandingRule:fromDate:toDate:recurrenceStartDate:inTimezone:isAllDay:duration:lunarCalendarString:]
+[EKRecurrenceGenerator nextNDatesInUTC:forRecurrenceRuleString:recurrenceStart:isAllDay:]
+[EKRecurrenceGenerator nextNDates:forRecurrenceRuleString:recurrenceStart:timeZone:inCalendar:isAllDay:]
+[EKRecurrenceGenerator nextOccurrenceDateForRecurrenceRuleString:afterDate:recurrenceStartDate:timezone:occurrenceCount:]
+[EKRecurrenceGenerator nextOccurrenceDateForRecurrenceRuleString:afterDate:recurrenceStartDate:timezone:inCalendar:occurrenceCount:]
-[EKRecurrenceChangeManager initWithBackingStore:]
-[EKRecurrenceChangeManager doThisAndFutureDeleteOnEvent:withMaster:]
-[EKRecurrenceChangeManager doThisAndFutureChangeOnEvent:withMaster:]
-[EKRecurrenceChangeManager copyDetachedEventsAndExceptionsFromEvent:toEvent:]
-[EKRecurrenceChangeManager copyDetachedEventsAndExceptionsFromEvent:toEvent:sliceDate:duration:]
-[EKRecurrenceChangeManager moveDetachedEventsAndExceptionsFromEvent:toEvent:]
-[EKRecurrenceChangeManager moveDetachedEventsAndExceptionsFromEvent:toEvent:sliceDate:duration:]
-[EKRecurrenceChangeManager doChangeAllOnEvent:]
-[EKRecurrenceChangeManager undoAllChangeOnEvent:originalMaster:originalExceptions:originalDetachedEvents:]
-[EKRecurrenceChangeManager undoThisAndFutureChangeOnEvent:fromDate:originalMaster:originalExceptions:originalDetachedEvents:]
-[EKRecurrenceChangeManager _undoThisAndFutureChangeOnEvent:fromDate:originalMaster:originalExceptions:originalDetachedEvents:]
-[EKRecurrenceChangeManager undoAllDeleteOnEvent:originalMaster:originalExceptions:originalDetachedEvents:]
-[EKRecurrenceChangeManager undoThisAndFutureDeleteOnEvent:originalMaster:originalExceptions:originalDetachedEvents:]
-[EKRecurrenceChangeManager _undoThisAndFutureDeleteOnEvent:fromDate:originalMaster:originalExceptions:originalDetachedEvents:]
-[EKRecurrenceChangeManager undoDetachOfEvent:]
-[EKRecurrenceChangeManager undoExceptionOfEvent:]
-[EKRecurrenceChangeManager _modifyRecurrenceRulesOnOriginal:slicedMaster:sliceDate:isDelete:]
-[EKRecurrenceChangeManager _moveExceptionsFromOriginal:toEvent:sliceDate:copy:]
-[EKRecurrenceChangeManager _removeInvalidExceptionsFromEvent:]
-[EKRecurrenceChangeManager _removeExceptionsAndDetachedFromEvent:onOrAfter:]
-[EKRecurrenceChangeManager _moveExceptionHelperFromEvent:toEvent:sliceDate:copy:]
-[EKRecurrenceChangeManager _removeAllExceptionsFrom:]
-[EKRecurrenceChangeManager addExceptions:toEvent:afterDate:]
-[EKRecurrenceChangeManager _moveDetachedEventsFromOriginal:toEvent:sliceDate:duration:copy:]
-[EKRecurrenceChangeManager _updateDetachedEventsForEvent:fromRecurrenceDate:duration:]
-[EKRecurrenceChangeManager _removeInvalidDetachedEventsFromEvent:]
-[EKRecurrenceChangeManager _moveDetachedEventsHelperFromEvent:toEvent:sliceDate:eventDuration:copy:]
-[EKRecurrenceChangeManager _updateDatesFromDetachedEvent:toEvent:calendar:offset:eventDuration:]
-[EKRecurrenceChangeManager _removeAllDetachedEventsFrom:]
-[EKRecurrenceChangeManager addDetachedEvents:toEvent:afterDate:]
-[EKRecurrenceChangeManager backingStore]
-[EKRecurrenceChangeManager .cxx_destruct]
+[NSError(EventKit) _defaultDescriptionForCode:]
+[NSError(EventKit) errorWithEKErrorCode:]
+[NSError(EventKit) errorWithEKErrorCode:underlyingError:]
+[NSError(EventKit) errorWithEKErrorCode:description:]
+[NSError(EventKit) errorWithEKErrorCode:description:underlyingError:]
-[EKBackingObjectsTracker init]
-[EKBackingObjectsTracker initWithSourceFilters:includeEnabledDelegates:backingStore:]
-[EKBackingObjectsTracker copyForBackingStore:]
-[EKBackingObjectsTracker hasSourceFilters]
-[EKBackingObjectsTracker reset]
-[EKBackingObjectsTracker refreshBackingCalendars]
-[EKBackingObjectsTracker useBackingCalendars:]
-[EKBackingObjectsTracker addBackingCalendars:]
-[EKBackingObjectsTracker _preFrozenCalendarDictionaryForIdentifier:]
-[EKBackingObjectsTracker fetchBackingCalendarsWithSourceIdentifiers:]
+[EKBackingObjectsTracker _addPrefetchRelationshipsForCalendarFetch:]
+[EKBackingObjectsTracker _addPrefetchRelationshipsForCalDAVCalendarFetch:]
-[EKBackingObjectsTracker fetchBackingCalendarsWithSourceIdentifiers:usePreFrozenSources:]
-[EKBackingObjectsTracker calendarWithIdentifier:]
-[EKBackingObjectsTracker trackCalendarWithIdentifier:calendar:]
-[EKBackingObjectsTracker removeCalendarWithIdentifier:]
-[EKBackingObjectsTracker calendarIdentifiers]
-[EKBackingObjectsTracker calendars]
-[EKBackingObjectsTracker calendarDictionary]
-[EKBackingObjectsTracker itemWithIdentifier:]
-[EKBackingObjectsTracker trackItemWithIdentifier:occurrence:]
-[EKBackingObjectsTracker deleteItemWithIdentifier:thisAndFuture:]
-[EKBackingObjectsTracker removeItemWithIdentifier:]
-[EKBackingObjectsTracker _removeTrackedItemWithIdentifier:removeExdates:thisAndFuture:]
-[EKBackingObjectsTracker removeItemsWithManagedObjectIDs:]
-[EKBackingObjectsTracker itemIdentifiersInCalendars:]
-[EKBackingObjectsTracker itemIdentifiers]
-[EKBackingObjectsTracker items]
-[EKBackingObjectsTracker detachedItemsForIdentifier:]
-[EKBackingObjectsTracker exceptionDatesForIdentifier:]
-[EKBackingObjectsTracker itemDictionary]
-[EKBackingObjectsTracker exceptionDictionary]
-[EKBackingObjectsTracker updateItems:]
___39-[EKBackingObjectsTracker updateItems:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[EKBackingObjectsTracker updateCalendarToItemsMappingWithItems:]
-[EKBackingObjectsTracker untrackAllItems]
-[EKBackingObjectsTracker addBackingSources:]
-[EKBackingObjectsTracker _preFrozenSourceDictionaryForIdentifier:]
-[EKBackingObjectsTracker calendarSourceIdentifiers]
-[EKBackingObjectsTracker calendarSources]
-[EKBackingObjectsTracker calendarSourcesDictionary]
-[EKBackingObjectsTracker calendarSourceWithIdentifier:]
-[EKBackingObjectsTracker containsSource:]
-[EKBackingObjectsTracker fetchBackingSources]
-[EKBackingObjectsTracker refreshBackingSources]
-[EKBackingObjectsTracker removeCalendarSourceWithIdentifier:]
-[EKBackingObjectsTracker useBackingSources:]
-[EKBackingObjectsTracker trackCalendarSource:withIdentifier:]
-[EKBackingObjectsTracker _fetchBackingSourcesForCoreDataClass:predicate:context:]
-[EKBackingObjectsTracker _isSourceAllowedByFilters:]
-[EKBackingObjectsTracker includeEnabledDelegates]
-[EKBackingObjectsTracker setIncludeEnabledDelegates:]
-[EKBackingObjectsTracker sourceFilters]
-[EKBackingObjectsTracker setSourceFilters:]
-[EKBackingObjectsTracker backingCalendarItems]
-[EKBackingObjectsTracker setBackingCalendarItems:]
-[EKBackingObjectsTracker backingCalendars]
-[EKBackingObjectsTracker setBackingCalendars:]
-[EKBackingObjectsTracker backingDetached]
-[EKBackingObjectsTracker setBackingDetached:]
-[EKBackingObjectsTracker backingExdates]
-[EKBackingObjectsTracker setBackingExdates:]
-[EKBackingObjectsTracker backingSources]
-[EKBackingObjectsTracker setBackingSources:]
-[EKBackingObjectsTracker calendarsToItemIdentifiers]
-[EKBackingObjectsTracker setCalendarsToItemIdentifiers:]
-[EKBackingObjectsTracker preFrozenSourceDictionaries]
-[EKBackingObjectsTracker setPreFrozenSourceDictionaries:]
-[EKBackingObjectsTracker preFrozenCalendarDictionaries]
-[EKBackingObjectsTracker setPreFrozenCalendarDictionaries:]
-[EKBackingObjectsTracker .cxx_destruct]
-[EKFrozenSharedCalendarInvitation initWithSource:message:]
-[EKFrozenSharedCalendarInvitation _managedMessageInNewContext]
-[EKFrozenSharedCalendarInvitation acceptInvitation]
-[EKFrozenSharedCalendarInvitation deleteInvitation]
-[EKFrozenSharedCalendarInvitation declineInvitation]
-[EKFrozenSharedCalendarInvitation source]
-[EKFrozenSharedCalendarInvitation identifier]
-[EKFrozenSharedCalendarInvitation title]
-[EKFrozenSharedCalendarInvitation allowsContentModifications]
-[EKFrozenSharedCalendarInvitation senderEmail]
-[EKFrozenSharedCalendarInvitation senderName]
-[EKFrozenSharedCalendarInvitation dateStamp]
-[EKFrozenSharedCalendarInvitation inProgress]
-[EKFrozenSharedCalendarInvitation associatedCalendar]
-[EKFrozenSharedCalendarInvitation .cxx_destruct]
-[EKSharee initWithObject:createPartialBackingObject:keepBackingObject:preFrozenRelationshipObjects:]
+[EKSharee uniqueIdentifierForObject:]
___29+[EKSharee knownIdentityKeys]_block_invoke
___32+[EKSharee knownSingleValueKeys]_block_invoke
-[EKSharee isCurrentUserForSharing]
-[EKSharee isCurrentUserForScheduling]
-[EKSharee ABPersonInAddressBook:]
-[EKSharee setManagedObjectID:]
-[EKSharee .cxx_destruct]
-[EKArchiver eventStore]
-[EKArchiver setEventStore:]
-[EKArchiver .cxx_destruct]
-[EKUnarchiver eventStore]
-[EKUnarchiver setEventStore:]
-[EKUnarchiver .cxx_destruct]
-[EKInMemoryBackingStore notificationBoxMessageCountForCalendar:allowCachedValue:]
-[EKInMemoryBackingStore sourceWithIdentifier:]
-[EKFrozenSharee initWithObject:createPartialObject:preFrozenRelationshipObjects:]
-[EKFrozenSharee isCurrentUserForScheduling]
-[EKFrozenSharee isCurrentUserForSharing]
-[EKFrozenSharee .cxx_destruct]
+[EKPredicateCalendarItem predicateWithCalendars:]
-[EKPredicateCalendarItem initWithCalendars:]
-[EKPredicateCalendarItem _includeCalendarTitleInSearchTerm]
-[EKPredicateCalendarItem isEventQuery]
-[EKPredicateCalendarItem entityClass]
-[EKPredicateCalendarItem mdQueryString]
-[EKPredicateCalendarItem evaluateWithObject:]
+[EKPredicateCalendarItem string:containsSubstring:]
-[EKPredicateCalendarItem title]
-[EKPredicateCalendarItem setTitle:]
-[EKPredicateCalendarItem calendarTitle]
-[EKPredicateCalendarItem setCalendarTitle:]
-[EKPredicateCalendarItem maxResults]
-[EKPredicateCalendarItem setMaxResults:]
-[EKPredicateCalendarItem searchTerm]
-[EKPredicateCalendarItem setSearchTerm:]
-[EKPredicateCalendarItem sortOrder]
-[EKPredicateCalendarItem setSortOrder:]
-[EKPredicateCalendarItem disableBackingStoreUpdate]
-[EKPredicateCalendarItem setDisableBackingStoreUpdate:]
-[EKPredicateCalendarItem .cxx_destruct]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_
___destroy_helper_block_
___EKDateComponentsGetDate_block_invoke
___copy_helper_block_5
___destroy_helper_block_6
-[NSDate(CalendarAdditions) dateForStartOfDayInTimeZone:]
-[NSDate(CalendarAdditions) dateForEndOfDayInTimeZone:]
___55-[NSDate(CalendarAdditions) dateForEndOfDayInTimeZone:]_block_invoke
___copy_helper_block_22
___destroy_helper_block_23
-[NSDate(CalendarAdditions) dateAtHour:minute:second:inTimeZone:]
___65-[NSDate(CalendarAdditions) dateAtHour:minute:second:inTimeZone:]_block_invoke
___copy_helper_block_31
___destroy_helper_block_32
-[NSDate(CalendarAdditions) dateWithoutTimeComponentsInTimeZone:]
___65-[NSDate(CalendarAdditions) dateWithoutTimeComponentsInTimeZone:]_block_invoke
___copy_helper_block_36
___destroy_helper_block_37
-[NSDate(CalendarAdditions) _performBlockBehindDispatchSync:inTimeZone:]
___72-[NSDate(CalendarAdditions) _performBlockBehindDispatchSync:inTimeZone:]_block_invoke
___copy_helper_block_42
___destroy_helper_block_43
__EKSharedGregorianCalendarLock
GCC_except_table48
GCC_except_table4
GCC_except_table14
GCC_except_table48
GCC_except_table74
GCC_except_table106
GCC_except_table119
GCC_except_table140
GCC_except_table160
GCC_except_table164
GCC_except_table172
GCC_except_table176
GCC_except_table181
GCC_except_table267
GCC_except_table375
GCC_except_table4
GCC_except_table25
GCC_except_table40
GCC_except_table53
GCC_except_table63
GCC_except_table74
GCC_except_table84
GCC_except_table103
GCC_except_table128
GCC_except_table156
GCC_except_table185
GCC_except_table193
GCC_except_table197
GCC_except_table209
GCC_except_table213
GCC_except_table218
GCC_except_table222
GCC_except_table226
GCC_except_table390
GCC_except_table439
GCC_except_table454
GCC_except_table458
GCC_except_table465
GCC_except_table479
GCC_except_table484
GCC_except_table1
GCC_except_table11
GCC_except_table61
GCC_except_table17
GCC_except_table32
GCC_except_table42
GCC_except_table52
GCC_except_table62
GCC_except_table72
GCC_except_table82
GCC_except_table92
GCC_except_table102
GCC_except_table112
GCC_except_table20
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp287
___block_literal_global
___block_descriptor_tmp296
___block_literal_global297
___block_descriptor_tmp304
___block_literal_global305
___block_descriptor_tmp316
___block_literal_global317
___block_descriptor_tmp322
___block_literal_global323
___block_descriptor_tmp326
___block_literal_global327
___block_descriptor_tmp342
___block_literal_global343
___block_descriptor_tmp407
___block_literal_global408
___block_descriptor_tmp478
___block_descriptor_tmp666
___block_literal_global667
___block_descriptor_tmp
___block_descriptor_tmp54
___block_descriptor_tmp
___block_descriptor_tmp51
___block_descriptor_tmp272
___block_literal_global
___block_descriptor_tmp309
___block_descriptor_tmp319
___block_descriptor_tmp322
___block_descriptor_tmp326
___block_descriptor_tmp338
___block_descriptor_tmp344
___block_descriptor_tmp
___block_descriptor_tmp144
___block_descriptor_tmp199
___block_descriptor_tmp347
___block_descriptor_tmp354
___block_descriptor_tmp360
___block_descriptor_tmp363
___block_descriptor_tmp368
___block_descriptor_tmp372
___block_descriptor_tmp375
___block_descriptor_tmp380
___block_descriptor_tmp384
___block_descriptor_tmp506
___block_descriptor_tmp512
___block_descriptor_tmp519
___block_descriptor_tmp523
___block_descriptor_tmp546
___block_descriptor_tmp581
___block_descriptor_tmp
___block_descriptor_tmp3
___block_descriptor_tmp6
_RecursiveKey
___block_descriptor_tmp9
___block_descriptor_tmp12
___block_descriptor_tmp79
___block_literal_global
___block_descriptor_tmp84
___block_literal_global85
___block_descriptor_tmp133
___block_descriptor_tmp174
___block_literal_global175
___block_descriptor_tmp176
___block_literal_global177
___block_descriptor_tmp201
___block_descriptor_tmp208
___block_descriptor_tmp226
___block_descriptor_tmp236
___block_descriptor_tmp251
___block_descriptor_tmp264
___block_descriptor_tmp275
___block_descriptor_tmp361
___block_descriptor_tmp367
___block_descriptor_tmp387
___block_descriptor_tmp398
___block_descriptor_tmp400
___block_literal_global401
___block_descriptor_tmp406
___block_literal_global407
___block_descriptor_tmp408
___block_literal_global409
___block_descriptor_tmp450
___block_descriptor_tmp478
___block_descriptor_tmp507
___block_descriptor_tmp518
___block_descriptor_tmp531
___block_descriptor_tmp536
___block_descriptor_tmp550
___block_descriptor_tmp560
___block_descriptor_tmp571
___block_descriptor_tmp576
___block_descriptor_tmp595
___block_descriptor_tmp600
___block_descriptor_tmp605
___block_descriptor_tmp610
___block_descriptor_tmp615
___block_descriptor_tmp622
___block_descriptor_tmp631
___block_descriptor_tmp644
___block_descriptor_tmp710
___block_descriptor_tmp715
___block_descriptor_tmp720
___block_descriptor_tmp725
___block_descriptor_tmp730
___block_descriptor_tmp735
___block_descriptor_tmp754
___block_descriptor_tmp776
___block_descriptor_tmp787
___block_descriptor_tmp819
___block_descriptor_tmp825
___block_descriptor_tmp829
___block_descriptor_tmp832
___block_descriptor_tmp840
___block_descriptor_tmp880
___block_literal_global881
___block_descriptor_tmp885
___block_descriptor_tmp889
___block_descriptor_tmp892
___block_descriptor_tmp895
___block_descriptor_tmp924
___block_literal_global925
___block_descriptor_tmp931
___block_descriptor_tmp935
___block_descriptor_tmp938
___block_descriptor_tmp941
___block_descriptor_tmp952
___block_descriptor_tmp1002
___block_descriptor_tmp1019
___block_descriptor_tmp
___block_descriptor_tmp27
___block_descriptor_tmp30
___block_descriptor_tmp34
___block_descriptor_tmp103
___block_descriptor_tmp108
___block_descriptor_tmp114
___block_descriptor_tmp120
___block_descriptor_tmp130
___block_descriptor_tmp137
___block_descriptor_tmp143
___block_descriptor_tmp147
___block_descriptor_tmp153
___block_descriptor_tmp162
___block_descriptor_tmp166
___block_descriptor_tmp170
___block_descriptor_tmp181
___block_descriptor_tmp185
___block_descriptor_tmp191
___block_descriptor_tmp202
___block_descriptor_tmp206
___block_descriptor_tmp210
___block_descriptor_tmp222
___block_descriptor_tmp233
___block_descriptor_tmp250
___block_descriptor_tmp256
___block_descriptor_tmp262
___block_descriptor_tmp269
___block_descriptor_tmp276
___block_descriptor_tmp282
___block_descriptor_tmp286
___block_descriptor_tmp293
___block_descriptor_tmp304
___block_descriptor_tmp308
___block_descriptor_tmp312
___block_descriptor_tmp319
___block_descriptor_tmp324
___block_descriptor_tmp329
___block_descriptor_tmp333
___block_descriptor_tmp343
___block_descriptor_tmp353
___block_descriptor_tmp357
___block_descriptor_tmp361
___block_descriptor_tmp365
___block_descriptor_tmp419
___block_descriptor_tmp425
___block_descriptor_tmp450
___block_descriptor_tmp457
___block_descriptor_tmp466
___block_descriptor_tmp481
___block_descriptor_tmp492
___block_descriptor_tmp503
___block_descriptor_tmp510
___block_descriptor_tmp539
___block_descriptor_tmp556
___block_descriptor_tmp577
___block_descriptor_tmp590
___block_descriptor_tmp604
___block_descriptor_tmp615
___block_descriptor_tmp644
___block_descriptor_tmp653
___block_descriptor_tmp674
___block_descriptor_tmp679
___block_descriptor_tmp684
___block_descriptor_tmp740
___block_descriptor_tmp748
___block_descriptor_tmp760
___block_descriptor_tmp783
___block_descriptor_tmp848
___block_descriptor_tmp852
___block_descriptor_tmp858
___block_descriptor_tmp880
___block_descriptor_tmp894
___block_descriptor_tmp900
___block_descriptor_tmp902
___block_literal_global
___block_descriptor_tmp927
___block_descriptor_tmp933
___block_descriptor_tmp954
___block_descriptor_tmp1007
___block_literal_global1008
___block_descriptor_tmp1018
___block_descriptor_tmp1021
___block_literal_global1022
___block_descriptor_tmp1100
___block_descriptor_tmp1122
___block_descriptor_tmp1130
___block_descriptor_tmp1136
___block_descriptor_tmp1152
___block_descriptor_tmp1192
___block_descriptor_tmp1203
___block_descriptor_tmp1205
___block_literal_global1206
___block_descriptor_tmp1345
___block_descriptor_tmp1349
___block_literal_global1350
___block_descriptor_tmp1351
___block_literal_global1352
___block_descriptor_tmp1365
___block_literal_global1366
___block_descriptor_tmp1396
___block_descriptor_tmp1409
___block_literal_global1410
___block_descriptor_tmp1417
___block_descriptor_tmp1419
___block_literal_global1420
___block_descriptor_tmp1453
___block_descriptor_tmp1474
___block_descriptor_tmp1482
___block_descriptor_tmp1489
___block_descriptor_tmp1541
___block_descriptor_tmp1580
___block_literal_global1581
___block_descriptor_tmp1584
___block_descriptor_tmp1585
___block_literal_global1586
___block_descriptor_tmp1589
___block_descriptor_tmp1620
___block_descriptor_tmp1631
___block_descriptor_tmp1650
___block_descriptor_tmp1693
___block_descriptor_tmp1867
___block_descriptor_tmp1942
___block_descriptor_tmp1959
___block_descriptor_tmp2019
___block_descriptor_tmp2026
___block_descriptor_tmp2054
___block_descriptor_tmp2057
___block_descriptor_tmp2066
___block_descriptor_tmp2084
___block_descriptor_tmp2106
___block_descriptor_tmp2114
___block_descriptor_tmp2234
___block_literal_global2235
___block_descriptor_tmp
___block_descriptor_tmp105
___block_literal_global
___block_descriptor_tmp120
___block_literal_global121
___block_descriptor_tmp124
___block_literal_global125
___block_descriptor_tmp130
___block_literal_global131
___block_descriptor_tmp134
___block_literal_global135
___block_descriptor_tmp190
___block_literal_global191
___block_descriptor_tmp400
___block_descriptor_tmp411
___block_descriptor_tmp479
___block_descriptor_tmp
___block_descriptor_tmp317
___block_descriptor_tmp323
___block_descriptor_tmp330
___block_literal_global
___block_descriptor_tmp370
___block_descriptor_tmp
___block_descriptor_tmp222
___block_descriptor_tmp253
___block_descriptor_tmp277
___block_descriptor_tmp287
___block_descriptor_tmp296
___block_descriptor_tmp302
___block_descriptor_tmp308
___block_descriptor_tmp314
___block_descriptor_tmp465
___block_descriptor_tmp482
___block_literal_global
___block_descriptor_tmp485
___block_literal_global486
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp171
___block_descriptor_tmp178
___block_descriptor_tmp191
___block_descriptor_tmp201
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp75
___block_literal_global
___block_descriptor_tmp76
___block_literal_global77
___block_descriptor_tmp95
___block_literal_global96
___block_descriptor_tmp133
___block_literal_global134
___block_descriptor_tmp173
___block_literal_global174
___block_descriptor_tmp205
___block_literal_global206
___block_descriptor_tmp
___block_descriptor_tmp322
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp78
___block_descriptor_tmp81
___block_descriptor_tmp104
___block_descriptor_tmp107
___block_descriptor_tmp123
___block_descriptor_tmp143
___block_literal_global
___block_descriptor_tmp177
___block_descriptor_tmp213
___block_descriptor_tmp241
___block_descriptor_tmp
___block_descriptor_tmp141
___block_descriptor_tmp151
___block_descriptor_tmp171
___block_descriptor_tmp174
___block_literal_global
___block_descriptor_tmp270
___block_literal_global271
___block_descriptor_tmp712
___block_literal_global713
___block_descriptor_tmp
___CalDayStrings
___block_descriptor_tmp
___block_descriptor_tmp43
___block_descriptor_tmp46
___block_descriptor_tmp50
___block_descriptor_tmp53
___block_descriptor_tmp59
___block_descriptor_tmp62
___block_descriptor_tmp66
___block_descriptor_tmp72
___block_descriptor_tmp76
___block_descriptor_tmp82
___block_descriptor_tmp90
___block_descriptor_tmp94
___block_descriptor_tmp101
___block_descriptor_tmp108
___block_descriptor_tmp114
___block_descriptor_tmp118
___block_descriptor_tmp129
___block_descriptor_tmp137
___block_descriptor_tmp141
___block_descriptor_tmp144
___block_descriptor_tmp150
___block_descriptor_tmp154
___block_descriptor_tmp157
___block_descriptor_tmp163
___block_descriptor_tmp167
___block_descriptor_tmp170
___block_descriptor_tmp176
___block_descriptor_tmp180
___block_descriptor_tmp183
___block_descriptor_tmp189
___block_descriptor_tmp193
___block_descriptor_tmp196
___block_descriptor_tmp202
___block_descriptor_tmp206
___block_descriptor_tmp
___block_descriptor_tmp82
___block_descriptor_tmp120
___block_descriptor_tmp171
___block_descriptor_tmp182
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp51
___block_literal_global52
___block_descriptor_tmp
___block_descriptor_tmp7
___block_descriptor_tmp24
___block_descriptor_tmp33
___block_descriptor_tmp39
___block_descriptor_tmp44
___block_descriptor_tmp63
___block_literal_global
_OBJC_IVAR_$_EKUndoManager._disableUndoForOrganizerScheduling
_OBJC_IVAR_$_EKUndoManager._commitDelegate
_OBJC_IVAR_$_EKUndoManager._decisionDelegate
_OBJC_IVAR_$_EKUndoManager._lastError
_OBJC_IVAR_$_EKCalendarItem.creationDate
_OBJC_IVAR_$_EKCalendarItem.localUID
_OBJC_IVAR_$_EKCalendarItem.recurrenceDateUnadjustedFromUTC
_OBJC_IVAR_$_EKCalendarItem.sharedUID
_OBJC_IVAR_$_EKCalendarItem.cachedHasAttendee
_OBJC_IVAR_$_EKCalendarItem.cachedHasAlarm
_OBJC_IVAR_$_EKCalendarItem.cachedIsCalendarOwnerInvitedAttendee
_OBJC_IVAR_$_EKCalendarItem.cachedIsCurrentUserInvitedAttendee
_OBJC_IVAR_$_EKCalendarItem.calendarItemPermissionNumber
_OBJC_IVAR_$_EKChangeSet._isNew
_OBJC_IVAR_$_EKChangeSet._isDeleted
_OBJC_IVAR_$_EKChangeSet._unbatchedSingleValueChanges
_OBJC_IVAR_$_EKChangeSet._unbatchedMultiValueAdditions
_OBJC_IVAR_$_EKChangeSet._unbatchedMultiValueRemovals
_OBJC_IVAR_$_EKChangeSet._batchedSingleValueChanges
_OBJC_IVAR_$_EKChangeSet._batchedMultiValueAdditions
_OBJC_IVAR_$_EKChangeSet._batchedMultiValueRemovals
_OBJC_IVAR_$_EKFrozenNotificationBoxMessage.messageTypeNumber
_OBJC_IVAR_$_EKFrozenNotificationBoxMessage.path
_OBJC_IVAR_$_EKEventChangeListener._delegate
_OBJC_IVAR_$_EKReminder.cachedHasLocationAlarm
_OBJC_IVAR_$_EKEventStore.backingStoreType
_OBJC_IVAR_$_EKEventStore.backingStore
_OBJC_IVAR_$_EKEventStore.eventStoreIdentifier
_OBJC_IVAR_$_EKEventStore.backgroundFetchQueue
_OBJC_IVAR_$_EKEventStore._allowScheduling
_OBJC_IVAR_$_EKEventStore._onlyNotifyForAccountedChanges
_OBJC_IVAR_$_EKBackingStore._createdObjectsTracker
_OBJC_IVAR_$_EKBackingStore._changeTracker
_OBJC_IVAR_$_EKBackingStore._recurrenceChangeManager
_OBJC_IVAR_$_EKBackingStore._calendarChangeHelper
_OBJC_IVAR_$_EKBackingStore._backingStoreIdentifier
_OBJC_IVAR_$_EKBackingStore._backingObjectsQueue
_OBJC_IVAR_$_EKBackingStore._backingObjectsTracker
_OBJC_IVAR_$_EKBackingStore._cachedNotificationBoxMessageCounts
_OBJC_IVAR_$_EKBackingStore._mainStore
_OBJC_IVAR_$_EKBackingStore._occurrenceCache
_OBJC_IVAR_$_EKBackingStore._accessToRemindersRequested
_OBJC_IVAR_$_EKBackingStore._accessToEventsRequested
_OBJC_IVAR_$_EKBackingStore._commitOnlyTheseObjects
_OBJC_IVAR_$_EKCalendarStoreBackingStore._externalChangeQueue
_OBJC_IVAR_$_EKCalendarStoreBackingStore._persistenceAvailable
_OBJC_IVAR_$_EKCalendarStoreBackingStore._accounting
_OBJC_IVAR_$_EKCalendarStoreBackingStore._isPrefetching
_OBJC_IVAR_$_EKCalendarStoreBackingStore._uninitializedSourceErrors
_OBJC_IVAR_$_EKCalendar.allowEvents
_OBJC_IVAR_$_EKCalendar.allowReminders
_OBJC_IVAR_$_EKCalendar.allowsContentModifications
_OBJC_IVAR_$_EKCalendar.isRenameable
_OBJC_IVAR_$_EKCalendar.isColorEditable
_OBJC_IVAR_$_EKCalendar.calendarIdentifier
_OBJC_IVAR_$_EKCalendar.sharedOwnerAddress
_OBJC_IVAR_$_EKCalendar.allowsScheduling
_OBJC_IVAR_$_EKCalendar.cachedHasSharees
_OBJC_IVAR_$_EKCalendar.defaultOrganizerAddressForNewItems
_OBJC_IVAR_$_EKCalendar.defaultOrganizerIsMeForNewItems
_OBJC_IVAR_$_EKCalendar.defaultOrganizerNameForNewItems
_OBJC_IVAR_$_EKCalendar.defaultOrganizerEmailForNewItems
_OBJC_IVAR_$_EKCalendar.isDefaultSchedulingCalendar
_OBJC_IVAR_$_EKCalendar.isDistinguishedExchangeCalendar
_OBJC_IVAR_$_EKCalendar.isFamilyCalendar
_OBJC_IVAR_$_EKCalendar.isMarkedUndeletable
_OBJC_IVAR_$_EKCalendar.isMarkedImmutableSharees
_OBJC_IVAR_$_EKCalendar.isFacebookBirthdayCalendar
_OBJC_IVAR_$_EKCalendar.isShareable
_OBJC_IVAR_$_EKCalendar.isSubscribed
_OBJC_IVAR_$_EKCalendar.isSubscribedHolidayCalendar
_OBJC_IVAR_$_EKCalendar.path
_OBJC_IVAR_$_EKCalendar.prePublishURL
_OBJC_IVAR_$_EKCalendar.sharedOwnerAddresses
_OBJC_IVAR_$_EKCalendar.sharedOwnerName
_OBJC_IVAR_$_EKCalendar.sharingStatusString
_OBJC_IVAR_$_EKCalendar.serverPath
_OBJC_IVAR_$_EKCalendar._subscribed
_OBJC_IVAR_$_EKChangeTracker._backingStore
_OBJC_IVAR_$_EKChangeTracker._changes
_OBJC_IVAR_$_EKChangeTracker._relationChanges
_OBJC_IVAR_$_EKChangeTracker._batchedChangedObjects
_OBJC_IVAR_$_EKChangeTracker._batchedDeletedObjects
_OBJC_IVAR_$_EKChangeTracker._batchedDeletedFutureObjects
_OBJC_IVAR_$_EKChangeTracker._batchedDeletedExceptionDates
_OBJC_IVAR_$_EKChangeTracker._batchedUndetachedEvents
_OBJC_IVAR_$_EKAttachment.uuid
_OBJC_IVAR_$_EKAttachment.isAutoArchivedNumber
_OBJC_IVAR_$_EKAttachment.contentType
_OBJC_IVAR_$_EKAttachment.filenameSuggestedByServer
_OBJC_IVAR_$_EKObject._cachedMeltedObjects
_OBJC_IVAR_$_EKObject._backingObject
_OBJC_IVAR_$_EKObject.managedObjectID
_OBJC_IVAR_$_EKObject._eventStore
_OBJC_IVAR_$_EKObject._eventStoreIdentifier
_OBJC_IVAR_$_EKObject._changeSet
_OBJC_IVAR_$_EKObject._batchChangeInfo
_OBJC_IVAR_$_EKObject._cachedHash
_OBJC_IVAR_$_EKFrozenCalendar.calendarIdentifier
_OBJC_IVAR_$_EKFrozenCalendar.title
_OBJC_IVAR_$_EKFrozenCalendar.colorString
_OBJC_IVAR_$_EKFrozenCalendar.symbolicColorName
_OBJC_IVAR_$_EKFrozenCalendar.isFamilyCalendar
_OBJC_IVAR_$_EKFrozenCalendar.isMarkedUndeletable
_OBJC_IVAR_$_EKFrozenCalendar.isMarkedImmutableSharees
_OBJC_IVAR_$_EKFrozenCalendar.isFacebookBirthdayCalendar
_OBJC_IVAR_$_EKFrozenCalendar.isSubscribedHolidayCalendar
_OBJC_IVAR_$_EKFrozenCalendar.sharingStatusString
_OBJC_IVAR_$_EKFrozenCalendar.sharedOwnerAddress
_OBJC_IVAR_$_EKFrozenCalendar.sharedOwnerName
_OBJC_IVAR_$_EKFrozenCalendar.prePublishURL
_OBJC_IVAR_$_EKFrozenCalendar.publishURL
_OBJC_IVAR_$_EKFrozenCalendar.defaultOrganizerNameForNewItems
_OBJC_IVAR_$_EKFrozenCalendar.defaultOrganizerAddressForNewItems
_OBJC_IVAR_$_EKFrozenCalendar.defaultOrganizerEmailForNewItems
_OBJC_IVAR_$_EKFrozenCalendar.defaultOrganizerIsMeForNewItems
_OBJC_IVAR_$_EKFrozenCalendar.displayOrder
_OBJC_IVAR_$_EKFrozenCalendar.notes
_OBJC_IVAR_$_EKFrozenCalendar.ignoreAlarms
_OBJC_IVAR_$_EKFrozenCalendar.path
_OBJC_IVAR_$_EKFrozenCalendar.containerSource
_OBJC_IVAR_$_EKFrozenCalendar.allowsContentModifications
_OBJC_IVAR_$_EKFrozenCalendar.allowReminders
_OBJC_IVAR_$_EKFrozenCalendar.allowEvents
_OBJC_IVAR_$_EKFrozenCalendar.allowsScheduling
_OBJC_IVAR_$_EKFrozenCalendar.isSubscribed
_OBJC_IVAR_$_EKFrozenCalendar.isRenameable
_OBJC_IVAR_$_EKFrozenCalendar.isColorEditable
_OBJC_IVAR_$_EKFrozenCalendar.isShareable
_OBJC_IVAR_$_EKFrozenCalendar.isDefaultSchedulingCalendar
_OBJC_IVAR_$_EKFrozenCalendar.isDistinguishedExchangeCalendar
_OBJC_IVAR_$_EKFrozenCalendar.sharedOwnerAddresses
_OBJC_IVAR_$_EKFrozenCalendar.serverPath
_OBJC_IVAR_$_EKFrozenCalendar.cachedHasSharees
_OBJC_IVAR_$_EKFrozenCalendar._suppressEventSchedulingNotifications
_OBJC_IVAR_$_EKFrozenCalendar.sharees
_OBJC_IVAR_$_EKFrozenCalendar.defaultAlarmsForAllDayEvents
_OBJC_IVAR_$_EKFrozenCalendar.defaultAlarmsForTimedEvents
_OBJC_IVAR_$_EKFrozenCalendar._cachedPreFrozenRelationshipObjects
_OBJC_IVAR_$_EKFrozenCalendarItem.localUID
_OBJC_IVAR_$_EKFrozenCalendarItem.sharedUID
_OBJC_IVAR_$_EKFrozenCalendarItem.title
_OBJC_IVAR_$_EKFrozenCalendarItem.location
_OBJC_IVAR_$_EKFrozenCalendarItem.notes
_OBJC_IVAR_$_EKFrozenCalendarItem.URL
_OBJC_IVAR_$_EKFrozenCalendarItem.priorityNumber
_OBJC_IVAR_$_EKFrozenCalendarItem.creationDate
_OBJC_IVAR_$_EKFrozenCalendarItem.lastModifiedDate
_OBJC_IVAR_$_EKFrozenCalendarItem.timeZoneObject
_OBJC_IVAR_$_EKFrozenCalendarItem.recurrenceDateUnadjustedFromUTC
_OBJC_IVAR_$_EKFrozenCalendarItem.scheduleAgentString
_OBJC_IVAR_$_EKFrozenCalendarItem.startDateUnadjustedFromUTC
_OBJC_IVAR_$_EKFrozenCalendarItem.organizerName
_OBJC_IVAR_$_EKFrozenCalendarItem.organizerURL
_OBJC_IVAR_$_EKFrozenCalendarItem.organizerEmail
_OBJC_IVAR_$_EKFrozenCalendarItem.allDay
_OBJC_IVAR_$_EKFrozenCalendarItem.organizedByMe
_OBJC_IVAR_$_EKFrozenCalendarItem.calendarItemPermissionNumber
_OBJC_IVAR_$_EKFrozenCalendarItem.defaultAlarmWasDeleted
_OBJC_IVAR_$_EKFrozenCalendarItem.cachedHasAttendee
_OBJC_IVAR_$_EKFrozenCalendarItem.cachedHasAttachment
_OBJC_IVAR_$_EKFrozenCalendarItem.cachedHasAlarm
_OBJC_IVAR_$_EKFrozenCalendarItem.cachedIsCalendarOwnerInvitedAttendee
_OBJC_IVAR_$_EKFrozenCalendarItem.cachedIsCurrentUserInvitedAttendee
_OBJC_IVAR_$_EKFrozenCalendarItem.container
_OBJC_IVAR_$_EKFrozenCalendarItem.participantForMe
_OBJC_IVAR_$_EKFrozenCalendarItem.alarmSet
_OBJC_IVAR_$_EKFrozenCalendarItem.attendeeSet
_OBJC_IVAR_$_EKFrozenCalendarItem.attachmentSet
_OBJC_IVAR_$_EKFrozenCalendarItem._cachedPreFrozenRelationshipObjects
_OBJC_IVAR_$_EKEventOccurrenceCache._binnedDates
_OBJC_IVAR_$_EKEventOccurrenceCache._binnedEvents
_OBJC_IVAR_$_EKEventOccurrenceCache._backingStore
_OBJC_IVAR_$_EKEventOccurrenceCache._cacheQueue
_OBJC_IVAR_$_EKCreatedObjectsTracker._createdCalendarItems
_OBJC_IVAR_$_EKCreatedObjectsTracker._createdCalendars
_OBJC_IVAR_$_EKCreatedObjectsTracker._createdCalendarSources
_OBJC_IVAR_$_EKFrozenReminder.dueDateUnadjustedFromUTC
_OBJC_IVAR_$_EKFrozenReminder.completionDate
_OBJC_IVAR_$_EKFrozenReminder.orderNumber
_OBJC_IVAR_$_EKFrozenReminder.statusCompleteNotByDate
_OBJC_IVAR_$_EKFrozenReminder.canEditRecurrence
_OBJC_IVAR_$_EKFrozenReminder.cachedHasLocationAlarm
_OBJC_IVAR_$_EKFrozenReminder._dueDate
_OBJC_IVAR_$_EKFrozenObject.isNew
_OBJC_IVAR_$_EKFrozenObject._isPartialObject
_OBJC_IVAR_$_EKFrozenObject._managedObjectID
_OBJC_IVAR_$_EKFrozenObject._cachedHash
_OBJC_IVAR_$_EKAlarm.sharedUID
_OBJC_IVAR_$_EKAlarm.isDefault
_OBJC_IVAR_$_EKAlarm.isSnoozed
_OBJC_IVAR_$_EKFrozenAlarm.sharedUID
_OBJC_IVAR_$_EKFrozenAlarm.absoluteDate
_OBJC_IVAR_$_EKFrozenAlarm.relativeOffset
_OBJC_IVAR_$_EKFrozenAlarm.acknowledgedDate
_OBJC_IVAR_$_EKFrozenAlarm.actionString
_OBJC_IVAR_$_EKFrozenAlarm.emailAddress
_OBJC_IVAR_$_EKFrozenAlarm.soundName
_OBJC_IVAR_$_EKFrozenAlarm.url
_OBJC_IVAR_$_EKFrozenAlarm.bookmark
_OBJC_IVAR_$_EKFrozenAlarm.proximityString
_OBJC_IVAR_$_EKFrozenAlarm.notRelativeToTravelTime
_OBJC_IVAR_$_EKFrozenAlarm.structuredLocation
_OBJC_IVAR_$_EKFrozenAlarm.isSnoozed
_OBJC_IVAR_$_EKFrozenAlarm.isDefault
_OBJC_IVAR_$_EKSource.sourceIdentifier
_OBJC_IVAR_$_EKSource.isEnabledForEvents
_OBJC_IVAR_$_EKSource.supportsEventCalendarCreation
_OBJC_IVAR_$_EKSource.isEnabledForReminders
_OBJC_IVAR_$_EKSource.supportsTaskCalendarCreation
_OBJC_IVAR_$_EKSource.typeString
_OBJC_IVAR_$_EKSource.isWritable
_OBJC_IVAR_$_EKSource.supportsUnbind
_OBJC_IVAR_$_EKSource.displayOrder
_OBJC_IVAR_$_EKSource.isDelegate
_OBJC_IVAR_$_EKSource.ownerAddresses
_OBJC_IVAR_$_EKSource.providerIdentifier
_OBJC_IVAR_$_EKSource.supportsAttendeeComments
_OBJC_IVAR_$_EKSource.supportsDropBoxAttachments
_OBJC_IVAR_$_EKSource.supportsEmailValidation
_OBJC_IVAR_$_EKSource.supportsFreebusy
_OBJC_IVAR_$_EKSource.supportsPrivateEvents
_OBJC_IVAR_$_EKSource.supportsManagedAttachments
_OBJC_IVAR_$_EKSource.supportsSharingScheduling
_OBJC_IVAR_$_EKSource.dropBoxPathString
_OBJC_IVAR_$_EKSource.serverURL
_OBJC_IVAR_$_EKUndoableOperation._snapshotters
_OBJC_IVAR_$_EKUndoableOperation._span
_OBJC_IVAR_$_EKUndoableOperation._type
_OBJC_IVAR_$_EKUndoableOperation._error
_OBJC_IVAR_$_EKEditingContext._decisionDelegate
_OBJC_IVAR_$_EKEditingContext._undoDelegate
_OBJC_IVAR_$_EKEditingContext._commitDelegate
_OBJC_IVAR_$_EKEditingContext._deferredCommit
_OBJC_IVAR_$_EKEditingContext._snapshotters
_OBJC_IVAR_$_EKEditingContext._conflictsToExcludeFromAll
_OBJC_IVAR_$_EKEditingContext._originalObjects
_OBJC_IVAR_$_EKEditingContext._objectsToCommit
_OBJC_IVAR_$_EKEditingContext._currentSpan
_OBJC_IVAR_$_EKEditingContext._requestedSpan
_OBJC_IVAR_$_EKEditingContext._commitDecision
_OBJC_IVAR_$_EKEditingContext._isRequestingDecision
_OBJC_IVAR_$_EKEditingContext._didPartialSave
_OBJC_IVAR_$_EKEditingContext._isDeletingObjects
_OBJC_IVAR_$_EKEditingContext._inactiveEditors
_OBJC_IVAR_$_EKEditingContext._activeEditors
_OBJC_IVAR_$_EKEditingContext._eventChangeListener
_OBJC_IVAR_$_EKEditingContext._trackedEKObjectIDs
_OBJC_IVAR_$_EKEditingContext._revertSnapshotter
_OBJC_IVAR_$_EKFrozenAttachment.contentType
_OBJC_IVAR_$_EKFrozenAttachment.attachmentIDOnServer
_OBJC_IVAR_$_EKFrozenAttachment.urlOnDisk
_OBJC_IVAR_$_EKFrozenAttachment.filenameSuggestedByServer
_OBJC_IVAR_$_EKFrozenAttachment.isAutoArchivedNumber
_OBJC_IVAR_$_EKFrozenAttachment.uuid
_OBJC_IVAR_$_EKFrozenAttachment.urlOnServer
_OBJC_IVAR_$_EKObjectTracker._backingStore
_OBJC_IVAR_$_EKFrozenCalendarSource.sourceIdentifier
_OBJC_IVAR_$_EKFrozenCalendarSource.providerIdentifier
_OBJC_IVAR_$_EKFrozenCalendarSource.title
_OBJC_IVAR_$_EKFrozenCalendarSource.typeString
_OBJC_IVAR_$_EKFrozenCalendarSource.isDelegate
_OBJC_IVAR_$_EKFrozenCalendarSource.isWritable
_OBJC_IVAR_$_EKFrozenCalendarSource.displayOrder
_OBJC_IVAR_$_EKFrozenCalendarSource.isEnabledForEvents
_OBJC_IVAR_$_EKFrozenCalendarSource.isEnabledForReminders
_OBJC_IVAR_$_EKFrozenCalendarSource.ownerAddresses
_OBJC_IVAR_$_EKFrozenCalendarSource.dropBoxPathString
_OBJC_IVAR_$_EKFrozenCalendarSource.serverURL
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsAttendeeComments
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsDropBoxAttachments
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsEventCalendarCreation
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsManagedAttachments
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsTaskCalendarCreation
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsEmailValidation
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsFreebusy
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsPrivateEvents
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsSharingScheduling
_OBJC_IVAR_$_EKFrozenCalendarSource.supportsUnbind
_OBJC_IVAR_$_EKCalendarPreferences._preferences
_OBJC_IVAR_$_EKCalendarPreferences._calPreferences
_OBJC_IVAR_$_EKNotificationBoxMessage.managedObjectID
_OBJC_IVAR_$_EKNotificationBoxMessage.path
_OBJC_IVAR_$_EKNotificationBoxMessage.messageTypeNumber
_OBJC_IVAR_$_EKPredicate._calendarIdentifiers
_OBJC_IVAR_$_EKPredicate._skipSorting
_OBJC_IVAR_$_EKPredicateSearch._entityClass
_OBJC_IVAR_$_EKPredicateSearch._predicate
_OBJC_IVAR_$_EKPredicateSearch._store
_OBJC_IVAR_$_EKPredicateSearch._queryQueue
_OBJC_IVAR_$_EKPredicateSearch._finished
_OBJC_IVAR_$_EKPredicateSearch._isEventQuery
_OBJC_IVAR_$_EKPredicateSearch._mdQuery
_OBJC_IVAR_$_EKPredicateSearch._previousQueryCount
_OBJC_IVAR_$_EKPredicateSearch._currentResults
_OBJC_IVAR_$_EKPredicateSearch._completionCallback
_OBJC_IVAR_$_EKPredicateSearch._cancelCallback
_OBJC_IVAR_$_EKEvent.birthdayTitle
_OBJC_IVAR_$_EKEvent.isPhantom
_OBJC_IVAR_$_EKEvent.isYearlessBirthday
_OBJC_IVAR_$_EKEvent.isYearlessLeapMonthBirthday
_OBJC_IVAR_$_EKEvent.lunarCalendarString
_OBJC_IVAR_$_EKEvent.nameForBirthday
_OBJC_IVAR_$_EKEvent.participantsStatus
_OBJC_IVAR_$_EKEvent.sliceParentID
_OBJC_IVAR_$_EKEvent._cachedStartOfDayForStartDate
_OBJC_IVAR_$_EKEvent._cachedStartOfDayForEndDate
_OBJC_IVAR_$_EKEvent._cachedIsMultiDayTimedEvent
_OBJC_IVAR_$_EKEvent._cachedDaysSpanned
_OBJC_IVAR_$_EKEvent._cachedTimeValuesCalendar
_OBJC_IVAR_$_EKConflictDetails._dates
_OBJC_IVAR_$_EKConflictDetails._totalOccurrences
_OBJC_IVAR_$_EKFrozenEvent.availabilityEnum
_OBJC_IVAR_$_EKFrozenEvent.isDetached
_OBJC_IVAR_$_EKFrozenEvent.responseComment
_OBJC_IVAR_$_EKFrozenEvent.isPhantom
_OBJC_IVAR_$_EKFrozenEvent.sliceParentID
_OBJC_IVAR_$_EKFrozenEvent.birthdayTitle
_OBJC_IVAR_$_EKFrozenEvent.nameForBirthday
_OBJC_IVAR_$_EKFrozenEvent.privacyLevelString
_OBJC_IVAR_$_EKFrozenEvent.isYearlessBirthday
_OBJC_IVAR_$_EKFrozenEvent.isYearlessLeapMonthBirthday
_OBJC_IVAR_$_EKFrozenEvent.lunarCalendarString
_OBJC_IVAR_$_EKFrozenEvent.dontSendNotificationForChanges
_OBJC_IVAR_$_EKFrozenEvent.endDateUnadjustedFromUTC
_OBJC_IVAR_$_EKFrozenEvent.statusString
_OBJC_IVAR_$_EKFrozenEvent.participantsStatus
_OBJC_IVAR_$_EKFrozenEvent.travelDuration
_OBJC_IVAR_$_EKFrozenEvent.ekStructuredLocation
_OBJC_IVAR_$_EKFrozenEvent.ekStructuredStartLocation
_OBJC_IVAR_$_EKFrozenEvent.notificationBoxMessageSet
_OBJC_IVAR_$_EKRecurrenceDayOfWeek._dayOfTheWeek
_OBJC_IVAR_$_EKRecurrenceDayOfWeek._weekNumber
_OBJC_IVAR_$_EKObjectSnapshotter._currentObject
_OBJC_IVAR_$_EKObjectSnapshotter._previousObject
_OBJC_IVAR_$_EKObjectSnapshotter._customInverseSnapshotter
_OBJC_IVAR_$_EKObjectSnapshotter._isSliceSnapshotter
_OBJC_IVAR_$_EKObjectSnapshotter._requiresSpanOtherThanThis
_OBJC_IVAR_$_EKEventSliceSnapshotter._sliceDate
_OBJC_IVAR_$_EKEventSliceSnapshotter._originalMaster
_OBJC_IVAR_$_EKEventSliceSnapshotter._originalDetachments
_OBJC_IVAR_$_EKEventSliceSnapshotter._originalExceptions
_OBJC_IVAR_$_EKEventMultiSliceSnapshotter._postSliceMaster
_OBJC_IVAR_$_EKEventMultiSliceSnapshotter._postSliceDetachments
_OBJC_IVAR_$_EKEventMultiSliceSnapshotter._postSliceExceptions
_OBJC_IVAR_$_EKBatchChangeInfo._changePending
_OBJC_IVAR_$_EKBatchChangeInfo._originalUID
_OBJC_IVAR_$_EKBatchChangeInfo._currentUID
_OBJC_IVAR_$_EKEventSliceInfo._sliceType
_OBJC_IVAR_$_EKEventSliceInfo._sliceDate
_OBJC_IVAR_$_EKEventSliceInfo._currentDate
_OBJC_IVAR_$_EKRecurrenceChangeInfo._changeType
_OBJC_IVAR_$_EKRecurrenceChangeInfo._offset
_OBJC_IVAR_$_EKRecurrenceEnd._endDate
_OBJC_IVAR_$_EKRecurrenceEnd._occurrenceCount
_OBJC_IVAR_$_EKEventInfoPredicate._location
_OBJC_IVAR_$_EKEventInfoPredicate._notes
_OBJC_IVAR_$_EKEventInfoPredicate._participantNames
_OBJC_IVAR_$_EKRecurrenceHelper._specifier
_OBJC_IVAR_$_EKRecurrenceHelper._daysOfTheWeek
_OBJC_IVAR_$_EKRecurrenceHelper._daysOfTheMonth
_OBJC_IVAR_$_EKRecurrenceHelper._daysOfTheYear
_OBJC_IVAR_$_EKRecurrenceHelper._weeksOfTheYear
_OBJC_IVAR_$_EKRecurrenceHelper._monthsOfTheYear
_OBJC_IVAR_$_EKRecurrenceHelper._setPositions
_OBJC_IVAR_$_EKRecurrenceHelper._dirty
_OBJC_IVAR_$_EKRecurrenceHelper._parsed
_OBJC_IVAR_$_EKRecurrenceRule.backingRule
_OBJC_IVAR_$_EKRecurrenceRule._cachedEnd
_OBJC_IVAR_$_EKFrozenRecurrenceRule.frequencyNumber
_OBJC_IVAR_$_EKFrozenRecurrenceRule.intervalNumber
_OBJC_IVAR_$_EKFrozenRecurrenceRule.firstDayOfTheWeekNumber
_OBJC_IVAR_$_EKFrozenRecurrenceRule.endDate
_OBJC_IVAR_$_EKFrozenRecurrenceRule.countNumber
_OBJC_IVAR_$_EKFrozenRecurrenceRule.daysOfTheWeek
_OBJC_IVAR_$_EKFrozenRecurrenceRule.monthsOfTheYear
_OBJC_IVAR_$_EKFrozenRecurrenceRule.daysOfTheMonth
_OBJC_IVAR_$_EKFrozenRecurrenceRule.weeksOfTheYear
_OBJC_IVAR_$_EKFrozenRecurrenceRule.daysOfTheYear
_OBJC_IVAR_$_EKFrozenRecurrenceRule.setPositions
_OBJC_IVAR_$_EKParticipant.name
_OBJC_IVAR_$_EKParticipant.URL
_OBJC_IVAR_$_EKParticipant.comment
_OBJC_IVAR_$_EKParticipant.scheduleStatusString
_OBJC_IVAR_$_EKFrozenAttendee.name
_OBJC_IVAR_$_EKFrozenAttendee.URL
_OBJC_IVAR_$_EKFrozenAttendee.email
_OBJC_IVAR_$_EKFrozenAttendee.status
_OBJC_IVAR_$_EKFrozenAttendee.role
_OBJC_IVAR_$_EKFrozenAttendee.type
_OBJC_IVAR_$_EKFrozenAttendee.isCurrentUser
_OBJC_IVAR_$_EKFrozenAttendee.comment
_OBJC_IVAR_$_EKFrozenAttendee.scheduleStatusString
_OBJC_IVAR_$_EKFrozenAttendee.replyRequested
_OBJC_IVAR_$_EKFrozenAttendee.scheduleForceSend
_OBJC_IVAR_$_EKBackingStoreAccounting._itemIdentifiers
_OBJC_IVAR_$_EKBackingStoreAccounting._calendarIdentifiersWithAllRemindersCached
_OBJC_IVAR_$_EKBackingStoreAccounting._backingStore
_OBJC_IVAR_$_EKBackingStoreAccounting._fetchSerialQueue
_OBJC_IVAR_$_EKBackingStoreAccounting._allEventsReceipt
_OBJC_IVAR_$_EKBackingStoreAccounting._allRemindersReceipt
_OBJC_IVAR_$_EKBackingStoreAccounting._allRemindersWithDueDatesReceipt
_OBJC_IVAR_$_EKBackingStoreAccounting._allCompletedRemindersReceipt
_OBJC_IVAR_$_EKBackingStoreAccounting._allIncompletedRemindersReceipt
_OBJC_IVAR_$_EKBackingStoreAccounting._cachedEventsInRange
_OBJC_IVAR_$_EKBackingStoreAccounting._receiptGeneration
_OBJC_IVAR_$_EKOrganizer._isCurrentUserForSharing
_OBJC_IVAR_$_EKReminderPredicate._limitToCompletedOrIncomplete
_OBJC_IVAR_$_EKReminderPredicate._searchTerm
_OBJC_IVAR_$_EKReminderPredicate._dueAfter
_OBJC_IVAR_$_EKReminderPredicate._dueBefore
_OBJC_IVAR_$_EKReminderPredicate._calendarTitle
_OBJC_IVAR_$_EKReminderPredicate._title
_OBJC_IVAR_$_EKReminderPredicate._completed
_OBJC_IVAR_$_EKReminderPredicate._useDueDateAsCompletionDate
_OBJC_IVAR_$_EKReminderPredicate._sortOrder
_OBJC_IVAR_$_EKReminderPredicate._maxResults
_OBJC_IVAR_$_EKReminderPredicate._useCompletionDateAsAlternate
_OBJC_IVAR_$_EKStructuredLocation.uuid
_OBJC_IVAR_$_EKDiff._firstObject
_OBJC_IVAR_$_EKDiff._secondObject
_OBJC_IVAR_$_EKDiff._result
_OBJC_IVAR_$_EKDiff._differentIdentityKeys
_OBJC_IVAR_$_EKDiff._differentImmutableKeys
_OBJC_IVAR_$_EKDiff._differentSingleValueKeys
_OBJC_IVAR_$_EKDiff._differentRelationshipSingleValueKeys
_OBJC_IVAR_$_EKDiff._differentRelationshipMultiValueKeys
_OBJC_IVAR_$_EKDiff._relationshipMultiValueAdds
_OBJC_IVAR_$_EKDiff._relationshipMultiValueRemoves
_OBJC_IVAR_$_EKDiff._relationshipMultiValueModifies
_OBJC_IVAR_$_EKDiff._relationshipSingleValueModifies
_OBJC_IVAR_$_EKFrozenStructuredLocation.address
_OBJC_IVAR_$_EKFrozenStructuredLocation.title
_OBJC_IVAR_$_EKFrozenStructuredLocation.radiusNumber
_OBJC_IVAR_$_EKFrozenStructuredLocation.abURLString
_OBJC_IVAR_$_EKFrozenStructuredLocation.geoURLString
_OBJC_IVAR_$_EKFrozenStructuredLocation.routeType
_OBJC_IVAR_$_EKFrozenStructuredLocation.uuid
_OBJC_IVAR_$_EKCalendarChangeHelper._backingStore
_OBJC_IVAR_$_EKCalendarChangeHelper._currentlyChangingCalendar
_OBJC_IVAR_$_EKRecurrenceChangeManager._backingStore
_OBJC_IVAR_$_EKBackingObjectsTracker._backingCalendarItems
_OBJC_IVAR_$_EKBackingObjectsTracker._backingCalendars
_OBJC_IVAR_$_EKBackingObjectsTracker._backingDetached
_OBJC_IVAR_$_EKBackingObjectsTracker._backingExdates
_OBJC_IVAR_$_EKBackingObjectsTracker._backingSources
_OBJC_IVAR_$_EKBackingObjectsTracker._calendarsToItemIdentifiers
_OBJC_IVAR_$_EKBackingObjectsTracker._includeEnabledDelegates
_OBJC_IVAR_$_EKBackingObjectsTracker._sourceFilters
_OBJC_IVAR_$_EKBackingObjectsTracker._preFrozenSourceDictionaries
_OBJC_IVAR_$_EKBackingObjectsTracker._preFrozenCalendarDictionaries
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._managedObjectID
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._source
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._identifier
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._title
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._senderEmail
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._senderName
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._dateStamp
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._allowsContentModifications
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._inProgress
_OBJC_IVAR_$_EKFrozenSharedCalendarInvitation._associatedCalendar
_OBJC_IVAR_$_EKSharee.managedObjectID
_OBJC_IVAR_$_EKArchiver._eventStore
_OBJC_IVAR_$_EKUnarchiver._eventStore
_OBJC_IVAR_$_EKFrozenSharee.name
_OBJC_IVAR_$_EKFrozenSharee.URL
_OBJC_IVAR_$_EKFrozenSharee.status
_OBJC_IVAR_$_EKFrozenSharee.accessLevel
_OBJC_IVAR_$_EKFrozenSharee.isCurrentUserForSharing
_OBJC_IVAR_$_EKPredicateCalendarItem._sortOrder
_OBJC_IVAR_$_EKPredicateCalendarItem._title
_OBJC_IVAR_$_EKPredicateCalendarItem._calendarTitle
_OBJC_IVAR_$_EKPredicateCalendarItem._maxResults
_OBJC_IVAR_$_EKPredicateCalendarItem._searchTerm
_OBJC_IVAR_$_EKPredicateCalendarItem._disableBackingStoreUpdate
+[EKCalendarItem knownRequireRSVPKeys].knownRequireRSVPKeys
+[EKCalendarItem knownRequireRSVPKeys].onceToken
+[EKCalendarItem knownPerUserPropertyKeys].knownPerUserPropertyKeys
+[EKCalendarItem knownPerUserPropertyKeys].onceToken
+[EKCalendarItem knownIdentityKeys].knownIdentityKeys
+[EKCalendarItem knownIdentityKeys].onceToken
+[EKCalendarItem knownImmutableKeys].knownImmutableKeys
+[EKCalendarItem knownImmutableKeys].onceToken
+[EKCalendarItem knownRelationshipSingleValueKeys].knownRelationshipSingleValueKeys
+[EKCalendarItem knownRelationshipSingleValueKeys].onceToken
+[EKCalendarItem knownRelationshipMultiValueKeys].knownRelationshipSingleValueKeys
+[EKCalendarItem knownRelationshipMultiValueKeys].onceToken
+[EKCalendarItem knownSingleValueKeys].knownRelationshipSingleValueKeys
+[EKCalendarItem knownSingleValueKeys].onceToken
+[EKReminder knownSingleValueKeys].knownSingleValueKeys
+[EKReminder knownSingleValueKeys].configuredKeys
+[EKReminder knownImmutableKeys].knownImmutableKeys
+[EKReminder knownImmutableKeys].onceToken
+[EKReminder orderSortDescriptors].descriptors
+[EKReminder orderSortDescriptors].onceToken
___accessToEventsGranted
___accessToRemindersGranted
_denyAccessToEvents
_denyAccessToReminders
-[EKBackingStore _logIfNoAccessRequested].noAccessLogged
_EK_CURRENT_EXTERNAL_UPDATE_BACKOFF
+[EKCoreDataFaultDelegate singleton].onceToken
+[EKCoreDataFaultDelegate singleton].faultDelegate
+[EKCalendar orderSortDescriptors].descriptors
+[EKCalendar orderSortDescriptors].onceToken
+[EKCalendar knownSingleValueKeys].knownSingleValueKeys
+[EKCalendar knownSingleValueKeys].onceToken
+[EKCalendar knownIdentityKeys].knownIdentityKeys
+[EKCalendar knownIdentityKeys].onceToken
+[EKCalendar knownRelationshipMultiValueKeys].knownRelationshipMultiValueKeys
+[EKCalendar knownRelationshipMultiValueKeys].onceToken
+[EKCalendar knownRelationshipSingleValueKeys].knownRelationshipSingleValueKeys
+[EKCalendar knownRelationshipSingleValueKeys].onceToken
+[EKCalendar knownImmutableKeys].knownImmutableKeys
+[EKCalendar knownImmutableKeys].onceToken
+[EKFrozenCalendar propertiesUnavailableForPartialObjects].propertiesUnavailableForPartialObjects
+[EKFrozenCalendar propertiesUnavailableForPartialObjects].onceToken
+[EKFrozenCalendarItem propertiesUnavailableForPartialObjects].propertiesUnavailableForPartialObjects
+[EKFrozenCalendarItem propertiesUnavailableForPartialObjects].onceToken
+[EKEventChangeSummarizer singleValueDiffKeys].s_diffKeys
+[EKEventChangeSummarizer multiValueDiffKeys].m_diffKeys
+[EKSource orderSortDescriptors].descriptors
+[EKSource orderSortDescriptors].onceToken
+[EKSource knownIdentityKeys].knownIdentityKeys
+[EKSource knownIdentityKeys].onceToken
+[EKSource knownImmutableKeys].knownImmutableKeys
+[EKSource knownImmutableKeys].onceToken
+[EKSource knownSingleValueKeys].knownSingleValueKeys
+[EKSource knownSingleValueKeys].onceToken
_s_editingContextsByEKObjectIDSet
+[EKCalendarPreferences calendarPreferences].calendarPreferences
+[EKCalendarPreferences calendarPreferences].onceToken
+[EKEvent knownImmutableKeys].knownImmutableKeys
+[EKEvent knownImmutableKeys].onceToken
+[EKEvent knownRelationshipMultiValueKeys].knownRelationshipMultiValueKeys
+[EKEvent knownRelationshipMultiValueKeys].onceToken
+[EKEvent knownRelationshipSingleValueKeys].knownRelationshipSingleValueKeys
+[EKEvent knownRelationshipSingleValueKeys].onceToken
+[EKEvent knownSingleValueKeys].knownSingleValueKeys
+[EKEvent knownSingleValueKeys].onceToken
+[EKEvent knownSkipValidationKeys].knownSkipValidationKeys
+[EKEvent knownSkipValidationKeys].onceToken
+[EKEvent _basicChangesRequiringSpanAll].basicChangesRequiringSpanAll
+[EKEvent _basicChangesRequiringSpanAll].onceToken
+[EKFrozenEvent propertiesUnavailableForPartialObjects].propertiesUnavailableForPartialObjects
+[EKFrozenEvent propertiesUnavailableForPartialObjects].onceToken
-[EKRecurrenceRule humanReadableDescriptionWithStartDate:].readableWeekDayArray
-[EKRecurrenceRule humanReadableDescriptionWithStartDate:].readableMonthArray
+[EKRecurrenceRule _daysOfWeek].sDaysOfWeek
+[EKSharee knownIdentityKeys].knownIdentityKeys
+[EKSharee knownIdentityKeys].onceToken
+[EKSharee knownSingleValueKeys].knownSingleValueKeys
+[EKSharee knownSingleValueKeys].onceToken
__EKSharedGregorianCalendarForTimeZone.__calendarCache
__EKSharedGregorianCalendarLock.sharedGregorianCalendarLock
__EKSharedGregorianCalendarLock.onceToken
_EKAlarmLocationBundleIdentifier
_EKBatchChangeInfoKey
_EKBundle
_EKBundleKey
_EKCalendarExternalURIScheme
_EKCalendarModifiedNotification
_EKCalendarSourceModifiedNotification
_EKChangedAlarmsAdded
_EKChangedAlarmsModified
_EKChangedAlarmsRemoved
_EKChangedAllDay
_EKChangedAttachmentPermissions
_EKChangedAttachmentsAdded
_EKChangedAttachmentsModified
_EKChangedAttachmentsRemoved
_EKChangedAttendeeComment
_EKChangedAttendeesAdded
_EKChangedAttendeesModified
_EKChangedAttendeesRemoved
_EKChangedAvailability
_EKChangedCalendar
_EKChangedCalendarColor
_EKChangedEndDate
_EKChangedLocation
_EKChangedNotes
_EKChangedParticipationStatus
_EKChangedPrivacy
_EKChangedRecurrenceRule
_EKChangedResponseComment
_EKChangedStartDate
_EKChangedTimeZone
_EKChangedTitle
_EKChangedTravelTime
_EKChangedURL
_EKDateComponentsGetDate
_EKDateGetDateComponents
_EKDefaultRecurrenceInterval
_EKErrorDomain
_EKEventExternalURIScheme
_EKEventModifiedNotification
_EKEventStoreBatchedChangeCalendarNotification
_EKEventStoreBatchedChangeEventNotification
_EKEventStoreBatchedChangeNotification
_EKEventStoreBatchedChangeReminderNotification
_EKEventStoreChangedNotification
_EKEventStoreEventImportedNotification
_EKEventStoreImportedObjectIdentifiers
_EKEventStoreLocaleChangedNotification
_EKEventStoreModifiedObjectIdentifiers
_EKEventStoreReminderBecameOverdueNotification
_EKEventStoreReminderFiredNotification
_EKEventStoreSharedCalendarInvitesChanged
_EKEventStoreSourceErrorStateChangedNotification
_EKEventStoreTimeZoneChangedNotification
_EKNS_Log
_EKNS_Log_Cache
_EKNS_Log_Cache_Binning
_EKNS_Log_Cache_Fetching
_EKNS_Log_Context
_EKNS_Log_Detach
_EKNS_Log_Diff
_EKNS_Log_EventsChangedNotification
_EKNS_Log_External_Change
_EKNS_Log_Faulting
_EKNS_Log_MoveEvent
_EKNS_Log_Search
_EKNS_Log_Serialization
_EKNS_Log_Slice
_EKNS_Log_Undo
_EKNS_Log_UserActions
_EKNS_Log_Validation
_EKPreFrozenCalendarKey
_EKPreFrozenSourceKey
_EKReminderExternalURIScheme
_EKReminderModifiedNotification
_EKReminderRecurrenceCompletedNotification
_EKReminderRecurrenceCompletedRecurringIncompleteIdentifierKey
_EKReminderRecurrenceCompletedSeparateCompletedIdentifierKey
_EKRouteTypeBiking
_EKRouteTypeDriving
_EKRouteTypeTransit
_EKRouteTypeWalking
_EKSetUnknownDisplayOrderToZero
_EKViewModelAccountDisplayOrderKey
_EKViewModelChangedNotification
_EKViewModelCollapsedTopLevelNodesKey
_EKViewModelDisabledCalendarsKey
_EKViewModelDomain
_EKViewModelLocalGroupsDisplayOrderKey
_OBJC_CLASS_$_EKAlarm
_OBJC_CLASS_$_EKArchiver
_OBJC_CLASS_$_EKAttachment
_OBJC_CLASS_$_EKAttendee
_OBJC_CLASS_$_EKBackingObjectsTracker
_OBJC_CLASS_$_EKBackingStore
_OBJC_CLASS_$_EKBackingStoreAccounting
_OBJC_CLASS_$_EKBatchChangeInfo
_OBJC_CLASS_$_EKCalendar
_OBJC_CLASS_$_EKCalendarChangeHelper
_OBJC_CLASS_$_EKCalendarItem
_OBJC_CLASS_$_EKCalendarPreferences
_OBJC_CLASS_$_EKCalendarStoreBackingStore
_OBJC_CLASS_$_EKChangeSet
_OBJC_CLASS_$_EKChangeTracker
_OBJC_CLASS_$_EKConflictDetails
_OBJC_CLASS_$_EKCoreDataFaultDelegate
_OBJC_CLASS_$_EKCreateOperation
_OBJC_CLASS_$_EKCreatedObjectsTracker
_OBJC_CLASS_$_EKDeleteOperation
_OBJC_CLASS_$_EKDiff
_OBJC_CLASS_$_EKEditingContext
_OBJC_CLASS_$_EKEvent
_OBJC_CLASS_$_EKEventChangeListener
_OBJC_CLASS_$_EKEventChangeSummarizer
_OBJC_CLASS_$_EKEventInfoPredicate
_OBJC_CLASS_$_EKEventMultiSliceSnapshotter
_OBJC_CLASS_$_EKEventOccurrenceCache
_OBJC_CLASS_$_EKEventPredicate
_OBJC_CLASS_$_EKEventSliceInfo
_OBJC_CLASS_$_EKEventSliceSnapshotter
_OBJC_CLASS_$_EKEventStore
_OBJC_CLASS_$_EKFrozenAlarm
_OBJC_CLASS_$_EKFrozenAttachment
_OBJC_CLASS_$_EKFrozenAttendee
_OBJC_CLASS_$_EKFrozenCalendar
_OBJC_CLASS_$_EKFrozenCalendarItem
_OBJC_CLASS_$_EKFrozenCalendarSource
_OBJC_CLASS_$_EKFrozenEvent
_OBJC_CLASS_$_EKFrozenNotificationBoxMessage
_OBJC_CLASS_$_EKFrozenObject
_OBJC_CLASS_$_EKFrozenRecurrenceRule
_OBJC_CLASS_$_EKFrozenReminder
_OBJC_CLASS_$_EKFrozenSharedCalendarInvitation
_OBJC_CLASS_$_EKFrozenSharee
_OBJC_CLASS_$_EKFrozenStructuredLocation
_OBJC_CLASS_$_EKInMemoryBackingStore
_OBJC_CLASS_$_EKNotificationBoxMessage
_OBJC_CLASS_$_EKObject
_OBJC_CLASS_$_EKObjectSnapshotter
_OBJC_CLASS_$_EKObjectTracker
_OBJC_CLASS_$_EKOrganizer
_OBJC_CLASS_$_EKParticipant
_OBJC_CLASS_$_EKPredicate
_OBJC_CLASS_$_EKPredicateCalendarItem
_OBJC_CLASS_$_EKPredicateSearch
_OBJC_CLASS_$_EKRecurrenceChangeInfo
_OBJC_CLASS_$_EKRecurrenceChangeManager
_OBJC_CLASS_$_EKRecurrenceDayOfWeek
_OBJC_CLASS_$_EKRecurrenceEnd
_OBJC_CLASS_$_EKRecurrenceGenerator
_OBJC_CLASS_$_EKRecurrenceHelper
_OBJC_CLASS_$_EKRecurrenceRule
_OBJC_CLASS_$_EKReminder
_OBJC_CLASS_$_EKReminderPredicate
_OBJC_CLASS_$_EKSaveOperation
_OBJC_CLASS_$_EKSharee
_OBJC_CLASS_$_EKSource
_OBJC_CLASS_$_EKStructuredLocation
_OBJC_CLASS_$_EKUnarchiver
_OBJC_CLASS_$_EKUndoManager
_OBJC_CLASS_$_EKUndoableOperation
_OBJC_IVAR_$_EKEventPredicate._endDate
_OBJC_IVAR_$_EKEventPredicate._prefetchHint
_OBJC_IVAR_$_EKEventPredicate._startDate
_OBJC_IVAR_$_EKEventPredicate._timeZone
_OBJC_IVAR_$_EKFrozenCalendarItem.recurrenceRuleString
_OBJC_METACLASS_$_EKAlarm
_OBJC_METACLASS_$_EKArchiver
_OBJC_METACLASS_$_EKAttachment
_OBJC_METACLASS_$_EKAttendee
_OBJC_METACLASS_$_EKBackingObjectsTracker
_OBJC_METACLASS_$_EKBackingStore
_OBJC_METACLASS_$_EKBackingStoreAccounting
_OBJC_METACLASS_$_EKBatchChangeInfo
_OBJC_METACLASS_$_EKCalendar
_OBJC_METACLASS_$_EKCalendarChangeHelper
_OBJC_METACLASS_$_EKCalendarItem
_OBJC_METACLASS_$_EKCalendarPreferences
_OBJC_METACLASS_$_EKCalendarStoreBackingStore
_OBJC_METACLASS_$_EKChangeSet
_OBJC_METACLASS_$_EKChangeTracker
_OBJC_METACLASS_$_EKConflictDetails
_OBJC_METACLASS_$_EKCoreDataFaultDelegate
_OBJC_METACLASS_$_EKCreateOperation
_OBJC_METACLASS_$_EKCreatedObjectsTracker
_OBJC_METACLASS_$_EKDeleteOperation
_OBJC_METACLASS_$_EKDiff
_OBJC_METACLASS_$_EKEditingContext
_OBJC_METACLASS_$_EKEvent
_OBJC_METACLASS_$_EKEventChangeListener
_OBJC_METACLASS_$_EKEventChangeSummarizer
_OBJC_METACLASS_$_EKEventInfoPredicate
_OBJC_METACLASS_$_EKEventMultiSliceSnapshotter
_OBJC_METACLASS_$_EKEventOccurrenceCache
_OBJC_METACLASS_$_EKEventPredicate
_OBJC_METACLASS_$_EKEventSliceInfo
_OBJC_METACLASS_$_EKEventSliceSnapshotter
_OBJC_METACLASS_$_EKEventStore
_OBJC_METACLASS_$_EKFrozenAlarm
_OBJC_METACLASS_$_EKFrozenAttachment
_OBJC_METACLASS_$_EKFrozenAttendee
_OBJC_METACLASS_$_EKFrozenCalendar
_OBJC_METACLASS_$_EKFrozenCalendarItem
_OBJC_METACLASS_$_EKFrozenCalendarSource
_OBJC_METACLASS_$_EKFrozenEvent
_OBJC_METACLASS_$_EKFrozenNotificationBoxMessage
_OBJC_METACLASS_$_EKFrozenObject
_OBJC_METACLASS_$_EKFrozenRecurrenceRule
_OBJC_METACLASS_$_EKFrozenReminder
_OBJC_METACLASS_$_EKFrozenSharedCalendarInvitation
_OBJC_METACLASS_$_EKFrozenSharee
_OBJC_METACLASS_$_EKFrozenStructuredLocation
_OBJC_METACLASS_$_EKInMemoryBackingStore
_OBJC_METACLASS_$_EKNotificationBoxMessage
_OBJC_METACLASS_$_EKObject
_OBJC_METACLASS_$_EKObjectSnapshotter
_OBJC_METACLASS_$_EKObjectTracker
_OBJC_METACLASS_$_EKOrganizer
_OBJC_METACLASS_$_EKParticipant
_OBJC_METACLASS_$_EKPredicate
_OBJC_METACLASS_$_EKPredicateCalendarItem
_OBJC_METACLASS_$_EKPredicateSearch
_OBJC_METACLASS_$_EKRecurrenceChangeInfo
_OBJC_METACLASS_$_EKRecurrenceChangeManager
_OBJC_METACLASS_$_EKRecurrenceDayOfWeek
_OBJC_METACLASS_$_EKRecurrenceEnd
_OBJC_METACLASS_$_EKRecurrenceGenerator
_OBJC_METACLASS_$_EKRecurrenceHelper
_OBJC_METACLASS_$_EKRecurrenceRule
_OBJC_METACLASS_$_EKReminder
_OBJC_METACLASS_$_EKReminderPredicate
_OBJC_METACLASS_$_EKSaveOperation
_OBJC_METACLASS_$_EKSharee
_OBJC_METACLASS_$_EKSource
_OBJC_METACLASS_$_EKStructuredLocation
_OBJC_METACLASS_$_EKUnarchiver
_OBJC_METACLASS_$_EKUndoManager
_OBJC_METACLASS_$_EKUndoableOperation
__bitmaskContainsOption
__bitmaskExclusivelyMatchesOption
__bitmaskMatchesExactlyOneOptionFromList
__boolToString
__validMoveEventRequirementsCombination
_barrierAsyncIfQueueNotNil
_barrierSyncBool
_barrierSyncIfQueueNotNil
_dispatch_queue_create_recursive_concurrent
_dispatch_sync_recursive
_syncBoolIfQueueNotNil
_syncIfQueueNotNil
_ABCopyLocalizedPropertyOrLabel
_CFAbsoluteTimeGetCurrent
_CFRelease
_CFStringGetCStringPtr
_CFStringGetCharacters
_CFStringGetCharactersPtr
_CalAlarmActionDisplay
_CalAlarmActionEmail
_CalAlarmActionProcedure
_CalAlarmActionSound
_CalCachedMeCardChangedNotification
_CalCalendarStoreChangedExternallyNotification
_CalCalendarTypeBirthday
_CalCalendarTypeCalDAV
_CalCalendarTypeExchange
_CalCalendarTypeLocal
_CalCalendarTypeSubscription
_CalDAVSessionErrorNotification
_CalEntityNamesKey
_CalEntitySourceIdsKey
_CalExchangeSessionErrorNotification
_CalFlagForProfiling
_CalGenerateUIDString
_CalLegacyFileImportIdentifier
_CalLocaleDidChangeNotification
_CalLogActual
_CalLogCurrentLevel
_CalLogWhiteList
_CalManagedAttendeeStatusAccepted
_CalManagedAttendeeStatusCompleted
_CalManagedAttendeeStatusDeclined
_CalManagedAttendeeStatusDelegated
_CalManagedAttendeeStatusInProcess
_CalManagedAttendeeStatusNeedsAction
_CalManagedAttendeeStatusTentative
_CalNotificationSharedCalendarInvitesChanged
_CalOriginatorIDKey
_CalStoreNS_Log
_CalStoreNS_Log_Database
_CalTimeZoneDidChangeNotification
_CalUpdatedItemsKey
_EKProtocolCalendarSharedFromMe
_EKProtocolCalendarSharedToMe
_EKProtocolCalendarSharingNotSet
_EKProtocolShareeAccessLevelRead
_EKProtocolShareeAccessLevelReadWrite
_EKProtocolShareeAccessLevelReadWriteSchedule
_EKProtocolShareeStatusAccepted
_EKProtocolShareeStatusDeclined
_EKProtocolShareeStatusDeleted
_EKProtocolShareeStatusInvalid
_EKProtocolShareeStatusNoResponse
_MDQueryDisableUpdates
_MDQueryExecute
_MDQueryGetResultCount
_MDQueryStop
_NSCalendarIdentifierGregorian
_NSDefaultRunLoopMode
_NSDeletedObjectsKey
_NSGenericException
_NSInsertedObjectsKey
_NSInternalInconsistencyException
_NSInvalidArgumentException
_NSLocalizedDescriptionKey
_NSLog
_NSRequestConcreteImplementation
_NSStringFromClass
_NSUnderlyingErrorKey
_NSUpdatedObjectsKey
_OBJC_CLASS_$_ABAddressBook
_OBJC_CLASS_$_ABPerson
_OBJC_CLASS_$_CALColorModel
_OBJC_CLASS_$_CLLocation
_OBJC_CLASS_$_CLLocationManager
_OBJC_CLASS_$_CalAccumulatingQueue
_OBJC_CLASS_$_CalAgentLink
_OBJC_CLASS_$_CalAttachmentCache
_OBJC_CLASS_$_CalChronometry
_OBJC_CLASS_$_CalDAVUtils
_OBJC_CLASS_$_CalDateRange
_OBJC_CLASS_$_CalDefaultDictionary
_OBJC_CLASS_$_CalDisjointDateRange
_OBJC_CLASS_$_CalEntityDescription
_OBJC_CLASS_$_CalEventOccurrenceCache
_OBJC_CLASS_$_CalFreeBusyCacheManager
_OBJC_CLASS_$_CalLocation
_OBJC_CLASS_$_CalManagedAlarm
_OBJC_CLASS_$_CalManagedAttachment
_OBJC_CLASS_$_CalManagedAttendee
_OBJC_CLASS_$_CalManagedBirthdayCalendar
_OBJC_CLASS_$_CalManagedCalDAVCalendar
_OBJC_CLASS_$_CalManagedCalDAVPrincipal
_OBJC_CLASS_$_CalManagedCalendar
_OBJC_CLASS_$_CalManagedCalendarItem
_OBJC_CLASS_$_CalManagedEvent
_OBJC_CLASS_$_CalManagedExchangeCalendar
_OBJC_CLASS_$_CalManagedExchangePrincipal
_OBJC_CLASS_$_CalManagedGroup
_OBJC_CLASS_$_CalManagedICSElementProperties
_OBJC_CLASS_$_CalManagedLocalCalendar
_OBJC_CLASS_$_CalManagedLocalGroup
_OBJC_CLASS_$_CalManagedMessage
_OBJC_CLASS_$_CalManagedObjectContext
_OBJC_CLASS_$_CalManagedPrincipal
_OBJC_CLASS_$_CalManagedRecurrenceException
_OBJC_CLASS_$_CalManagedRemoteCalendar
_OBJC_CLASS_$_CalManagedSharee
_OBJC_CLASS_$_CalManagedStore
_OBJC_CLASS_$_CalManagedSubscriptionCalendar
_OBJC_CLASS_$_CalManagedTask
_OBJC_CLASS_$_CalNotification
_OBJC_CLASS_$_CalPersistence
_OBJC_CLASS_$_CalPreferences
_OBJC_CLASS_$_CalSpotlight
_OBJC_CLASS_$_CalWellKnownPaths
_OBJC_CLASS_$_EKProtocolCalendar_Shared
_OBJC_CLASS_$_EKProtocolEventOccurrence_Shared
_OBJC_CLASS_$_EKProtocolObject_Shared
_OBJC_CLASS_$_EKProtocolParticipant_Shared
_OBJC_CLASS_$_ICSCalendar
_OBJC_CLASS_$_ICSDate
_OBJC_CLASS_$_ICSDateTimeValue
_OBJC_CLASS_$_ICSDateValue
_OBJC_CLASS_$_ICSDocument
_OBJC_CLASS_$_ICSRecurrenceRule
_OBJC_CLASS_$_ICSUserAddress
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCalendar
_OBJC_CLASS_$_NSCompoundPredicate
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateComponents
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableOrderedSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOrderedSet
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSRegularExpression
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUndoManager
_OBJC_CLASS_$_NSWorkspace
_OBJC_METACLASS_$_NSKeyedArchiver
_OBJC_METACLASS_$_NSKeyedUnarchiver
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSPredicate
_OBJC_METACLASS_$_NSUndoManager
_TCCAccessPreflight
_TCCAccessRequest
__Block_object_assign
__Block_object_dispose
__DefaultRuneLocale
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___maskrune
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__dispatch_queue_attr_concurrent
__objc_empty_cache
_dispatch_after
_dispatch_async
_dispatch_barrier_async
_dispatch_barrier_sync
_dispatch_get_global_queue
_dispatch_get_specific
_dispatch_once
_dispatch_queue_create
_dispatch_queue_set_specific
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_sync
_dispatch_time
_floor
_getStringUUID
_gmtime_r
_kABAddressProperty
_kABEmailProperty
_kABFirstNameProperty
_kABLastNameProperty
_kABOrganizationProperty
_kABPersonFlags
_kCalMDItemCompleted
_kCalMDItemCompletionDate
_kIAProviderFacebook
_kICSSTR_none_trigger_value
_kICSSTR_status_cancelled
_kICSSTR_status_confirmed
_kICSSTR_status_tentative
_kICSSymbolicColorCustom
_kMDItemDueDate
_kMDQueryDidFinishNotification
_kMDQueryDidUpdateNotification
_kMDQueryProgressNotification
_kTCCServiceCalendar
_kTCCServiceReminders
_kXAppleAlarmProxArrive
_kXAppleAlarmProxDepart
_objc_autorelease
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_copyWeak
_objc_destroyWeak
_objc_end_catch
_objc_enumerationMutation
_objc_exception_throw
_objc_getProperty
_objc_initWeak
_objc_loadWeakRetained
_objc_msgSend
_objc_msgSendSuper2
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_strcat
_strchr
_strcmp
_strcpy
_strftime_l
_strlen
_strncpy
_strptime_l
_timegm
_ucol_close
_ucol_open
_ucol_setStrength
_uloc_setKeywordValue
_usearch_close
_usearch_next
_usearch_openFromCollator
_usearch_setOffset
_usearch_setPattern
dyld_stub_binder
