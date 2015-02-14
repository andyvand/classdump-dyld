+[CalManagedObjectContext setIsCalendarAgent:]
+[CalPersistence initialize]
___28+[CalPersistence initialize]_block_invoke
+[CalPersistence enableFailOnExternalDatabaseReset]
+[CalPersistence databaseConnectionBeingEstablishedGroup]
+[CalPersistence setupCalendarPersistence:]
+[CalPersistence setupCalendarPersistence:andCreateDefaultCalendarsIfNeeded:]
+[CalPersistence setupCalendarPersistence:andCreateDefaultCalendarsIfNeeded:withSetupGroup:]
+[CalPersistence _shouldConnectUsingSQLite]
+[CalPersistence _startAgentLinkWithClientXPCWaitingOnGroup:]
-[CalClientProxy initWithGroup:]
+[CalPersistence _createSQLiteStoreWithSchemaMigration:createDefaultCalendars:]
-[CalNamedMutex initWithName:]
-[CalNamedMutex tryLock]
+[CalPersistentStoreCoordinator defaultPersistentStoreCoordinator]
-[CalPersistentStoreCoordinator init]
-[CalPersistentStoreCoordinator initWithPath:]
+[CalManagedObjectModel defaultManagedObjectModel]
-[CalPersistentStoreCoordinator setCalendarStorePath:]
-[CalPersistentStoreCoordinator calendarCachePath]
-[CalPersistentStoreCoordinator addPersistentStore:]
-[CalPersistentStoreCoordinator addPersistentStoreOfType:error:]
+[CalPersistence _createDefaultCalendarPersistenceSingleton]
___64-[CalPersistentStoreCoordinator addPersistentStoreOfType:error:]_block_invoke
+[CalPersistence allocWithZone:]
-[CalPersistence init]
-[CalPersistence _setSendsNotifications:]
-[CalPersistence retain]
-[CalNamedMutex unlock]
-[CalNamedMutex dealloc]
+[CalUserNotificationCenter defaultCenter]
-[CalUserNotificationCenter init]
-[CalUserNotificationCenterCache initWithCenter:]
+[CalUserNotificationCenterListener defaultListener]
-[CalUserNotificationCenter setupLocationManagerOnLaunch]
-[CalUserNotificationCenter _setupLocationManagerAndCheckMonitoredRegions:]
___75-[CalUserNotificationCenter _setupLocationManagerAndCheckMonitoredRegions:]_block_invoke
+[CalHTTPUserAgent copyString]
+[CalHTTPUserAgent copySystemVersionString]
+[CalHTTPUserAgent copyProductVersionString]
+[CalSession setDefaultUserAgent:]
+[CalManagedStore(AccountDeletion) processAccountsMarkedForDeletion]
+[CalDAVChangeRequestsConsumer sharedInstance]
___68+[CalManagedStore(AccountDeletion) processAccountsMarkedForDeletion]_block_invoke
-[CalDAVChangeRequestsConsumer init]
___68+[CalManagedStore(AccountDeletion) processAccountsMarkedForDeletion]_block_invoke_2
+[CalManagedObjectContext managedObjectContext]
-[CalManagedObjectContext initWithConcurrencyType:]
-[CalDAVChangeRequestsConsumer setLastSequenceNumberProcessed:]
-[CalManagedObjectContext initWithConcurrencyType:persistentStoreCoordinator:]
-[CalDAVChangeRequestsConsumer setLastLocalUIDProcessed:]
-[CalDAVChangeRequestsConsumer processChangeRequests]
-[CalManagedObjectContext setTrackChangesForCalDAVServer:]
-[CalManagedObjectContext setWriteChangesToCalDAVServer:]
-[CalManagedObjectContext setWriteChangesToTruthFileStore:]
-[CalManagedObjectContext setContainsCalendarData:]
+[CalTruthFileStore initialize]
+[CalTruthFileStore defaultMonitor]
-[CalTruthFileStore init]
-[CalPersistenceMonitor init]
-[CalPersistenceMonitor registerListeners]
-[CalDAVChangeRequestsConsumer runOperationOnConsumerQueue:]
+[CalAccountMonitor initialize]
___31+[CalAccountMonitor initialize]_block_invoke
+[CalBadgeMonitor initialize]
-[CalTaskManager init]
-[CalDAVChangeRequestsConsumer processChangeRequestsInBackground]
-[CalBadgeMonitor init]
___29+[CalBadgeMonitor initialize]_block_invoke
-[CalBadgeMonitor _updateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate]
+[CalSharedCalendarInviteMonitor initialize]
+[CalNetworkChangeNotifier sharedNotifier]
+[CalNetworkChangeNotifier enableNotifications]
+[CalSharedCalendarInviteMonitor defaultMonitor]
-[CalNetworkChangeNotifier init]
-[CalNetworkChangeNotifier _listenForChanges]
+[CalDAVChangeRequestsProducer registerForContextNotifications]
+[CalDAVChangeRequestsProducer sharedInstance]
-[CalDAVChangeRequestsProducer init]
___45-[CalNetworkChangeNotifier _listenForChanges]_block_invoke
+[CalManagedObject fetchRequestWithPredicate:inManagedObjectContext:]
+[CalManagedCalDAVAccount entityName]
-[CalManagedObjectContext executeFetchRequest:error:]
+[CalManagedAccount accountsMarkedForDeletionInContext:]
-[CalDAVChangeRequestsConsumer lastSequenceNumberProcessed]
+[CalManagedCalDAVPrincipal entityName]
-[CalNetworkChangeNotifier addListener:]
+[CalManagedAccount _accountsWithPredicate:inContext:]
+[CalManagedAccount entityName]
+[CalManagedMessage messagesArrayForCalendarMainWindowWithManagedObjectContext:]
+[CalManagedPrincipal fetchRequestForICalMainWindowPrincipalsInManagedObjectContext:]
+[CalManagedPrincipal entityName]
+[CalBadgeMonitor agentUpdateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate]
+[CalBadgeMonitor sharedMonitor]
-[CalBadgeMonitor _enqueueUpdateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate]
___23-[CalBadgeMonitor init]_block_invoke
+[CalBadgeMonitor _agentUpdateRemindersBadgeCountAndScheduleAgentWakeupForNextDueDate]
+[CalBadgeMonitor numberOfOverDueRemindersAndMessages]
+[CalBadgeMonitor currentOverdueDateForAllDayReminders]
+[CalBadgeMonitor todayComponents]
+[CalChronometry initialize]
+[CalChronometry configureChronometry]
+[CalChronometry _updateActiveCalendar]
+[CalDateLocalization initializeFormatters]
+[CalDateLocalization generateLocalizedDateTimeFormats]
+[CalDateLocalization generateStandardFormatters:]
+[CalDateLocalization setupFormatter:forKey:]
+[CalDateLocalization generateAdditionalPrecodedFormatters:]
+[CalDateLocalization setupFormatTemplate:forKey:locale:]
-[CalManagedCalDAVPrincipal awakeFromFetch]
+[CalDateLocalization setupFormat:forKey:locale:]
-[CalManagedAccount isEnabled]
-[CalManagedObjectContext deleteObject:]
-[CalManagedObjectContext saveIfContextHasChanges]
-[CalManagedObjectContext save:]
+[CalendarStore disableSuddenTermination]
-[CalManagedNode awakeFromFetch]
-[CalManagedNode path]
-[CalManagedNode relativePath]
+[CalManagedExchangePrincipal pathExtension]
-[CalPersistentStoreCoordinator calendarStorePath]
+[CalManagedMessage _formatString:forClass:]
+[CalManagedMessage _stringForClass:]
+[CalManagedMessage classForEvent]
+[CalManagedMessage nonEventNotificationTypes]
+[CalManagedMessage fetchRequestWithPredicate:inManagedObjectContext:]
+[CalManagedMessage entityName]
-[CalManagedCalDAVPrincipal principalURL]
-[CalDefaultDictionary initWithDefaultClass:]
-[CalDefaultDictionary finalDictionary]
-[CalManagedChangeRequest checkDependenciesAndBreakCycles]
-[CalManagedChangeRequest _checkAndBreakCycles:]
-[CalDAVChangeRequestsConsumer _expandProcessChangeRequest:forOperation:inManagedObjectContext:]
-[CalDAVChangeRequestsConsumer _processChangeRequest:inManagedObjectContext:]
-[CalManagedMessage awakeFromFetch]
-[CalManagedMessage path]
-[CalManagedMessage pathForMessageWithFilename:principal:]
-[CalManagedMessage associatedWithNotificationCollection]
+[CalManagedCalDAVPrincipal pathExtension]
-[CalManagedMessage _resetCachedValues]
-[CalManagedMessage setCachedClosestOccurrenceID:]
-[CalManagedMessage _updateCachedBestMessageWithMessage:]
-[CalManagedAccount serverURL]
-[CalManagedNode isWritable]
-[CalManagedRemoteCalendar isEditable]
-[CalManagedPrincipal isDelegate]
-[CalManagedAccount isEnabledForCalendar]
-[CalManagedError error]
-[CalManagedCalDAVPrincipal pushTransportDictionary]
-[CalManagedCalDAVError copyUnscrubbedUserInfoForError:]
-[CalManagedError copyUnscrubbedUserInfoForError:]
-[CalManagedCalDAVPrincipal description]
___56-[CalManagedCalDAVError copyUnscrubbedUserInfoForError:]_block_invoke
-[CalManagedAccount isEnabledForReminders]
-[CalManagedAccount mainPrincipal]
-[CalManagedCalDAVCalendar relativePath]
+[CalManagedCalendar pathExtension]
-[CalManagedRemoteCalendar isSubscribed]
-[CalDAVOperationQueue stop]
-[CalDAVOperationQueue description]
-[CalDAVOperationQueue setNeedsAccountPropertyRefresh:]
+[CalNotification addObserver:selector:name:]
+[CalNotification addObserver:selector:name:object:]
-[CalDAVClientInfoSentry init]
-[CalPersistence managedObjectContextWillSave:]
-[CalPersistence isInterestedInContext:]
-[CalManagedObjectContext isContextForCalendarStore]
-[NSPersistentStoreCoordinator(CalendarStoreSupport) isCalendarStoreCoordinator]
-[CalManagedObjectContext containsCalendarData]
-[CalPersistenceMonitor _managedObjectContextWillSave:]
-[CalPersistenceMonitor isInterestedInContext:]
-[CalAccountMonitor managedObjectContextWillSave:]
-[CalManagedObject(CalAccountMonitor) _changeAffectsPush:]
-[CalManagedObject(CalAccountMonitor) _changeAffectsRefresh:]
-[CalManagedObject(CalAccountMonitor) _changeAffectsAccountSync:]
-[CalManagedObject(CalAccountMonitor) _changeAffectsDockTile:]
-[CalManagedObject(CalAccountMonitor) _changeAffectsAccount:]
-[CalManagedObjectContext setThreadSafeData:forKey:]
-[CalBadgeMonitor isInterestedInContext:]
-[CalBadgeMonitor managedObjectContextWillSave:]
-[CalDAVChangeRequestsProducer managedObjectContextWillSave:]
+[CalDAVChangeRequestsProducer changeRequestsShouldBeProducedForContext:]
-[CalManagedObjectContext trackChangesForCalDAVServer]
-[CalAlertChangeMonitor isInterestedInContext:]
-[CalAlertChangeMonitor managedObjectContextWillSave:]
-[CalManagedObject validateForUpdate:]
-[CalManagedExchangeCalendar relativePath]
-[CalManagedObject rebuildValidationError:]
-[CalManagedObject willSave]
__GetModifiedFormatFromFormat
+[CalDateLocalization generateDerivedTimeFormats:]
+[CalDateLocalization ICUFormats]
+[CalDateLocalization _hourSymbolInFormat:]
+[CALDate(LocalizationExtensions) generateLocalizedDateTimeFormats]
+[CALDate(LocalizationExtensions) generatePreferedOrders]
+[CalChronometry activeCalendar]
+[CalChronometry _activeCalendar]
+[CalBadgeMonitor isAfterAllDayOverdueTime]
+[CalChronometry _activeTimeZone]
+[CalChronometry _activeLocale]
+[NSDate(FloatingDate) dateInFloatingTimeZoneFromDate:inTimeZone:]
___66+[NSDate(FloatingDate) dateInFloatingTimeZoneFromDate:inTimeZone:]_block_invoke
+[NSDate(FloatingDate) _initCustomCalendar]
+[CalManagedTask entityName]
+[CalManagedMessage fetchRequestWithCalendars:forClass:inManagedObjectContext:]
-[CalManagedObject didSave]
-[CalPersistence managedObjectContextDidSave:]
-[CalPersistenceMonitor _managedObjectContextDidSave:]
-[CalTruthFileStore isInterestedInContext:]
-[CalManagedObjectContext writeChangesToTruthFileStore]
-[CalTruthFileStore managedObjectContextDidSave:]
-[CalTruthFileStore writeFilesForObjects:]
+[CalTruthFileOperation operationWithMethods:]
-[CalTruthFileOperation initWithMethods:]
+[CalManagedSubscriptionInfo initialize]
-[CalTruthFileOperation main]
-[CalTruthFileOperation _enableSuddenTerminationIfNeeded]
+[CalendarStore enableSuddenTermination]
-[CalManagedObjectContext deletedObjectIDsFromMerge]
-[CalTruthFileStore removeFilesForObjects:]
-[CalAccountMonitor managedObjectContextDidSave:]
-[CalManagedObjectContext getThreadSafeDataForKey:]
-[CalManagedObjectContext clearThreadSafeDataForKey:]
-[CalManagedObjectContext needsIAGroupSync]
-[CalBadgeMonitor managedObjectContextDidSave:]
-[CalSharedCalendarInviteMonitor managedObjectContextDidSave:]
___62-[CalSharedCalendarInviteMonitor managedObjectContextDidSave:]_block_invoke
-[CalDAVChangeRequestsProducer managedObjectContextDidSave:]
-[CalManagedObjectContext notifyCalendarAgent]
-[CalManagedObjectContext setNotifyCalendarAgent:]
-[CalAlertChangeMonitor managedObjectContextDidSave:]
-[CalTruthFileOperation dealloc]
-[CalDefaultDictionary dealloc]
+[CalManagedMessage _filterMessages:]
___37+[CalManagedMessage _filterMessages:]_block_invoke
-[CalManagedMessage shouldDisplayNotification]
+[CalManagedMessage shouldDisplayNotificationForPrincipal:]
-[CalManagedPrincipal isMainPrincipal]
+[CalManagedMessage countMessagesForClass:WithManagedObjectContext:]
+[CalManagedMessage classForTask]
-[CalManagedObjectContext countForFetchRequest:error:]
-[CalManagedCalDAVPrincipal(CalAccountMonitor) _changeAffectsPush:]
-[CalManagedPrincipal(CalAccountMonitor) _changeAffectsRefresh:]
-[CalManagedPrincipal(CalAccountMonitor) _changeAffectsAccountSync:]
-[CalManagedPrincipal(CalAccountMonitor) _changeAffectsDockTile:]
-[CalDAVChangeRequestsProducer processInsertedManagedObjects:inManagedObjectContext:]
-[CalDAVChangeRequestsProducer processUpdatedManagedObjects:inManagedObjectContext:]
-[CalManagedObject(ChangeRequestProducer) processForType:inManagedObjectContext:]
-[CalDAVChangeRequestsProducer processDeletedManagedObjects:inManagedObjectContext:]
+[CalNotification postNotificationName:object:]
+[CalNotification postNotificationName:object:userInfo:]
+[CalBadgeMonitor scheduleNextRemindersBadgeUpdate]
+[CalBadgeMonitor dateOfNextDueTimedReminder]
-[CalManagedSearchProperty CDVStringWithNameSpace]
-[CalManagedCalDAVPrincipal validateForWrite:]
+[CalManagedMessage shouldDisplayNotificationForCalendar:]
-[CalManagedObjectContext dealloc]
+[CalBadgeMonitor nextOverdueTimeForAllDayReminders]
-[CalManagedCalendarItem dealloc]
-[CalManagedNode dealloc]
-[CalManagedCalDAVPrincipal dealloc]
-[CalManagedMessage dealloc]
-[CalManagedMessage setEventServerFilename:]
-[CalDAVOperationQueue start]
-[CalDAVOperationQueue beginNextOperation]
-[CalDAVOperationQueue peek]
-[CalDAVOperationQueue _operationAtIndex:]
-[CalDAVOperationQueue isStopped]
+[CoreCalendarsManager defaultManager]
___38+[CoreCalendarsManager defaultManager]_block_invoke
+[CalTruthFileCreateDirectory methodWithPath:]
-[CoreCalendarsManager init]
-[CoreCalendarsManager sourceForKey:]
-[CalTruthFileCreateDirectory initWithPath:]
-[CalManagedCalDAVPrincipal properties]
-[CalManagedPrincipal properties]
-[CalManagedGroup properties]
-[CalManagedNode properties]
-[CalManagedGroup color]
-[CalTaskManager setWorkRunLoop:]
-[CalSingleSynchronousTask executeTask:usingTaskManager:]
-[CalSingleSynchronousTask setCompleted:]
-[CalSingleSynchronousTask _setCompletionBlockOnTask:]
-[CalCalDAVTaskManager submitIndependentCoreDAVTask:]
-[CalTaskManager submitIndependentTask:]
-[CalTaskManager stateString]
-[CalTaskManager _schedulePerformTask:]
-[CalSingleSynchronousTask completed]
___39-[CalTaskManager _schedulePerformTask:]_block_invoke
-[CalTaskManager _performTask:]
-[CoreDAVTask(CalCoreDAVTaskExtension) performTask]
+[CALKeychain sharedKeychain]
-[CALKeychain loadKeychainInformationsForURL:]
-[CALKeychain loadKeychainInformationsForURL:realm:]
-[CALKeychain loadKeychainInformationsForURL:realm:login:]
-[CALKeychain loadKeychainInformationsForURL:realm:login:shouldDeleteEntry:]
-[CALKeychain newDictionaryForURL:realm:]
-[CALKeychain protocolForScheme:]
-[CALKeychain newDictionaryForInternetPasswordWithAccount:protocol:server:port:path:]
-[CalManagedCalDAVPrincipal isWritable]
-[CalManagedPrincipal overrideBaseURL]
-[CalDAVClientInfoSentry shouldSendClientInfoHeaderForURL:providerHost:]
-[CalDAVClientInfoSentry pluginIdentifierForHost:]
-[CalDAVClientInfoSentry hostToPluginIDCache]
-[CalManagedCalendarItem awakeFromFetch]
+[CalAccountsProvider defaultProvider]
-[CalManagedCalendarItem path]
-[CalAccountsProvider init]
-[CalManagedCalendarItem directory]
-[CalManagedCalendarItem filename]
-[CalManagedEvent filenameWithoutExtension]
-[CalManagedCalendarItem filenameWithoutExtension]
-[NSColor(StringCoding) stringRepresentation]
-[CalManagedCalDAVPrincipal type]
-[CalManagedCalendarUserAddress address]
-[CalAccountsProvider pluginIDForCalDAVHost:]
+[CalManagedCalDAVCalendar entityName]
-[CalManagedCalDAVPrincipal isCalendarServerPrivateEventsSupported]
-[CalManagedCalDAVPrincipal isPrivateCommentsSupported]
-[CalManagedCalDAVPrincipal isAutoScheduleSupported]
-[CalManagedCalDAVCalendar timeZone]
+[CalTruthFileDataWrite methodWithPath:data:]
-[CalTruthFileDataWrite initWithPath:data:]
-[CalTruthFileCreateDirectory description]
-[CalTruthFileDataWrite description]
-[CalTruthFileCreateDirectory main]
-[CalTruthFileDataWrite main]
___49-[CalTruthFileStore managedObjectContextDidSave:]_block_invoke
-[CalTruthFileCreateDirectory dealloc]
-[CalTruthFileDataWrite dealloc]
+[CalSession defaultUserAgent]
-[CalDAVOperationQueue nextOperationNotCurrentlyRunning]
-[CalDAVAccountRefreshQueueableOperation setFromFullRefresh:]
-[CalDAVOperationQueue isStalled]
-[CalDAVOperationQueue enqueueOperation:]
-[CalDAVQueueableOperation description]
-[CalDAVQueueableOperation sequenceNumber]
-[CalDAVOperationQueue _addOperationToCountedSet:]
-[CalDAVOperationQueue flattenOperationDependencies]
-[CalDAVQueueableOperation isReady]
-[CalDAVQueueableOperation isRunning]
-[CalDAVQueueableOperation beginQueueableOperation]
-[CalDAVQueueableOperation setStartDate:]
-[CalDAVQueueableOperation performOperationSynchronously]
-[CalDAVAccountRefreshQueueableOperation performOperation]
-[CalDAVAccountRefreshQueueableOperation resetStatisticsGatheringCounters]
-[CalDAVAccountRefreshQueueableOperation setNumberOfInboxEntriesAffected:]
-[CalDAVAccountRefreshQueueableOperation setNumberOfEventsAffected:]
-[CalDAVAccountRefreshQueueableOperation setNumberOfNotificationsAffected:]
-[CalDAVOperationQueue allOperations]
-[CalDAVAccountRefreshQueueableOperation refreshWithExceptionHandling]
-[CalDAVAccountRefreshQueueableOperation(Private) refresh]
-[CalDAVQueueableOperation taskManager]
-[CalDAVQueueableOperationRunLoopPumper pumpRunLoopWithCompletedCheck:]
___57-[CalDAVQueueableOperation performOperationSynchronously]_block_invoke
-[CalDAVQueueableOperation queue]
-[CalDAVOperationQueue needsAccountPropertyRefresh]
-[CalDAVAccountRefreshQueueableOperation(Private) _refreshPropertiesAndCalendarsForPrincipal:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) refreshPropertiesForPrincipalCoreDAV:error:]
-[CalCalDAVSynchronousTaskGroup executeTaskGroup:]
-[CalCalDAVTaskManager submitQueuedCoreDAVTask:]
-[CalTaskManager submitQueuedTask:]
-[CalTaskManager submitQueuedTask:toFrontOfQueue:]
-[CalDAVClientInfoSentry clearedToSendInfoForPluginWithIdentifier:]
-[CalDAVClientInfoSentry pluginIDToTransmissionCheckResultCache]
-[CalAccountsProvider shouldSendInfoForPluginWithID:]
+[CalManagedExchangePrincipal entityName]
-[CalManagedExchangePrincipal supportsDefaultAlarms]
-[CalManagedPrincipal calendarUserAddress]
+[CalManagedCalendarUserAddress preferredAddressURLforAddresses:]
+[CalendarStore preferredCalendarUserAddress:]
+[CalSessionPool sessionForObjectID:]
-[CalSession initWithObjectID:]
+[CalSessionPool addSession:]
-[CalSession objectID]
-[CalOperationQueue initWithSessionID:]
-[CalOperationQueue _createQueueContext]
-[CalOperationQueue testConnection]
-[CalOperationQueue _performSelectorOnQueue:withObject:]
-[CalManagedCalendarItem(ChangeRequestProducer) processForType:inManagedObjectContext:]
-[CalOperationQueue addOperationToInternalQueue:]
-[CalManagedCalendarItem(ChangeRequestProducer) processForType:forParentCR:inManagedObjectContext:]
-[CalOperationQueue _fetchPersistentOperations]
-[CalOperationQueue _testConnectionInvokedByQueue]
+[CalExchangeTestConnectionOperation testConnectionOperationWithSessionID:]
-[CalOperation initWithSessionID:]
-[CalOperationQueue _notifyListenersQueueChanged]
+[CalNotification postNotificationName:]
-[CalSession status]
-[CalSession setStatus:]
-[CalExchangeSyncAccountOperation initWithSessionID:]
-[CalExchangeSyncAccountOperation setRefreshDelegatePrivileges:]
-[CalExchangeSyncAccountOperation setFetchMailbox:]
-[CalOperationQueue addOperation:]
-[CalOperationQueue executeOperations]
-[CalManagedCalendar checked]
-[CalManagedCalendar isEventContainer]
-[CalManagedCalendar isTaskContainer]
-[CalManagedCalendar notificationCount]
-[CalManagedRemoteCalendar shareDefaultAlarmSettings]
-[CalManagedRemoteCalendar isDelegate]
-[CalManagedCalDAVCalendar isAffectingAvailability]
-[CalManagedCalDAVCalendar isRenameable]
-[CalManagedNode color]
+[NSColor(StringCoding) colorFromString:]
-[CalManagedCalDAVCalendar ownerAddress]
-[CalExchangeTestConnectionOperation executeInContext:error:]
-[CalOperation sessionID]
-[CalManagedExchangeAccount internalWebServicesURL]
-[CalManagedDefaultAlarmSet(ChangeRequestProducer) processForType:inManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) processForType:inManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) processDeletedCalDAVCalendarInManagedObjectContext:]
-[CalManagedObject committedValueForKey:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) processUpdatedCalDAVCalendarInManagedObjectContext:]
-[CalManagedEvent willSave]
-[CalManagedCalendarItem willSave]
-[CalManagedAlarm willSave]
-[CalManagedAlarm relativeTrigger]
-[CalManagedAlarm defaultAlarmPropertiesHelperForKey:]
-[CalManagedRemoteCalendar willSave]
-[CalManagedCalendar willSave]
-[CalManagedExchangeAccount _createWebServicesURL:]
-[CalManagedExchangeAccount externalWebServicesURL]
-[CalManagedExchangeAccount externalURL]
-[CalExchangeTestConnectionOperation _testURL:withSession:error:]
-[CalManagedCalDAVAccount didSave]
-[CalManagedAccount isDeletedOrMarkedForDeletion]
-[CalManagedCalendar didSave]
+[CalManagedCalendarItem fetchRequestWithSharedUIDs:inManagedObjectContext:]
+[CalManagedCalendarItem entityName]
-[CalDefaultDictionary objectForKey:]
+[CalManagedNode fetchRequestWithUID:inManagedObjectContext:]
+[CalManagedCalendar entityName]
+[CalTruthFileRemove methodWithPath:isDirectory:]
-[CalTruthFileRemove initWithPath:isDirectory:]
-[CalTruthFileRemove description]
-[CalManagedObject objectIDAsString]
-[CalTruthFileRemove main]
-[CalManagedObjectContext setNeedsIAGroupSync:]
-[CalAccountsProvider notifyAccountsChangedExternally]
-[CalOperationQueue managedObjectContextDidSave:]
-[CalAlertChangeMonitor performDeleteAlarms:]
+[CalUserNotificationCenterHelper initialize]
+[CalUserNotificationCenterHelper defaultHelper]
___48+[CalUserNotificationCenterHelper defaultHelper]_block_invoke
-[CalUserNotificationCenterHelper init]
___copy_helper_block_23
-[CalUserNotificationCenterHelper deleteAlarms:]
___48-[CalUserNotificationCenterHelper deleteAlarms:]_block_invoke
-[CalUserNotificationCenter resetCaches]
-[CalUserNotificationCenterCache reset]
-[CalUserNotificationCenterCache setScheduledNotifications:]
-[CalTruthFileRemove dealloc]
-[CalUserNotificationCenterCache setDeliveredNotifications:]
-[CalUserNotificationCenterCache setDisplayedNotifications:]
-[CalUserNotificationCenterHelper _deleteAlarms:]
-[CalUserNotificationCenterHelper contextForNotificationCenter]
-[CalUserNotificationCenter removeAlarmWithID:]
-[CalUserNotificationCenter removeScheduledAlarmWithID:]
-[CalUserNotificationCenter removeScheduledNotificationOfType:withID:forApp:]
-[CalUserNotificationCenter centerForAppID:]
-[CalUserNotificationCenter scheduledNotificationsOfType:forApp:]
-[CalUserNotificationCenter cacheForAppID:]
-[CalUserNotificationCenterCache scheduledNotifications]
-[CalUserNotificationCenter removeFiringAlarmWithID:]
-[CalUserNotificationCenter removeDisplayedNotificationOfType:withID:forApp:]
-[CalUserNotificationCenter displayedNotificationsOfType:forApp:]
-[CalUserNotificationCenterCache displayedNotifications]
-[CalUserNotificationCenter removeMonitoredAlarmWithID:]
-[CalUserNotificationCenter tearDownLocationManagerIfNeeded]
-[CalUserNotificationCenter removeDeliveredAlarmWithID:]
-[CalUserNotificationCenter removeDeliveredNotificationOfType:withID:forApp:]
-[CalUserNotificationCenter deliveredNotificationsOfType:forApp:]
-[CalUserNotificationCenterCache deliveredNotifications]
-[CalManagedObjectContext existingObjectWithIDString:]
-[CalManagedObjectContext objectIDFromString:]
-[NSPersistentStoreCoordinator(CalendarStoreSupport) safeManagedObjectIDFromString:]
-[NSPersistentStoreCoordinator(CalendarStoreSupport) safeManagedObjectIDForURIRepresentation:]
-[CalManagedObjectContext refetchObjectsFromStoreWithObjectIDStrings:entityName:]
-[CalManagedObjectContext refetchObjectsFromStoreWithObjectIDs:entityName:]
-[CalUserNotificationCenterHelper _removeOldAlarms]
-[CalUserNotificationCenter removeNotificationsWithOldVersion]
-[CalUserNotificationCenter isCorrectVersion:]
-[CalUserNotificationCenter currentlyScheduledAlarms]
-[CalUserNotificationCenter currentlyFiringAlarms]
-[CalUserNotificationCenter currentlyDeliveredAlarms]
-[CalUserNotificationCenterHelper _shouldAlarmFire:onScheduledDate:forOccurrenceDate:]
-[CalManagedAlarm associatedItem]
-[CalUserNotificationCenterHelper _isEventOccurrenceOver:occurrenceDate:allowZeroDuration:]
-[CalManagedEvent duration]
-[CalUserNotificationCenterHelper _doesAlarm:haveTriggerOnDate:]
-[CalManagedAlarm hasTriggerOnDate:]
-[CalManagedAlarm triggersBetweenStartDate:endDate:]
-[CalManagedAlarm absoluteTrigger]
-[CalManagedCalendarItem recurrenceRuleString]
-[CalUserNotificationCenterHelper _notAcknowledged:orAcknowledgedBeforeTriggerDate:]
-[CalManagedTask completionDate]
-[CalUserNotificationCenterHelper _commonShouldEventBeShown:forOccurrenceDate:]
-[CalUserNotificationCenterHelper _doesEvent:haveOccurrenceOnDate:]
-[CalManagedTask importantDate]
-[CalManagedTask dueDateAdjustedFromUTC]
-[CalUserNotificationCenterHelper _isPrincipalOrAccountDisabledOrDelegate:forCalendar:]
-[CalUserNotificationCenter monitoredAlarmIDs]
-[CalManagedEvent earliestOccurrenceDateBetweenStartDate:endDate:withOffSet:]
-[CalManagedEvent statusType]
-[CalUserNotificationCenterHelper _removeOldMessages]
-[CalUserNotificationCenter currentlyDisplayedMessages]
-[CalUserNotificationCenter currentlyDeliveredMessages]
-[CalUserNotificationCenterHelper _deleteMessages:]
-[CalManagedAccount refreshIACachedValues]
-[CalManagedExchangeAccount lookupAccountPluginID]
-[CalAccountsProvider pluginIDForExchangeHost:]
-[CalAccountsProvider providerIDForPluginID:]
-[CalManagedAccount(CalAccountMonitor) _changeAffectsPush:]
+[CalManagedAccount enabledForAnyDataTypeKeys]
___46+[CalManagedAccount enabledForAnyDataTypeKeys]_block_invoke
-[CalManagedAccount(CalAccountMonitor) _changeAffectsRefresh:]
-[CalManagedAccount(CalAccountMonitor) _changeAffectsAccountSync:]
-[CalManagedAccount(CalAccountMonitor) _changeAffectsDockTile:]
-[CalManagedAccount validateForUpdate:]
-[CalManagedAccount validateForWrite:]
-[CalManagedExchangePrincipal properties]
-[CalManagedExchangePrincipal type]
-[CalManagedAccount isAutoRefreshed]
-[CalManagedCalDAVAccount lookupAccountPluginID]
-[CalManagedCalendar shareDefaultAlarmSettings]
-[CalManagedBirthdayCalendar color]
+[CalManagedBirthdayCalendar color]
+[CALColorModel initialize]
+[CALColorModel _bootstrapColorNameMapping]
+[CALColorModel _rebuildColors]
+[CALColorModel birthdayCalendarColor]
-[CalManagedCalendar(CalendarSourceIPI) calendarSource]
+[CALSourceFactory defaultFactory]
-[CALSourceFactory init]
-[CALSourceFactory setClass:forType:]
-[CalManagedBirthdayCalendar type]
-[CALSourceFactory sourceWithType:key:]
-[CalManagedSource initWithKey:]
-[CoreCalendarSource initWithKey:]
-[CoreCalendarSource setManagedObjectID:]
-[CoreCalendarSource setBundlePath:]
-[CoreCalendarsManager registerSource:]
-[CoreCalendarSource key]
-[CalManagedCalendar isSubscribed]
-[CalManagedLocalCalendar(CalendarSourceIPI) calendarSource]
-[CalManagedLocalCalendar type]
-[CalLocalCalendarSource setIsEditable:]
-[CalManagedDefaultAlarmSet defaultEventAllDayAlarms]
-[CalManagedDefaultAlarmSet defaultEventTimedAlarms]
-[CalManagedCalDAVCalendar(CalendarSourceIPI) calendarSource]
-[CalManagedCalDAVCalendar type]
-[CalCalDAVCalendarSource initWithKey:]
-[CalRemoteCalendarSource initWithKey:]
-[CalRemoteCalendarSource setSharingStatus:]
-[CalRemoteCalendarSource setCalendarObjectID:]
-[CalCalDAVCalendarSource setTimeZone:]
-[CalCalDAVCalendarSource setCacheControllerPath:]
-[CalManagedCalDAVCalendar isOwnerMe]
-[CalCalDAVCalendarSource setIsOwnerMe:]
-[CalManagedCalDAVCalendar(CalendarSourceIPI) _addressForOwnerWithNoMailFallback]
-[CalCalDAVCalendarSource setOwnerAddress:]
-[CalCalDAVCalendarSource hasNoPrincipal]
-[CalCalDAVCalendarSource setPrincipalUID:]
+[CALAddress addressWithURL:]
-[CALAddress initWithURL:]
-[CALPropertyValue initWithValue:withType:]
-[CALAddress init]
-[CALPropertyValue init]
+[NSURL(URLForNoMailAttendees) URLForNoMail]
-[CALPropertyValue setValue:withType:]
-[CALPropertyValue setCommitStatus:]
-[CALPropertyValue markAsClean]
-[CALAddress setCommonName:]
-[CALPropertyValue addParameter:withValue:]
-[CalManagedExchangeCalendar shareDefaultAlarmSettings]
-[CalManagedExchangeCalendar(CalendarSourceIPI) calendarSource]
-[CalManagedExchangeCalendar type]
-[CalExchangeCalendarSource initWithKey:]
+[CalPersistentOperationProducer registerForContextNotifications]
-[CalExchangeCalendarSource setSessionID:]
-[CalExchangeCalendarSource setHost:]
-[CalExchangeCalendarSource setIsDelegate:]
-[CalExchangeCalendarSource setMeForSource:]
-[CalSubscriptionSession initWithObjectID:]
-[CalSubscriptionSession setUsername:]
-[CalSubscriptionSession setPassword:]
-[CalSubscriptionSession setTryCredentialsOnNextSync:]
-[CalManagedSubscriptionCalendar type]
-[CalManagedSubscriptionCalendar isSubscribed]
+[CalSessionPool sessions]
-[CalPersistentOperationProducer managedObjectContextWillSave:]
-[CalManagedAccount awakeFromSnapshotEvents:]
-[CalPersistence _sendChangedFromRemoteContextNotification:]
-[CalPersistence _URIsFromManagedObjects:]
-[CalPersistence userInfosForManagedChangeNotification:]
-[CalPersistence release]
-[CalPersistentOperationProducer managedObjectContextDidSave:]
+[CalBirthdayListener sharedListener]
-[CalBirthdayListener init]
-[CalABListener init]
-[CalBirthdayListener setNeedsReset:]
-[CalABListener beginListening]
-[CalABListener _addABObserver]
-[CalABListener _configureInBackground]
-[CalBirthdayListener _runUpdateJobIfNecessaryInBackground]
+[CalPublisherManager defaultManager]
___27-[CalBirthdayListener init]_block_invoke
-[CalPublisherManager init]
-[CalBirthdayListener areBirthdaysEnabled]
-[CalPublisherManager setAutoPublishEnabled:]
-[CalPublisherManager scheduleAutoPublish]
-[CalBirthdayListener needsReset]
-[CalBirthdayListener _resetInManagedObjectContext:]
-[CalBirthdayListener findBirthdayCalendarsInContext:createLocalCalendarIfNeeded:]
+[CalManagedBirthdayCalendar entityName]
-[CalBirthdayListener uniquePeopleWithBirthdays]
+[ABAddressBook(CALExtension) sharedAddressBookIfAllowed]
+[ABAddressBook(CALExtension) _haveABEntitlement]
___49+[ABAddressBook(CALExtension) _haveABEntitlement]_block_invoke
-[ABPerson(CALExtension) cp_linkID]
+[CalUnifiedPerson unifiedPersonForPerson:]
-[ABPerson(CALExtension) cp_abUID]
+[CalUnifiedPerson unifiedPersonForPeople:]
-[CalUnifiedPerson setMainPerson:]
-[CalUnifiedPerson setUid:]
-[CalUnifiedPerson setLinkedPeople:]
-[CalUnifiedPerson setLinkID:]
-[CalUnifiedPerson linkID]
-[CalUnifiedPerson uid]
-[ABPerson(CALExtension) cp_isPreferredForName]
-[ABPerson(CALExtension) cp_birthday]
+[CalManagedEvent fetchRequestWithPredicate:inManagedObjectContext:]
+[CalManagedEvent entityName]
+[CalManagedCalendarItem mastersForItems:]
-[CalManagedCalendarItem url]
-[CalUnifiedPerson mainPerson]
-[ABPerson(CALExtension) cp_birthdayEventSummary]
-[ABPerson(CALExtension) cp_birthdayIsYearless]
-[CalUnifiedPerson birthdayCalendarType]
-[CalUnifiedPerson linkedPeople]
-[ABPerson(CALExtension) cp_isFacebookContact]
-[CalBirthdayListener getRidOfFacebookCalendarIfEmpty:]
-[CalBirthdayListener saveEventsAndObtainIDsFor:inContext:]
-[CalManagedObjectContext obtainPermanentIDsForObjects:error:]
-[CalUnifiedPerson dealloc]
-[CalCalDAVTaskManager coreDAVTaskDidFinish:]
-[CalTaskManager taskDidFinish:]
___54-[CalSingleSynchronousTask _setCompletionBlockOnTask:]_block_invoke
-[CalSingleSynchronousTask setError:]
-[CalTaskManager _makeStateTransition]
-[CalSingleSynchronousTask dealloc]
-[CalCalDAVGetAccountPropertiesTaskWrapper getAccountPropertiesTask:completedWithError:]
-[CalCalDAVSynchronousTaskGroup setError:]
-[CalCalDAVSynchronousTaskGroup setCompleted:]
-[CalCalDAVSynchronousTaskGroup error]
-[CalManagedObjectContext refreshObject:mergeChanges:]
-[CalManagedObjectContext(CalPersistenceSupport) isUserContext]
-[CalManagedNode willRefresh:]
-[CalManagedCalDAVPrincipal awakeFromSnapshotEvents:]
-[CalDAVAccountRefreshQueueableOperation(Private) updateCurrentAddresses:newAddressStrings:principal:calendar:context:]
-[CalManagedCalDAVPrincipal isInboxAccessible]
+[CalDAVOfficeHour getOfficeHoursForAccountInfoProvider:principal:inboxURL:taskManager:andCompletionBlock:]
-[CalCalDAVSynchronousTaskGroup dealloc]
-[CalDAVAccountRefreshQueueableOperation(Private) refreshCalendarsForPrincipalCoreDAV:error:]
-[CalCalDAVBasicTaskGroupWrapper taskGroup:didFinishWithError:]
+[CalDAVOfficeHour _updatePrincipal:withOfficeHours:fromTaskGroup:]
+[CalManagedCalendarUserAddress entityName]
+[CalEntityDescription insertNewObjectForEntityForName:inManagedObjectContext:]
-[CalManagedCalendarUserAddress setAddress:]
-[CalManagedObject validateForInsert:]
-[CalManagedObject(CalAccountMonitor) _insertAffectsPush]
-[CalCalDAVCalendarInfoTaskGroupWrapper containerInfoTask:completedWithContainers:error:]
-[CalCalDAVCalendarInfoTaskGroupWrapper setContainers:]
-[CalCalDAVCalendarInfoTaskGroupWrapper containers]
-[CalManagedCalDAVPrincipal setPushTransportDictionary:]
+[CalManagedDefaultAlarmSet defaultAlarmICSDocumentForString:]
-[CalManagedDefaultAlarmSet updateDefaultEventAllDayAlarmsFromICS:]
-[CalManagedDefaultAlarmSet updateDefaultAlarmsFromICSHelper:]
+[CalManagedAlarm entityName]
-[CalManagedAlarm action]
-[CalManagedAlarm emailAddress]
-[CalManagedAlarm message]
-[CalManagedAlarm sound]
-[CalManagedAlarm subject]
-[CalManagedAlarm url]
-[CalManagedAlarm(iCalendarTranslation) importiCalendarComponent:fromDocument:inCalendar:]
-[CalManagedAlarm setUrl:]
-[CalManagedAlarm setIsDefaultAlarm:]
+[CalManagedICSElementProperties entityName]
-[CalManagedICSElementProperties properties]
-[CalManagedICSElementProperties setProperties:]
-[CalManagedDefaultAlarmSet updateDefaultEventAllDayAlarms:]
-[CalManagedDefaultAlarmSet updateDefaultEventAllDayAlarms:processChangesNow:]
-[CalManagedDefaultAlarmSet updateDefaultAlarmsHelperForSet:alarmSetKey:processChangesNow:]
-[CalManagedAlarm isSimilarToAlarm:]
-[CalManagedAlarm isSimilarToAlarmWithAction:sound:emailAddress:url:absoluteTrigger:relativeTrigger:]
-[CalManagedDefaultAlarmSet updateDefaultEventTimedAlarmsFromICS:]
-[CalManagedDefaultAlarmSet updateDefaultEventTimedAlarms:]
-[CalManagedDefaultAlarmSet updateDefaultEventTimedAlarms:processChangesNow:]
-[CalManagedCalDAVPrincipal setSupportsFreebusy:]
-[CalDAVAccountRefreshQueueableOperation(Private) _sharingStatusForContainer:]
+[CalManagedAlarm insertNoneAlarmInManagedObjectContext:]
+[CalEntityDescription insertNewObjectForEntityForName:inManagedObjectContext:obtainPermanentID:]
+[CALDate dateFromICSString:timeZone:]
+[CALDate dateFromICSDateValue:timeZone:]
+[CALDateTime dateWithYear:month:day:hour:minute:second:timeZone:]
+[CALDate(Private) dateWithYear:month:day:hour:minute:second:timeZone:]
+[CALDate(Private) alloc]
-[CALDateTime initWithYear:month:day:hour:minute:second:timeZone:]
-[CALDate(Private) initWithYear:month:day:hour:minute:second:timeZone:]
-[CALDateTime setYear:month:day:hour:minute:second:timeZone:]
-[CALDateTime offsetFromGMT]
-[OurOwnMutableNSDate setCalDate:]
-[OurOwnMutableNSDate timeIntervalSinceReferenceDate]
-[CALDate cdate]
-[CALDateTime addSecondsInGMT:]
+[CoreAlarmTrigger triggerWithDate:]
-[CoreAlarmTrigger initWithDate:]
-[CALDate(CalendarStoreExt) dateType]
-[CALDateTime setTimeZone:]
-[CoreAlarmTrigger date]
-[CALPropertyValue type]
-[CALPropertyValue value]
-[CALDate NSDateWithGMT]
___utcTimeZone_block_invoke
-[CALDate NSDateWithTimeZone:]
-[CalManagedAlarm(iCalendarTranslation) iCalendarElementWithOptions:inCalendar:]
-[CalManagedAlarm(iCalendarTranslation) _iCalendarElementWithOptions:]
-[CalDAVRetrieveSharedCalendarShareesTaskGroupTaskGroupWrapper taskGroup:didFinishWithError:]
-[CalDAVAccountRefreshQueueableOperation(Private) updateSharees:forCalendar:context:]
-[CalManagedCalDAVPrincipal defaultSchedulingCalendar]
-[CalManagedCalDAVCalendar isDefaultSchedulingCalendar]
-[CalManagedCalDAVPrincipal firstEventCalendar]
+[CalManagedNode firstNodeInNodes:ordered:passingTest:]
___47-[CalManagedCalDAVPrincipal firstEventCalendar]_block_invoke
-[CalManagedCalDAVPrincipal shouldDeepRefreshNow]
-[CalManagedCalendar compare:]
+[CalManagedMessage createMessagesForEventsInTheFutureMissingMessagesForPrincipal:]
+[CalManagedEvent fetchRequestForFutureEventsNeedingReplyForCalendars:inContext:]
-[CalDAVAccountRefreshQueueableOperation sendStatistics]
-[CalDAVAccountRefreshQueueableOperation dropPowerAssertion]
-[CalDAVAccountRefreshQueueableOperation holdingPowerAssertion]
-[CalDAVAccountRefreshQueueableOperation powerAssertionID]
-[CalDAVAccountRefreshQueueableOperation finishOperation]
-[CalDAVQueueableOperation finishOperation]
-[CalDAVOperationQueue completeOperation:]
-[CalDAVQueueableOperation startDate]
-[CalDAVQueueableOperation retryCounter]
-[CalDAVQueueableOperation error]
-[CalDAVOperationQueue dequeueOperation:]
-[CalDAVOperationQueue _removeOperationToCountedSet:]
-[CalDAVQueueableOperation removeDependency:]
-[CalDAVOperationQueue detectSyncMalfunctions]
-[CalDAVRefreshDelegateListQueueableOperation performOperation]
-[CalDAVAccountRefreshQueueableOperation dealloc]
-[CalDAVAccountRefreshQueueableOperation tearDown]
-[CalDAVQueueableOperation dealloc]
-[CalTaskManager shutdown]
-[CalTaskManager allTasks]
-[CalTaskManager dealloc]
-[CalDAVRefreshDelegateListQueueableOperation refreshWithExceptionHandling]
-[CalDAVRefreshDelegateListQueueableOperation(Private) refresh]
+[CalDelegateUserInfo infoWithCalDAVDetails:allowWrite:]
-[CalDelegateUserInfo initWithURI:commonName:allowWrite:]
-[CalDelegateUserInfo initWithURI:commonName:permission:]
-[CalDelegateUserInfo initWithURI:commonName:calendarsPermission:tasksPermission:]
-[CalDelegateUserInfo setUri:]
-[CalDelegateUserInfo setCommonName:]
-[CalDelegateUserInfo setCalendarsPermission:]
-[CalDelegateUserInfo setTasksPermission:]
-[CalDelegateUserInfo commonName]
-[CalDelegateUserInfo setDisplayString:]
-[CalDelegateUserInfo setPreferredUserAddress:]
-[CalDelegateUserInfo uri]
-[CalDelegateUserInfo allowWrite]
-[CalDelegateUserInfo setManagedObjectID:]
-[CalDelegateUserInfo dealloc]
___75-[CalDAVRefreshDelegateListQueueableOperation refreshWithExceptionHandling]_block_invoke
-[CalDAVRefreshDelegateListQueueableOperation finishOperation]
-[CalDAVRefreshDelegateListQueueableOperation completionBlock]
-[CalDAVRefreshDelegateListQueueableOperation dealloc]
-[CalDAVRefreshDelegateListQueueableOperation setCompletionBlock:]
+[CalManagedDefaultAlarmSet insertNewDefaultAlarmSetInContext:]
+[CalManagedDefaultAlarmSet entityName]
-[CalManagedCalendar setChecked:]
-[CalManagedRemoteCalendar setIsDelegate:]
-[CalManagedRemoteCalendar setIsEditable:]
-[CalManagedCalDAVCalendar setIsRenameable:]
-[CalManagedCalendar setIsEventContainer:]
-[CalManagedCalendar setIsTaskContainer:]
-[CalManagedNode setColor:]
-[CalManagedCalDAVCalendar setTimeZone:]
-[CoreAlarmTrigger dealloc]
-[CoreAlarmTrigger setLocation:]
-[CALPropertyValue dealloc]
-[CALDateTime dealloc]
-[CALDate dealloc]
-[CalOperationQueue _removeOperationInvokedByQueue:andExecute:]
-[CalOperation dealloc]
-[CalOperationQueue _fetchPersistentOperationsInvokedByQueue]
-[CalOperationQueue _fetchPersistentOperationsInvokedByQueueAndExecute:]
-[CalOperationQueue _persistentOperationsForSessionID:largerThanSequenceNumber:inManagedObjectContext:]
+[CalManagedPersistentOperation entityName]
-[CalOperationQueue _addOperationInvokedByQueue:]
-[CalOperationQueue _addOperationInvokedByQueue:andExecute:]
-[CalExchangeOperation executeInContext:error:]
-[CalExchangeSyncAccountOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeSyncAccountOperation fetchMailbox]
-[CalExchangeGetMailboxOperation initWithSession:]
-[CalExchangeGetMailboxOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeGetMailboxOperation _emailAddressFromResolveNames:needsToMatchPrefix:withBinding:error:]
-[CalExchangeSyncAccountOperation syncPrincipal:binding:error:]
-[CalExchangeSyncAccountOperation syncPrincipalFolderHierarchy:binding:error:]
-[CalManagedPrincipal awakeFromSnapshotEvents:]
-[CalExchangeSyncAccountOperation _fetchRootFolderIdForPrincipal:binding:error:]
-[CalExchangeSyncAccountOperation _fetchDeletedItemsFolderId:mailbox:binding:error:]
+[CalExchangeSyncAccountOperation findFolderResponseShape]
+[CalExchangeSyncAccountOperation findFolderRestriction]
-[CalExchangeSyncAccountOperation updateCalendarsForPrincipal:withFolders:binding:error:]
-[CalExchangeSyncAccountOperation refreshDelegatePrivileges]
-[CalManagedExchangeCalendar validateForUpdate:]
-[CalManagedExchangeCalendar validateForWrite:]
-[CalManagedExchangePrincipal validateForWrite:]
-[CalManagedExchangeCalendar properties]
-[CalManagedRemoteCalendar properties]
-[CalManagedCalendar properties]
-[CalOperation session]
-[CalExchangeSyncFolderItemsOperation initWithSession:folderId:messageTracerUID:]
-[CalExchangeSyncAccountOperation messageTracerName]
-[CalExchangeSyncAccountOperation messageTracerUUID]
-[CalExchangeSyncAccountOperation dealloc]
-[CalOperationQueue _mergeChangesFromContextDidSaveNotificationInvokedByQueue:]
-[CalManagedObjectContext mergeChangesFromContextDidSaveNotification:]
-[CalManagedObjectContext childContexts]
-[CalExchangeSyncFolderItemsOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeSyncFolderItemsOperation folderId]
-[CalExchangeSyncFolderItemsOperation messageTracerName]
-[CalExchangeSyncFolderItemsOperation messageTracerUUID]
-[CalExchangeSyncFolderItemsOperation dealloc]
-[CalManagedCalDAVCalendar validateForInsert:]
-[CalManagedCalDAVCalendar validateForWrite:]
-[CalManagedAlarm validateForInsert:]
-[CalManagedAlarm validateForWrite:]
-[CalManagedCalDAVCalendar properties]
-[CalManagedCalDAVCalendar ownerAddressStrings]
+[CalManagedAlarm(iCalendarTranslation) iCalendarDocumentWithAlarms:]
+[CalTruthFileICSWrite methodWithPath:document:]
-[CalTruthFileICSWrite initWithPath:document:]
-[CalTruthFileICSWrite description]
-[CalManagedCalDAVCalendar(CalAccountMonitor) _insertAffectsPush]
-[CalManagedCalDAVPrincipal isPushAvailable]
-[CalManagedDefaultAlarmSet affectedCalendarIDs]
-[CalManagedAlarm shouldBeScheduled]
-[CalManagedAlarm isNoneAlarm]
-[CALDate NSDate]
-[CalAlertChangeMonitor performFindAndScheduleAlarms:]
-[CalUserNotificationCenterHelper findAndScheduleUpcomingAlarms:]
-[CalManagedObjectContext objectIDsFromStrings:]
-[CalTruthFileICSWrite main]
___39-[CalUserNotificationCenterHelper init]_block_invoke
-[CalUserNotificationCenterHelper _findAndScheduleUpcomingAlarms:]
-[CalUserNotificationCenterHelper _alarmScanRange]
+[CalManagedStore(CalendarSourceIPI) predicateForDefaultAlarmSetsWithRelativeTriggersLargerThan:]
-[CalCalDAVContainerSyncTaskGroupWrapper initWithPrincipal:calendar:calendarSource:]
-[CalCalDAVContainerSyncTaskGroupWrapper setPrincipal:]
-[CalCalDAVContainerSyncTaskGroupWrapper setCalendar:]
-[CalCalDAVContainerSyncTaskGroupWrapper setCalendarSource:]
+[CalManagedStore(CalendarSourceIPI) predicateForStartDate:endDate:calendars:exceptUID:useTravelTime:]
+[CalManagedAlarm addAlarmPrefetchToCalendarItemFetch:]
+[CalManagedObjectContext addPrefetchRelationshipKeyPaths:toFetch:]
-[CalTruthFileICSWrite dealloc]
+[CalDuplicateHandler handleDuplicateEventsAndReturnUniques:]
+[CalDuplicateHandler duplicateHelper:objectsToDelete:clearCTagsForPrincipals:cameFromMultipleCalendars:]
+[CalDuplicateHandler deleteDuplicateItems:clearCTagsForPrincipals:]
+[CalManagedStore(CalendarSourceIPI) tasksWithDueDateBetweenStartDate:endDate:calendars:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) predicateForImportantDate:endDate:calendars:exceptUID:]
-[CalManagedCalendarItem derivedAlarmsProcessChanges:]
-[CalManagedCalendarItem derivedServerDefaultAlarmsProcessChanges:]
-[CalManagedCalendarItem isServerDefaultAlarmDeleted]
-[CalManagedCalendarItem defaultAlarmsDeletedHelper:]
-[CalManagedTask defaultAlarmsBasedOnItemAndPreferencesFromServer:]
-[CalManagedCalendarItem actualAlarms]
-[CalManagedAlarm hasTriggerDateBetweenStartDate:endDate:]
-[CalUserNotificationCenterHelper scheduleAlarms:]
___50-[CalUserNotificationCenterHelper scheduleAlarms:]_block_invoke
-[CalUserNotificationCenterHelper _scheduleAlarms:]
-[CalUserNotificationCenterHelper _datesToScheduleAlarm:]
-[CalManagedAlarm isSnoozed]
-[CalManagedAlarm occurrenceDateForTrigger:]
-[CalUserAlarmNotification initWithAlarm:triggerDate:]
-[CalUserAlarmNotification initWithAlarm:triggerDate:isForLocation:]
-[CalUserAlarmNotification notification]
-[CalManagedCalendarItem location]
-[CalManagedCalendar isBirthday]
-[CalManagedCalendarItem(CalendarSourceIPI) occurrenceID]
-[NSDate(CALDateTimeConversion) CALDateTime]
-[CALDateTime setTimeZone:keepingLocalDate:]
-[CalUserNotificationCenter scheduleAlarmNotification:]
-[CalUserNotificationCenter isDisplayed:]
-[CalUserNotificationCenter isScheduled:]
-[CalUserNotificationCenter isDelivered:]
-[CalUserNotificationCenter notification:isEqualToNotification:]
-[CalUserAlarmNotification dealloc]
-[CalManagedCalendarItem derivedAlarms]
-[CalCalDAVContainerSyncTaskGroupWrapper copyLocalETagsForURLs:inFolderWithURL:]
-[CalCalDAVContainerSyncTaskGroupWrapper etagObjectsForServerFilenames:]
-[CalCalDAVContainerSyncTaskGroupWrapper calendar]
+[CalManagedChangeRequest entityName]
+[CalManagedMoveEntityChangeRequest entityName]
-[CalCalDAVContainerSyncTaskGroupWrapper copyAllLocalURLsInFolderWithURL:]
-[CalCalDAVContainerSyncTaskGroupWrapper containerPath]
-[CalCalDAVContainerSyncTaskGroupWrapper principal]
-[CalCalDAVContainerSyncTaskGroupWrapper etagObjects]
-[CalCalDAVContainerSyncTaskGroupWrapper containerSyncTask:completedWithNewCTag:newSyncToken:addedOrModified:removed:error:]
-[CalCalDAVContainerSyncTaskGroupWrapper processAddedOrModified:removed:]
-[CalCalDAVContainerSyncTaskGroupWrapper numberOfResourcesAffected]
-[CalCalDAVContainerSyncTaskGroupWrapper setNumberOfResourcesAffected:]
-[CalCalDAVContainerSyncTaskGroupWrapper copyCalDAVResourcesToCalCalDAVResources:]
+[CalDAVScheduleChangesProperty initialize]
+[CalDAVScheduleChangesProperty propertyWithItem:]
-[CalCalDAVContainerSyncTaskGroupWrapper calendarSource]
-[CalManagedSource calendarInManagedObjectContext:]
-[CoreCalendarSource managedObjectID]
+[CalDuplicateHandler handleDuplicateEventsAndReturnUniqueMasters:]
-[CalManagedCalendarItem(iCalendarTranslation) importiCalendarComponent:occurrences:fromDocument:inCalendar:options:]
-[CalManagedEvent(iCalendarTranslation) importiCalendarComponent:occurrences:fromDocument:inCalendar:options:deletionBlock:]
-[CalManagedRemoteCalendar isAddressMe:]
-[CalManagedCalendar isAddressInMeCard:]
+[CALIdentityManager defaultManager]
___36+[CALIdentityManager defaultManager]_block_invoke
-[CALIdentityManager init]
-[CALIdentityManager resetCache:]
-[ABPerson(CALExtension) cp_firstEmailAddress]
-[ABPerson(CALExtension) cp_emailWithIdentifier:]
-[CALAddress initWithMailString:]
+[NSURL(URLForNoMailAttendees) URLForMail:]
-[ABPerson(CALExtension) cp_compoundName]
-[NSString(CALNameCleanup) nameCleanup]
-[ABPerson(CALExtension) cp_firstNameFirst]
-[CALIdentityManager private_isOneOfMyEmailURLs:]
___49-[CALIdentityManager private_isOneOfMyEmailURLs:]_block_invoke
-[CalManagedEvent setStartDate:]
-[CalManagedEvent travelDuration]
-[CalManagedEvent updateDurationDerivedProperties]
-[CalManagedEvent setTravelDuration:]
-[CalManagedCalendarItem setDropBoxLocationOverrideBaseURL:]
-[CalManagedCalendarItem setUrl:]
-[CalManagedCalendarItem mostRecentAlarmAcknowledgement]
-[CalManagedCalendarItem derivedLocalDefaultAlarms]
-[CalManagedCalendarItem derivedLocalDefaultAlarmsProcessChanges:]
-[CalManagedCalendarItem isLocalDefaultAlarmDeleted]
-[CalManagedEvent defaultAlarmsBasedOnItemAndPreferencesFromServer:]
-[CalManagedCalendarItem derivedServerDefaultAlarms]
-[CalManagedCalendarItem mostRecentAlarmAcknowledgementForSet:]
+[CalManagedAttachment(iCalendarTranslation) _isManagedAttachmentCalendar:]
-[CalManagedCalendarItem(iCalendarTranslation) importManagedAttachmentsFromComponent:fromDocument:inCalendar:]
-[CalManagedCalendarItem updateAttachmentDerivedData]
-[CalManagedEvent setEndDate:]
-[CalManagedEvent setOrganizerAddress:]
+[CalManagedAttendee entityName]
-[CalManagedAttendee address]
-[CalManagedAttendee(iCalendarTranslation) importiCalendarProperty:inComponent:fromDocument:inCalendar:]
-[CalManagedAttendee setAddress:]
-[CalManagedAttendee validateForInsert:]
-[CalManagedAttendee validateForWrite:]
-[CalManagedEvent updateAttendeeDerivedPropertiesInCalendar:]
-[CalManagedEvent updateAttendeeDerivedPropertiesInCalendar:processPendingChanges:]
-[CalManagedEvent myAttendeeForAttendees:inCalendar:]
-[CalManagedPrincipal calendarUserAddressesAsURLs]
+[CalManagedPrincipal calendarUserAddress:isInCalendarAddressUserSet:]
-[CalManagedEvent updateMyParstatDerivedPropertiesInCalendar:]
+[CalManagedEvent attendeeIconStateForManagedEvent:inManagedCalendar:]
-[CalManagedEvent organizerAddress]
-[CalManagedCalDAVCalendar isOwnerAddress:]
-[CalManagedPrincipal calendarUserAddressIsEquivalentToURL:]
-[CalManagedAttendee needsReplyIgnoringIsOrganizerMe]
+[CalManagedEvent isOrganizerMeForManagedEvent:inManagedCalendar:]
-[CalManagedEvent calculateInvitationModeInCalendar:]
-[CalManagedEvent isAnInvitationInCalendar:]
-[CalManagedCalendarItem setETag:]
-[CalManagedCalendarItem setScheduleTag:]
-[CalManagedCalendarItem setServerFilename:]
-[CalManagedEvent validateForInsert:]
-[CalManagedEvent validateForWrite:]
-[CalCalDAVContainerSyncTaskGroupWrapper copyFileNamesFromPaths:]
-[CalCalDAVContainerSyncTaskGroupWrapper setCTag:]
-[CalManagedCalDAVCalendar setCTag:]
-[CalCalDAVContainerSyncTaskGroupWrapper setSyncToken:]
-[CalManagedCalDAVCalendar setSyncToken:]
-[CalManagedCalendarItem keysOnlyRelevantToNetworkDetails]
___58-[CalManagedCalendarItem keysOnlyRelevantToNetworkDetails]_block_invoke
___47-[CalPersistence managedObjectContextWillSave:]_block_invoke
-[CalManagedRemoteCalendar defaultAlarmsWithIsAllDayEvent:fromServer:]
-[CalManagedRemoteCalendar _defaultAlarmsWithIsAllDayEvent:fromServerForCalendar:fromServerForPrincipal:]
-[CalManagedCalendar(PublishSupport) setNeedsPublish:]
-[CalManagedNode(PublishSupport) setNeedsPublish:]
-[CalManagedCalDAVCalendar validateForUpdate:]
-[CalManagedCalendarItem defaultAlarmSortDescriptors]
-[CalManagedAlarm validateForUpdate:]
-[CalManagedEvent(iCalendarTranslation) iCalendarDocumentWithOptions:]
+[CalManagedCalendarItem(iCalendarTranslation) iCalendarDocumentWithCalendarItems:options:]
-[CalManagedEvent(iCalendarTranslationInternal) _iCalendarElementWithOptions:]
-[CalManagedAttendee(iCalendarTranslation) _iCalendarElementWithOptions:]
___78-[CalManagedEvent(iCalendarTranslationInternal) _iCalendarElementWithOptions:]_block_invoke
-[CalManagedCalendarItem(iCalendarTranslation) _iCalendarElementWithOptions:]
-[CalManagedEvent location]
-[CalManagedCalendarItem didPathChange]
-[CalBadgeMonitor _updateCalendarListBadgeCountsForCalendars:]
___copy_helper_block_214
+[CalBadgeMonitor agentUpdateCalendarListBadgeCountsForCalendars:]
-[CalBadgeMonitor _enqueueUpdateCalendarListBadgeCounts:]
___23-[CalBadgeMonitor init]_block_invoke_2
+[CalBadgeMonitor _agentUpdateCalendarListBadgeCounts:]
-[CalCalDAVContainerSyncTaskGroupWrapper taskGroupFinishedWithError:]
-[CalManagedSource setStatus:]
-[CoreCalendarSource notifyStatusChange]
+[CalManagedMessage fetchRequestWithCalendar:forClass:inManagedObjectContext:]
-[CalCalDAVContainerSyncTaskGroupWrapper hasChanges]
-[CalDAVAccountRefreshQueueableOperation numberOfEventsAffected]
-[CalCalDAVContainerSyncTaskGroupWrapper dealloc]
-[CalUserNotificationCenterHelper _isEventOccurrenceTooFarInFuture:occurrenceDate:]
-[CalManagedEvent hasOccurrenceWithStartDate:]
-[CalManagedEvent occurrencesFromDate:toDate:excludeDetached:]
-[CalManagedEvent occurrencesFromDate:toDate:withExcludingOption:]
-[CalManagedEvent occurrenceHelperFromDate:toDate:withExcludingOption:justChecking:]
-[CalManagedEvent _exceptionsWithIntervalKeysDictionary]
-[CalManagedEvent _occurrenceDatesFromDate:toDate:]
+[CoreRecurrenceRule recurrenceRuleFromICSString:]
-[CoreRecurrenceRule init]
-[CALWeekDayNumber setDay:]
-[CoreRecurrenceRule setByDay:]
-[CoreRecurrenceRule setProperty:withValue:]
-[CoreRecurrenceRule(simpleCache) invalidateCache]
-[CoreRecurrenceRule(simpleCache) setCachedTimeRange:]
-[CoreRecurrenceRule(simpleCache) setCachedStartDate:]
-[CALPropertyMultiValue setSubValue:forKey:]
-[CALPropertyMultiValue hasKey:]
-[CALPropertyValue commitStatus]
-[CoreRecurrenceRule setWeekStart:]
-[CALWeeklyRecurrence fastPathEligible]
-[CoreRecurrenceRule _isUniversallyFastPathIneligible]
-[CoreRecurrenceRule bySetpos]
-[CoreRecurrenceRule byMonth]
-[CoreRecurrenceRule byWeekno]
-[CoreRecurrenceRule byYearDay]
-[CoreRecurrenceRule byMonthDay]
-[CoreRecurrenceRule byHour]
-[CoreRecurrenceRule byMinute]
-[CoreRecurrenceRule bySecond]
-[CoreRecurrenceRule interval]
+[CalManagedCalendarItem withCalendarInTimezoneString:do:]
___58+[CalManagedCalendarItem withCalendarInTimezoneString:do:]_block_invoke
-[CoreRecurrenceRule expandFastPathDatesInCalendar:recurrenceStart:expansionRange:]
-[CoreRecurrenceRule untilDate]
-[CoreRecurrenceRule count]
-[CoreRecurrenceRule _canJumpRecurrenceUnits]
-[CoreRecurrenceRule byDay]
-[CALPropertyMultiValue subValueForKey:]
-[CoreRecurrenceRule _shouldExcludeDate:inCalendar:]
-[CALWeekDayNumber day]
___83-[CoreRecurrenceRule expandFastPathDatesInCalendar:recurrenceStart:expansionRange:]_block_invoke
-[CALWeeklyRecurrence _fastPathDeltaComponentsWithCount:]
-[CalManagedEvent _occurrenceWithOccurrenceDate:fromDate:toDate:exception:withExcludingOption:]
-[CalManagedEvent _endDateForRecurrenceID:]
-[CalManagedCalendarItem allDay]
-[CalEventOccurrence initWithManagedEvent:date:from:to:]
___56-[CalEventOccurrence initWithManagedEvent:date:from:to:]_block_invoke
-[CalManagedEvent(CalendarSourceIPI) occurrenceIDForOccurrenceDate:]
-[CalManagedCalendarItem isFloating]
+[CalManagedEvent(CalendarSourceIPI) stringIDForUTCDateTime:]
+[CalManagedEvent(CalendarSourceIPI) stringIDForFloatingDateTime:]
___66+[CalManagedEvent(CalendarSourceIPI) stringIDForFloatingDateTime:]_block_invoke
___66+[CalManagedEvent(CalendarSourceIPI) stringIDForFloatingDateTime:]_block_invoke_2
-[CalManagedEvent(CalendarSourceIPI) entityID]
-[CalEventOccurrence initWithOccurrenceID:]
-[CalEventOccurrence init]
-[CalEventOccurrence setOccurrenceID:]
-[CalEventOccurrence _updateObjectIDsFromManagedEvent:]
-[CalEventOccurrence setManagedEventObjectID:]
-[CalEventOccurrence setMasterManagedEventObjectID:]
-[CalEventOccurrence setDate:]
-[CalEventOccurrence setInitialStart:]
-[CalEventOccurrence setCachedStart:]
-[CalEventOccurrence setInitialEnd:]
-[CalEventOccurrence setCachedEnd:]
-[CalEventOccurrence setCachedTimeZone:]
-[CalEventOccurrence setCachedEndDateWithoutTimeComponents:]
-[CalEventOccurrence setCachedStartDateWithoutTimeComponents:]
-[CalEventOccurrence setCachedDaysSpanned:]
-[CalEventOccurrence setCachedIsMultiDayTimedEvent:]
-[CalEventOccurrence set__sharedUID:]
-[CalEventOccurrence set__localUID:]
-[CalEventOccurrence setManagedCalendarObjectID:]
___56-[CalEventOccurrence initWithManagedEvent:date:from:to:]_block_invoke_2
-[CalManagedAccount accountProviderID]
-[CalEventOccurrence setAccountImageID:]
-[CalEventOccurrence startDate]
-[CalEventOccurrence cachedStart]
-[CalManagedEvent _occurrencesWithNoRecurrenceRuleFromDate:toDate:withExcludingOption:]
-[CalEventOccurrence initWithManagedEvent:]
___destroy_helper_block_215
-[CalEventOccurrence dealloc]
-[CalEventOccurrence isEphemeral]
-[CalCalDAVInboxSyncTaskGroupWrapper initWithPrincipal:inboxPath:]
-[CalCalDAVInboxSyncTaskGroupWrapper setInboxPath:]
-[CalCalDAVInboxSyncTaskGroupWrapper containerPath]
-[CalCalDAVInboxSyncTaskGroupWrapper inboxPath]
-[CalCalDAVInboxSyncTaskGroupWrapper etagObjectsForServerFilenames:]
+[CalManagedMessage fetchRequestInboxMessagesInPrincipal:]
+[CalManagedMessage notificationTypes]
+[CalManagedMessageChangeRequest inboxDeletesForPrincipalID:inContext:]
+[CalManagedMessageChangeRequest deletesForPrincipalID:type:inContext:]
+[CalManagedMessageChangeRequest entityName]
-[CalCalDAVInboxSyncTaskGroupWrapper processAddedOrModified:removed:]
-[CalCalDAVInboxSyncTaskGroupWrapper setCTag:]
-[CalCalDAVInboxSyncTaskGroupWrapper setSyncToken:]
-[CalDAVAccountRefreshQueueableOperation numberOfInboxEntriesAffected]
-[CalCalDAVInboxSyncTaskGroupWrapper dealloc]
-[CalDAVNotificationContainerSyncTaskGroupWrapper initWithPrincipal:notificationPath:]
-[CalDAVNotificationContainerSyncTaskGroupWrapper setNotificationPath:]
-[CalDAVNotificationContainerSyncTaskGroupWrapper containerPath]
-[CalDAVNotificationContainerSyncTaskGroupWrapper notificationPath]
-[CalDAVNotificationContainerSyncTaskGroupWrapper etagObjectsForServerFilenames:]
+[CalManagedMessage fetchRequestNotificationMessagesInPrincipal:]
+[CalManagedMessageChangeRequest notificationDeletesForPrincipalID:inContext:]
-[CalDAVNotificationContainerSyncTaskGroupWrapper processAddedOrModified:removed:]
-[CalDAVNotificationContainerSyncTaskGroupWrapper setCTag:]
-[CalDAVNotificationContainerSyncTaskGroupWrapper setSyncToken:]
-[CalDAVAccountRefreshQueueableOperation numberOfNotificationsAffected]
-[CalDAVNotificationContainerSyncTaskGroupWrapper dealloc]
-[CalCalDAVContainerSyncTaskGroupWrapper containerSyncTask:retrievedAddedOrModifiedActions:removed:]
+[CalDAVNotificationHandler process:principal:]
+[CalDAVNotificationHandler calendarForServerPath:onPrincipal:]
___42-[CalPublisherManager scheduleAutoPublish]_block_invoke
-[CalPublisherManager(Private) doAutoPublish]
-[CalDAVAccountRefreshQueueableOperation takePowerAssertion]
-[CalDAVAccountRefreshQueueableOperation setPowerAssertionID:]
+[CalMailMonitor registerForContextNotifications]
+[CalDateLocalization uses24HourTime]
+[CalPersistence asyncConnectToPersistenceWithClientXPCWaitingOnGroup:completionBlock:]
+[CalPersistence isFullyInitialized]
___copy_helper_block_281
___destroy_helper_block_282
+[CALDateTime date]
-[NSCalendarDate(CALDateTimeConversion) CALDateTime]
+[CALTimeRange timeRangeForDayEnglobing:]
-[CALTimeRange initForDayEnglobing:]
-[CALDate dateRoundedToDay]
-[CALDate year:month:day:dayOfWeek:dayOfYear:hour:minute:second:]
-[CALDate getCDateInTimeZone:]
-[CALDate timeZone]
-[CALDuration initWithDays:]
-[CALDuration initWithDays:hours:minutes:seconds:]
-[CALDate dateByAddingDuration:]
-[CALDuration rawInterval]
-[CALDate dateByAddingRawInterval:]
-[CALDate copyWithZone:]
-[CALDateTime addYears:months:days:hours:minutes:seconds:]
-[CALTimeRange startDate]
-[CALTimeRange endDate]
-[CALTimeRange initWithStartDate:withEndDate:]
-[CALDate timeIntervalSinceDate:]
-[CALDateTime years:months:days:hours:minutes:seconds:sinceDate:]
-[CALDateTime offsetFromGMTForTimeZone:]
+[CALDuration durationWithRawInterval:]
-[CALDuration initWithRawInterval:]
+[CalDateLocalization hasAMPM]
+[CalDateLocalization sharedDateFormatter]
+[CalChronometry currentTimeZone]
-[NSDate(CalDateLocalization) localizedStringWithFormat:timeZone:]
+[CalDateLocalization dateFormatterForKey:]
+[CalDateLocalization dateFormatters]
+[CalPersistence managedObjectContextForUser]
+[CalEventOccurrenceCache initialize]
-[CalEventOccurrenceCache initWithRange:calendars:inManagedObjectContext:]
-[CalEventOccurrenceCache setManagedObjectContext:]
-[CalEventOccurrenceCache setCalendarIDs:]
-[CalEventOccurrenceCache setPrefetchAttendees:]
-[CalEventOccurrenceCache setGenerationCounter:]
-[CalEventOccurrenceCache setRange:]
-[CalEventOccurrenceCache isValid]
-[CalEventOccurrenceCache range]
-[CalEventOccurrenceCache setStartDate:endDate:calendarIDs:]
-[CalEventOccurrenceCache _lowWaterBufferForNewRange:]
-[CalEventOccurrenceCache bufferRange]
-[CalEventOccurrenceCache requestRange:fromReset:]
-[CalEventOccurrenceCache bestGuessCalendarIDs]
-[CalEventOccurrenceCache calendarIDs]
-[CalEventOccurrenceCache occurrencesInRange:withCalendarIDs:]
+[CalDateLocalization dateIsWeekend:]
+[CalDateLocalization weekdayIsWeekend:]
+[CalDateLocalization weekendDays]
-[CalEventOccurrenceCache occurrencesForDate:]
-[NSDate(CalDateLocalization) localizedStringWithFormat:]
-[CALTimeRange dealloc]
-[CalEventOccurrenceCache resetWithBestGuessForMainWindowCalendars]
-[CalEventOccurrenceCache setBestGuessCalendarIDs:]
-[CalEventOccurrenceCache reset]
-[CalEventOccurrenceCache fullRange]
-[CalEventOccurrenceCache logForStartDate:message:]
-[CalEventOccurrenceCache generationCounter]
-[CalEventOccurrenceCache cacheSerialQueue]
___43-[CalEventOccurrenceCache cacheSerialQueue]_block_invoke
___copy_helper_block_330
___50-[CalEventOccurrenceCache requestRange:fromReset:]_block_invoke
-[CalEventOccurrenceCache _stillWantsRange:]
-[CalEventOccurrenceCache _guessMainWindowCalendarsInContext:]
___62-[CalEventOccurrenceCache _guessMainWindowCalendarsInContext:]_block_invoke
-[CalManagedCalendar shouldShowInPrimaryAccounts]
-[CalManagedExchangePrincipal isRemote]
-[CalManagedCalendar allowEvents]
-[CalManagedGroup isRemote]
-[CalManagedCalDAVPrincipal isRemote]
-[CalManagedCalendar allowReminders]
-[CalEventOccurrenceCache prefetchAttendees]
+[CalEventOccurrenceCache occurrencesBetweenStartDate:endDate:onCalendars:prefetchAttendees:inManagedObjectContext:drainPool:]
-[CALYearlyRecurrence fastPathEligible]
+[NSDate(FloatingDate) dateInTimeZone:fromFloatingDateInGMT:]
___61+[NSDate(FloatingDate) dateInTimeZone:fromFloatingDateInGMT:]_block_invoke
-[CALYearlyRecurrence _recurrenceUnitsToJumpBetween:rangeStart:inCalendar:]
-[CALYearlyRecurrence _fastPathDeltaComponentsWithCount:]
+[CalManagedEvent(CalendarSourceIPI) stringIDForAllDayDate:]
___60+[CalManagedEvent(CalendarSourceIPI) stringIDForAllDayDate:]_block_invoke
___60+[CalManagedEvent(CalendarSourceIPI) stringIDForAllDayDate:]_block_invoke_2
-[CALWeeklyRecurrence _recurrenceUnitsToJumpBetween:rangeStart:inCalendar:]
-[CoreRecurrenceRule setUntilDate:]
-[CoreRecurrenceRule hasProperty:]
-[CoreRecurrenceRule setInterval:]
-[CalManagedEvent _occurrenceForException:onDate:fromDate:toDate:withExcludingOption:]
-[CoreRecurrenceRule setCount:]
-[CALWeekDayNumber setNumber:]
-[CoreRecurrenceRule setByMonth:]
-[NSDate(LegacyTranslation) CALDateInTimeZone:isDateOnly:]
-[NSDate(LegacyTranslation) CALDateTimeInTimeZone:]
+[CALTimeRange timeRangeWithStartDate:withEndDate:]
-[NSDate(LegacyTranslation) CALDateOnlyInGMT]
-[NSDate(LegacyTranslation) CALDateOnlyInTimeZone:]
+[CALDateOnly dateOnlyWithYear:month:day:]
+[CALFloatingDateTime dateWithYear:month:day:hour:minute:second:]
-[CALFloatingDateTime initWithYear:month:day:hour:minute:second:]
-[CALFloatingDateTime setYear:month:day:hour:minute:second:]
-[CALDateOnly setYear:month:day:hour:minute:second:timeZone:]
-[CoreRecurrenceRule occurrencesOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule occurrencesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
+[CALDate dateWithDate:]
-[CALFloatingDateTime setYear:month:day:hour:minute:second:timeZone:]
-[CALFloatingDateTime years:months:days:hours:minutes:seconds:sinceDate:]
-[CALFloatingDateTime fillComparisonCDate:forDate:]
-[CoreRecurrenceRule(simpleCache) isTimeRangeCached:withRecurrenceStart:]
-[CoreRecurrenceRule(simpleCache) addDatesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
-[CALYearlyRecurrence realOccurrencesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
-[CALDate isAfter:]
-[CALFloatingDateTime meetComparisonCondition:withDate:]
-[CALDate yearOfCommonEra]
-[CALFloatingDateTime offsetFromGMT]
-[CoreRecurrenceRule realEndDateOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule cachedEndDateOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule cachedEndDates]
-[CALDate hash]
-[CoreRecurrenceRule computeAndCacheEndDateOnTimeRange:withRecurrenceStart:]
-[CALDate dateByAddingYears:months:days:hours:minutes:seconds:]
-[CALDateTime meetComparisonCondition:withDate:]
-[CALDate isEqual:]
-[CALDate isEqualToDate:]
-[CALFloatingDateTime offsetFromGMTForTimeZone:]
-[CALYearlyRecurrence occurrencesOnYear:withRecurrenceStart:]
-[CALYearlyRecurrence lastSpecifiedRulePartOrder]
-[CoreRecurrenceRule lastSpecifiedRulePartOrder]
-[CoreRecurrenceRule generateByMonthOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule applyRulePart:onArray:withRecurrenceStart:]
-[CoreRecurrenceRule generateByDayOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule generatePositionalByDayOnTimeRange:withRecurrenceStart:]
-[CALWeekDayNumber number]
-[CoreRecurrenceRule numberOfDaysUntilNextOccurrenceOfDay:afterDate:]
-[CALDate dayOfWeek]
-[CALTimeRange includesDate:]
-[CALDate isBeforeOrEqual:]
-[CoreRecurrenceRule generatePeriodicByDayOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule generateTimeRulePartOnArray:withRecurrenceStart:]
-[CoreRecurrenceRule generateSimpleTimeRuleOnTimeRange:withRecurrenceStart:]
-[CALDateTime compare:]
-[CALDate dateWithHour:minute:second:]
-[CALDate monthOfYear]
-[CALDate dayOfMonth]
-[CoreRecurrenceRule filterBySetpos:]
-[CoreRecurrenceRule filterOccurrences:inTimeRange:excludingEndDate:]
-[CALTimeRange includesDateExcludingEndDate:]
-[CALDate isBefore:]
-[CoreRecurrenceRule addRecStartDateIfNeeded:withTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule(simpleCache) setCachedDates:]
-[CoreRecurrenceRule(simpleCache) addCachedDates:]
-[CoreRecurrenceRule(simpleCache) cachedDatesOnTimeRange:]
-[CoreRecurrenceRule numberOfDaysUntilPreviousOccurrenceOfDay:beforeDate:]
-[CoreRecurrenceRule dealloc]
-[CalEventOccurrenceCacheData initWithTimeZoneString:range:calendarObjectIDs:]
-[CalEventOccurrenceCacheData addOccurrences:]
-[CalEventOccurrenceCacheData _updateOccurrencesDictionariesWithOccurrence:]
-[CalEventOccurrence occurrenceID]
-[CalEventOccurrence masterManagedEventObjectID]
-[CalEventOccurrenceCacheData _masterAndMainObjectIDsDifferForOccurrence:]
-[CalEventOccurrence managedEventObjectID]
-[CalEventOccurrenceCacheData _binOccurrence:]
-[CalEventOccurrenceCacheData range]
-[CalEventOccurrence endDate]
-[CalEventOccurrence cachedEnd]
-[CalEventOccurrenceCacheData timeZoneString]
-[CalEventOccurrenceCacheData _addDateToBinnedDates:]
-[CalEventOccurrenceCacheData _insertIndexForDate:]
___51-[CalEventOccurrenceCacheData _insertIndexForDate:]_block_invoke
___destroy_helper_block_331
+[CalBagChangeMonitor initialize]
-[CalBagChangeMonitor registerListeners]
+[CalManagedMigrationGroup entityName]
+[CalBagChangeMonitor enable]
+[CalManagedSubscriptionInfo entityName]
+[CalHolidayCalendarSubscriber defaultSubscriber]
___49+[CalHolidayCalendarSubscriber defaultSubscriber]_block_invoke
-[CalHolidayCalendarSubscriber subscribeToHolidayCalendar]
-[CalHolidayCalendarSubscriber _alreadySubscribedToLocalHolidayCalendar]
+[CalManagedSubscriptionCalendar entityName]
+[CalManagedNode entityName]
-[CalBirthdayListener addBirthdayCalendars]
-[CalManagedGroup compare:]
-[CalEventOccurrenceCache duration]
-[CalEventOccurrenceCache occurrencesForOccurrenceIDs:]
+[CalManagedLocalCalendar localCalendarsGroupTitle]
+[CalManagedGroup otherGroupLocalizedTitle]
-[CalManagedGroup isDelegate]
+[CALColorModel nameOfColor:]
-[NSColor(CALModelAdditions) isAlmostEqual:]
+[CALColorModel colorForName:]
-[CalManagedGroup checked]
-[CalManagedGroup notificationCountForClass:]
-[CalManagedNode isShared]
-[CalManagedNode isSubscribed]
-[CalManagedNode isPublished]
-[CalManagedNode isCalDAVPublished]
-[CalManagedGroup isRenameable]
-[CalManagedExchangePrincipal isRenameable]
-[CalManagedCalDAVPrincipal isRenameable]
-[CalManagedGroup eventCalendars]
-[CalManagedGroup filteredNonEventCalendars:nonReminderCalendars:subscriptionCalendars:sharedToMeCalendars:]
___108-[CalManagedGroup filteredNonEventCalendars:nonReminderCalendars:subscriptionCalendars:sharedToMeCalendars:]_block_invoke
-[CalManagedCalendar shouldDisplayAsEventCalendar]
+[CALColorModel textColorForName:]
-[CalManagedLocalCalendar notificationCountForClass:]
-[CalManagedCalendar isRenameable]
-[CalManagedRemoteCalendar notificationCountForClass:]
-[CalManagedRemoteCalendar isCalDAVPublished]
-[CalManagedExchangeCalendar isRenameable]
-[CalManagedCalDAVCalendar isShared]
-[CalManagedCalDAVCalendar isCalDAVPublished]
-[CalManagedNode notificationCountForClass:]
-[CalManagedSource status]
-[CalManagedBirthdayCalendar isRenameable]
+[CalManagedMessage newMessagesArrayForCalendars:andPrincipals:forClass:fromManagedObjectContext:]
-[CalManagedMessage awakeFromSnapshotEvents:]
-[CalEventOccurrenceCache managedObjectContextDidChange:]
-[CalBagChangeMonitor _managedObjectContextDidChange:]
-[CalBagChangeMonitor isInterestedInContext:]
-[CalManagedMessage compare:]
-[CalManagedMessage closestOccurrenceDate]
-[CalManagedMessage bestChildMessageForDisplayAsInvitation]
-[CalManagedMessage isInvitationIgnoringChildren]
-[CalManagedMessage invitationChildren]
-[CalManagedMessage closestOccurrenceID]
-[CalManagedMessage cachedClosestOccurrenceID]
-[CalManagedEvent(CalendarSourceIPI) occurrenceID]
-[CalManagedCalendarItem startDateAdjustedFromUTC]
-[CalManagedMessage titleString]
-[CalManagedMessage descriptionStringForNotificationCenter:withToFieldIfNeeded:]
-[CalManagedMessage _fromSenderNameString]
-[CalManagedMessage _toDelegateNameString]
-[CalManagedMessage _dateString]
-[CalManagedMessage _senderNameString]
-[CalManagedMessage _senderNameStringForceAB:]
+[ABPerson(CALExtension) cp_peopleMatchingEmailAddress:inAddressBook:]
-[CalManagedMessage _commentString]
-[CalManagedDiff set]
-[CalManagedMessage _didTimeChange]
-[CalManagedMessage _didRecurrenceChange]
-[CALDate(LocalizationExtensions) localizedRelativeWithDateFormatKey:withTimeFormatKey:titlecase:]
-[CALDate dayOfYear]
+[CALDate(LocalizationExtensions) getICUFormatForFormatKey:]
+[CalDateLocalization ICUFormatForKey:]
-[CALDate(LocalizationExtensions) localizedWithICUFormat:]
-[CALDate NSCalendarDate]
-[CalManagedMessage isInvitation]
-[CalManagedMessage _hasInvitationChildButNotInvitation]
+[CalManagedPrincipal fetchRequestForICalDelegatesInManagedObjectContext:]
-[CalManagedNode compareTitle:]
+[CalMeCardListener sharedListener]
-[CalMeCardListener _configureInBackground]
___copy_helper_block_165
-[CalMeCardListener _runUpdateJobIfNecessaryInBackground]
___43-[CalMeCardListener _configureInBackground]_block_invoke
-[CalEventOccurrenceCache _notifySimpleRangeChange:]
-[CalEventOccurrenceCacheData occurrencesForDateBin:]
-[CalDefaultDictionary existingObjectForKey:]
-[CalEventOccurrence myAttendeeStatus]
-[CalEventOccurrence managedCalendarObjectID]
-[CalClientProxy _waitForReady]
-[CalEventOccurrence isAllDay]
-[CalEventOccurrence color]
-[CalEventOccurrence calendar]
-[CalEventOccurrence managedCalendarInUserOrChildContext]
-[CalEventOccurrence _managedObjectContext]
-[CalEventOccurrence localUID]
-[CalEventOccurrence __localUID]
-[CalManagedObjectContext childContextForIdentifier:]
-[CalEventOccurrence _managedCalendarInContext:]
-[CalEventOccurrence needsReply]
-[CalEventOccurrence isStatusMaybe]
-[CalEventOccurrence isStatusDeclined]
-[CalEventOccurrence isEditable]
-[CalEventOccurrence isEditableIgnoringInvitationStatus:]
-[CalEventOccurrence permission]
-[CalEventOccurrence invitationMode]
-[CalEventOccurrence status]
-[CalEventOccurrence title]
-[CalEventOccurrence location]
-[CalEventOccurrence timeZone]
-[CalEventOccurrence cachedTimeZone]
-[CalEventOccurrence accountImageID]
-[CalEventOccurrence hasAttachment]
-[CalEventOccurrence attendeeIconState]
-[CalEventOccurrence travelDuration]
-[CalEventOccurrence calendarSource]
-[CalCalDAVCalendarSource hasCapability:]
-[CalRemoteCalendarSource isEditable]
-[CalRemoteCalendarSource calendarObjectID]
-[CalEventOccurrence isPrivateAndDelegateOrCalendarSharedToMe]
-[CalEventOccurrence isPrivate]
-[CalEventOccurrence calendarServerAccess]
-[CalEventOccurrence duration]
-[CalSubscriptionSession _doSynchronize]
-[CalManagedSubscriptionInfo subscriptionURL]
+[CalSubscriptionOperation canHandleURL:]
-[CalSubscriptionOperation initWithURL:]
+[CalSubscriptionOperation scrubSchemeOnSubscriptionURL:]
-[CalSubscriptionOperation setDelegate:]
-[CalSubscriptionOperation downloadSynchronously]
-[CalSubscriptionOperation setIsSynchronous:]
-[CalSubscriptionOperation download]
-[CalSubscriptionOperation subscriptionURL]
-[CalSubscriptionOperation addHTTPHeadersToRequest:]
-[CalSubscriptionOperation backingCalDAVCalendarInContext:]
-[CalSubscriptionOperation delegate]
-[CalSubscriptionOperation isSynchronous]
-[CalSubscriptionOperation(NSURLConnectionDelegate) connection:willSendRequest:redirectResponse:]
-[CalEventOccurrence calendarOrder]
___destroy_helper_block_166
___57-[CalMeCardListener _runUpdateJobIfNecessaryInBackground]_block_invoke
-[CalMeCardListener _checkIfMeCardOutOfDate]
-[CalMeCardListener _plistPath]
-[CalEventOccurrenceCacheData occurrencesInRange:withCalendarIDs:]
-[CalEventOccurrence hash]
-[CalSubscriptionOperation(NSURLConnectionDelegate) connection:didReceiveResponse:]
-[CalSubscriptionOperation(NSURLConnectionDelegate) connection:didReceiveData:]
-[CalSubscriptionOperation(NSURLConnectionDelegate) connectionDidFinishLoading:]
-[CalSubscriptionOperation setError:]
-[CalSubscriptionOperation postProcess]
-[CalSubscriptionOperation error]
-[CalSubscriptionOperation setDocument:]
-[CalSubscriptionOperation determineContainerTypeForCalendar:]
-[CalSubscriptionOperation setCalendarIsEventContainer:]
-[CalSubscriptionOperation setCalendarIsTaskContainer:]
-[CalSubscriptionSession subscriptionDidFinishLoading:]
-[CalSubscriptionSession tryCredentialsOnNextSync]
-[CalSubscriptionOperation update:]
+[CalManagedAttendee addAttendeePrefetchToCalendarItemFetch:]
-[CalSubscriptionOperation calendar]
-[CalManagedSubscriptionCalendar defaultAlarmsWithIsAllDayEvent:fromServer:]
-[CalManagedSubscriptionCalendar defaultAlarmsWithIsAllDayEvent:]
-[CalEventOccurrence travelRouteType]
-[CalClientProxy calPersistanceNotification:userInfo:]
___54-[CalClientProxy calPersistanceNotification:userInfo:]_block_invoke
-[CoreRecurrenceRule cachedEndDateForRecurrenceStart:]
-[CALDateTime hash]
-[CoreRecurrenceRule generateByMonthDayOnTimeRange:withRecurrenceStart:]
-[CALDate dateRoundedToMonth]
-[CalSession setError:]
+[CalManagedPublication entityName]
-[CalManagedPrincipal setStatusIsBusy:]
-[CalManagedPrincipal statusIsBusy]
___54-[CalClientProxy calPersistanceNotification:userInfo:]_block_invoke_2
-[CalPersistence managedObjectsChangedFromRemoteContext:]
-[CalManagedObjectContext addDeletedObjectIDsFromMerge:]
-[CalManagedObjectContext flattenedTreeOfChildContexts]
-[CalManagedObjectContext parentContext]
+[CALBag defaultBag]
-[CALBag init]
-[CALOccurrencesCache init]
-[CALBag reset:]
-[CALOccurrencesCache flush]
-[CALBag updateAllViews:]
-[CalPersistence calendarPersistenceChangedExternally:]
-[CalSubscriptionOperation displayURL]
-[CalManagedSubscriptionInfo setSubscriptionURL:]
-[CalManagedCalendarItem isDefaultAlarmDeleted]
-[CalManagedEvent defaultAlarmsBasedOnItemAndPreferences]
___54-[CalAlertChangeMonitor managedObjectContextWillSave:]_block_invoke
-[CalManagedEvent validateForUpdate:]
-[CalManagedSubscriptionCalendar willSave]
-[CalManagedSubscriptionInfo properties]
-[CalManagedCalendarItem applyLocalAcknowledgedmentToServer]
-[CalManagedCalendarItem mostRecentLocalDefaultAlarmAcknowledgement]
-[CalManagedCalendarItem applyAcknowledgeDate:toAlarms:]
-[CalManagedCalendarItem dropBoxLocationOverrideBaseURL]
+[CalEventOccurrenceCache calendarsFromIDs:withContext:]
-[CalEventOccurrenceCacheData removeOccurrencesWithManagedObjectIDs:]
-[CalEventOccurrenceCacheData dealloc]
-[CalEventOccurrenceCacheData occurrenceByOcurrenceID]
-[CalEventOccurrenceCache occurrenceForOccurrenceID:]
-[CalEventOccurrenceCacheData occurrenceForOccurrenceID:]
-[CalAlertChangeMonitor performScheduleAlarms:]
-[CalSubscriptionOperation dealloc]
-[CalSession error]
-[CalManagedNode supportsSharing]
-[CalManagedCalDAVCalendar supportsSharing]
-[CalDAVBasicAccountInfoProvider initWithUser:password:principalURL:objectID:]
-[CalDAVBasicAccountInfoProvider setUser:]
-[CalDAVBasicAccountInfoProvider setPassword:]
-[CalDAVBasicAccountInfoProvider setPrincipalURL:]
-[CalDAVBasicAccountInfoProvider setHost:]
-[CalDAVBasicAccountInfoProvider setScheme:]
-[CalDAVBasicAccountInfoProvider setPort:]
-[CalDAVBasicAccountInfoProvider setObjectID:]
-[CalCalDAVAuthenticationTask initWithBasicAccountInfoProvider:]
-[CalCalDAVAuthenticationTask setAccountInfoProvider:]
-[CalCalDAVAuthenticationTask authenticateSynchronously]
-[CalDAVBasicAccountInfoProvider principalURL]
-[CalDAVBasicAccountInfoProvider user]
-[CalDAVBasicAccountInfoProvider accountID]
-[CalDAVBasicAccountInfoProvider shouldFailAllTasks]
-[CalDAVBasicAccountInfoProvider password]
-[CalDAVBasicAccountInfoProvider shouldSendClientInfoHeaderForURL:]
-[CalDAVBasicAccountInfoProvider userAgentHeader]
-[CalDAVBasicAccountInfoProvider identityPersist]
-[CalDAVBasicAccountInfoProvider handleAuthenticateAgainstProtectionSpace:withConnection:]
-[CalSingleSynchronousTask error]
-[CalCalDAVAuthenticationTask dealloc]
-[CalDAVBasicAccountInfoProvider dealloc]
-[CalDAVBasicAccountInfoProvider setServerRoot:]
-[CalDAVBasicAccountInfoProvider setIdentityPersist:]
-[CalDAVBasicAccountInfoProvider setAccountID:]
-[CalDAVBasicAccountInfoProvider setServerComplianceClasses:]
-[CalDAVBasicAccountInfoProvider setAcAccountID:]
-[CalDAVOperationQueue isBusy]
-[CalOperationQueue isBusy]
-[CalManagedAccount accountPluginID]
-[CalNetworkChangeNotifier removeListener:]
+[CalNotification removeObserver:name:]
+[CalNotification removeObserver:name:object:]
-[CalDAVOperationQueue dealloc]
-[CalDAVClientInfoSentry dealloc]
-[CoreCalendarsManager unregisterSource:]
-[CalCalDAVCalendarSource dealloc]
-[CalRemoteCalendarSource dealloc]
-[CoreCalendarSource dealloc]
+[CalManagedPrincipal fetchRequestWithUIDs:inManagedObjectContext:]
-[CalManagedCalDAVPrincipal lastOperationError]
-[CalManagedMessage(ChangeRequestProducer) processForType:inManagedObjectContext:]
+[CalManagedMessageChangeRequest insertDeleteInboxChangeRequestForServerFile:principal:inContext:]
+[CalManagedMessageChangeRequest _insertChangeRequestForServerFile:type:principalUID:inContext:]
-[CalManagedMessage serverFilename]
-[CalManagedExchangePrincipal lastOperationError]
+[CalManagedChangeRequest setSequenceNumberForObject:inManagedObjectContext:]
-[CalDAVChangeRequestsProducer createdScheduleRequestForMessage:]
-[CalManagedMessage eventServerFilename]
+[CalManagedAccount enabledForCalendarKeys]
___43+[CalManagedAccount enabledForCalendarKeys]_block_invoke
-[CalManagedMessage contents]
-[CalManagedMessage isSharedCalendarNotification]
-[CalAlertChangeMonitor performDeleteMessages:]
-[CalUserNotificationCenterHelper deleteMessages:]
+[CalSessionPool processChangeRequests]
-[CalOperationQueue processChangeRequests]
___60-[CalDAVChangeRequestsProducer managedObjectContextDidSave:]_block_invoke
___50-[CalUserNotificationCenterHelper deleteMessages:]_block_invoke
-[CalUserNotificationCenter removeDisplayedMessageWithID:]
-[CalUserNotificationCenter removeDeliveredMessageWithID:]
-[CalManagedObjectContext context:shouldHandleInaccessibleFault:forObjectID:andTrigger:]
-[CalManagedCalDAVPrincipal supportsEventCalendarCreation]
-[CalManagedCalDAVPrincipal accountSupportsCalendarCreation:]
-[CalMailMonitor isInterestedInContext:]
-[CalMailMonitor managedObjectContextWillSave:]
-[CalEventOccurrenceCache managedObjectContextDidSave:]
+[CalPreviousController save]
-[CalTruthFileStore applicationWillTerminate:]
_processExitHandler
-[CalTruthFileStore waitUntilAllOperationsAreFinished]
+[CalPersistence asyncConnectToPersistence]
-[CalDAVBasicAccountInfoProvider scheme]
-[CalDAVBasicAccountInfoProvider host]
-[CalDAVBasicAccountInfoProvider port]
-[CalDAVBasicAccountInfoProvider serverRoot]
-[NSError(CalErrorTypes) isCalCertificateError]
+[CalPersistence defaultCalendarPersistence]
+[CalManagedCalDAVPrincipal isCalDAVPrincipalTitleClaimed:]
+[CalManagedPrincipal fetchRequestWithUID:inManagedObjectContext:]
-[CalManagedGroup awakeFromInsert]
-[CalManagedGroup setChecked:]
+[CalManagedNode nodeWithHighestOrder:]
+[CalManagedNode nodeWithHighestOrder:passingTest:]
___39+[CalManagedNode nodeWithHighestOrder:]_block_invoke
-[CalManagedAccount setIsEnabledForCalendar:]
-[CalManagedAccount setIsEnabledForReminders:]
-[CalManagedAccount setServerURL:]
+[CalAccountMonitor thisIsFirstNetworkAccountToBeAddedInContext:]
-[CalManagedAccount validateForInsert:]
-[CalManagedCalDAVAccount fetchRequestForInsertValidation]
-[CalManagedAccount(CalAccountMonitor) _insertAffectsPush]
-[CalManagedCalDAVPrincipal(CalAccountMonitor) _insertAffectsPush]
-[CalBagChangeMonitor managedObjectContextDidSave:]
-[CalAccountsProvider shouldStorePasswordForCalDAVHost:]
-[CalAccountsProvider iaAListPluginForCalDAVHost:]
-[CALKeychain modifyOrCreateKeychainInformationsForURL:andPassword:]
-[CALKeychain modifyOrCreateKeychainInformationsForURL:realm:andPassword:]
-[CalAccountsProvider isPluginIDSupported:forApp:]
___51-[CalBagChangeMonitor managedObjectContextDidSave:]_block_invoke
-[CALBag managedObjectContextDidSave:]
-[CalEventOccurrenceCache managedObjectContextDidMergeChanges:]
+[CalManagedSearchProperty entityName]
-[CalEventOccurrenceCache setBufferRange:]
-[CalEventOccurrenceCache _highWaterBufferForNewRange:]
+[CalEventOccurrenceCache weeksNotPrunedBehindDirectionOfRangeChange]
-[CalEventOccurrenceCacheData pruneOccurrencesOutsideNewRange:]
-[CalEventOccurrenceCacheData setRange:]
-[CALDailyRecurrence fastPathEligible]
-[CALDailyRecurrence _recurrenceUnitsToJumpBetween:rangeStart:inCalendar:]
-[CALDailyRecurrence _fastPathDeltaComponentsWithCount:]
-[CALDateOnly NSDate]
-[CALFloatingDateTime NSDate]
-[CALFloatingDateTime NSCalendarDate]
-[CalManagedBirthdayCalendar isBirthday]
-[CalManagedEvent birthdayStringForDate:]
___50-[CalEventOccurrenceCache requestRange:fromReset:]_block_invoke_2
-[CalEventOccurrenceCacheData unionNewCacheData:]
-[CalEventOccurrenceCacheData calendarObjectIDs]
-[CalEventOccurrenceCacheData binnedDates]
-[CalEventOccurrenceCacheData _addDateToBinnedDates:nextIndex:]
-[CalEventOccurrenceCacheData allOccurrences]
-[CalManagedCalDAVCalendar willRefresh:]
-[CalEventOccurrenceCache managedObjectContext]
-[CalManagedObjectContext childContextIdentifiers]
___57-[CalEventOccurrenceCache managedObjectContextDidChange:]_block_invoke
-[CalDefaultDictionary removeObjectForKey:]
-[CalUserNotificationCenterCache removeCachedDeliveredNotificationWithID:]
-[CalUserNotificationCenter addDeliveredNotifications:forAppID:]
-[CalDAVScheduleChangesProperty init]
-[CalDAVScheduleChangesProperty setDateStamp:]
-[CalDAVScheduleChangesProperty setAttendeeAddress:]
-[CalDAVScheduleChangesProperty setMasterChange:]
+[CALDate dateFromIsoString:]
+[CALDate dateWithString:calendarFormat:]
-[CALFloatingDateTime initWithString:calendarFormat:]
-[CalDAVScheduleChangesProperty setActionType:]
+[CalDAVOccurrenceChange changeWithItem:]
+[CalDAVOccurrenceChange changeWithOccurrenceID:]
-[CalDAVOccurrenceChange initWithOccurrenceID:]
-[CalDAVOccurrenceChange init]
-[CalDAVOccurrenceChange setIsMaster:]
-[CalDAVOccurrenceChange addChangedProperty:]
-[CalDAVOccurrenceChange didPropertyChange:]
-[CalDAVOccurrenceChange addChanged:named:ofProperty:]
-[CalDAVScheduleChangesProperty addOccurrenceChange:]
-[CalDAVOccurrenceChange isMaster]
-[CalDAVScheduleChangesProperty masterChange]
-[CaliTIPMessage initWithData:filename:eTag:scheduleChanges:]
+[CaliTIPHandler initialize]
+[CaliTIPHandler didDelayWhenProcessing:principal:preferCalendar:]
-[CaliTIPMessage event]
-[CaliTIPMessage calendar]
-[CaliTIPMessage document]
-[CaliTIPMessage allOccurrences]
-[CaliTIPMessage filename]
+[CaliTIPHandler(Private) masterEventWithSharedUID:principal:inManagedObjectContext:withPrefetchDictionary:]
+[CaliTIPHandler(Private) debugStringForEvent:]
+[CaliTIPHandler(Private) replyForEvent:inMessage:masterEvent:principal:]
+[CaliTIPHandler(Private) managedEventForEvent:inCalendar:withMaster:withPrefetchDictionary:]
-[CaliTIPMessage scheduleChanges]
+[CaliTIPHandler(Private) getChangesFromScheduleChanges:event:calendar:managedEvent:]
-[CalDAVScheduleChangesProperty actionType]
+[CaliTIPHandler(Private) getOccurrenceChange:forEvent:inCalendar:]
-[CalDAVScheduleChangesProperty recurrenceIDs]
-[CalDAVOccurrenceChange participationChanged]
-[CalDAVOccurrenceChange didParameterChange:onProperty:]
-[CalDAVOccurrenceChange privateCommentChanged]
-[CalDAVOccurrenceChange attachmentsChanged]
-[CalManagedEvent hasOccurrenceOnOrAfter:includingExceptions:]
-[CaliTIPMessage eTag]
-[CalManagedMessage setETag:]
+[CaliTIPHandler diffForAttendeeAddress:]
+[CalManagedDiff entityName]
-[CalManagedDiff setSet:]
+[CalManagedMessage coalesceAndSetVisibiltyForMessageOnEvent:]
-[CalManagedCalendar setNotificationCount:]
-[CalAlertChangeMonitor performDeliverMessages:]
-[CalUserNotificationCenterHelper deliverMessages:]
-[CaliTIPMessage dealloc]
-[CalDAVScheduleChangesProperty dealloc]
-[CalDAVOccurrenceChange dealloc]
-[CalDAVOccurrenceChange setRecurrenceID:]
___51-[CalUserNotificationCenterHelper deliverMessages:]_block_invoke
-[CalUserNotificationCenterHelper _deliverMessages:]
-[CalUserNotificationCenterHelper _shouldMessageBeShown:]
-[CalManagedMessage isInvitationType]
+[CalEventOccurrenceCache occurrencesBetweenStartDate:endDate:onCalendars:prefetchAttendees:inManagedObjectContext:]
+[CalDateLocalization calendarDayFormatter]
-[NSNumberFormatter(CalDateLocalization) stringFromInteger:]
-[CalEventOccurrenceCache count]
-[CalEventOccurrenceCacheData count]
-[CalEventOccurrenceCache datesWithOccurrences]
-[CalEventOccurrence daysSpanned]
-[CalEventOccurrence cachedDaysSpanned]
-[CoreCalendarSource hasCapability:]
-[CalEventOccurrence creationDate]
-[CalEventOccurrence dateForSorting]
-[CalEventOccurrence startDateWithoutTimeComponents]
-[CalEventOccurrence cachedStartDateWithoutTimeComponents]
-[CalEventOccurrence endDateWithoutTimeComponents]
-[CalEventOccurrence cachedEndDateWithoutTimeComponents]
-[CalEventOccurrence isMultiDayTimedEvent]
-[CalEventOccurrence cachedIsMultiDayTimedEvent]
-[CalExchangeCalendarSource hasCapability:]
-[CalEventOccurrence managedCalendarInContext:]
-[CalEventOccurrenceCacheData emptyCacheData]
-[CalEventOccurrenceCacheData _emptyBins]
-[CalDefaultDictionary removeAllObjects]
+[CALColorModel bestNameForColor:]
+[CALColorModel colorNamesOrderedForAssignment]
+[CALColorModel countOfColor:inArray:]
-[CalManagedCalDAVCalendar applyReasonableDefaultsForNewCalendarInGroup:]
-[CalManagedRemoteCalendar applyReasonableDefaultsForNewCalendarInGroup:]
-[CalManagedCalendar applyReasonableDefaultsForNewCalendarInGroup:]
-[CalManagedCalDAVPrincipal constructNewCalendarPath]
-[CalManagedNode updateOrderToLastOrder]
-[CalManagedCalendar nodesForOrdering]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) processInsertedCalDAVCalendarInManagedObjectContext:]
-[CalManagedCalDAVCalendar calendarPathAppendSlashIfNeeded]
+[CalManagedCalendarChangeRequest insertCalendarChangeRequestWithType:sourceUID:uri:inManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertChangeCalendarColorRequestInManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertChangeCalendarOrderRequestInManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertRenameCalendarRequestInManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertChangeCalendarTimeZoneRequestInManagedObjectContext:]
+[CalManagedCalDAVCalendar calendarSourceWithFallbackToCoreDataForCalendarUID:usingContext:]
-[CalDAVAddCalendarQueueableOperation setUri:]
-[CalDAVAddCalendarQueueableOperation setInboxURI:]
+[CalDAVAddCalendarQueueableOperation generateTimeZoneString:]
-[CalDAVAddCalendarQueueableOperation setPropertiesToSet:]
-[CalDAVChangeRequestsConsumer setLastChangeRequestTypeProcessed:]
+[CalDAVSetPropertyQueueableOperation initialize]
-[CalDAVSetPropertyQueueableOperation setUri:]
-[CalDAVSetPropertyQueueableOperation setPropPatchElement:]
___96-[CalDAVChangeRequestsConsumer _expandProcessChangeRequest:forOperation:inManagedObjectContext:]_block_invoke
-[CalDAVPersistentQueueableOperation enqueue]
-[CalDAVCalendarQueueableOperation configureOperationDependencies]
-[CalDAVPersistentQueueableOperation configureOperationDependencies]
-[CalDAVQueueableOperation enqueue]
-[CalDAVPersistentQueueableOperation sequenceNumber]
-[CalDAVAddCalendarQueueableOperation performOperation]
-[CalDAVAddCalendarQueueableOperation uri]
-[CalDAVAddCalendarQueueableOperation propertiesToSet]
-[CalDAVCalendarQueueableOperation sourceUID]
-[CalDAVQueueableOperation addDependency:]
-[CalDAVQueueableOperation hasDependency:]
-[CalDAVQueueableOperation dependencies]
___55-[CalDAVAddCalendarQueueableOperation performOperation]_block_invoke
-[CalDAVAddCalendarQueueableOperation performComplete]
-[CalDAVPersistentQueueableOperation removeOperationFromPersistence]
-[CalDAVSetPropertyQueueableOperation performOperation]
-[CalDAVSetPropertyQueueableOperation uri]
-[CalDAVSetPropertyQueueableOperation propPatchElement]
-[CalDAVAddCalendarQueueableOperation dealloc]
-[CalDAVCalendarQueueableOperation dealloc]
-[CalDAVPersistentQueueableOperation dealloc]
___55-[CalDAVSetPropertyQueueableOperation performOperation]_block_invoke
-[CalDAVSetPropertyQueueableOperation dealloc]
-[CalManagedExchangeAccount password]
-[CalManagedExchangeAccount existingCredential]
-[CalManagedExchangeAccount protectionSpace]
-[CalExchangeSession connectionHasBeenTested]
-[CalExchangeSession testConnection]
-[CalExchangeSession setConnectionHasBeenTested:]
-[CalManagedExchangeAccount protectionSpaceForUseExternalURL:]
-[CalManagedNode supportsPublishing]
-[CalManagedCalDAVCalendar supportsCalDAVPublish]
-[CalManagedNode isDeletable]
-[CalManagedCalDAVCalendar isSharedToMe]
-[CalManagedCalDAVCalendar isSharedByMe]
+[CALColorModel defaultCalendarColorNames]
-[CalManagedCalDAVPrincipal supportsFreebusy]
+[CALColorModel localizedColorNameForColorName:]
-[NSMutableArray(NSMutableArray_CalGroup_Internal) removeNonEventCalendars]
-[NSMutableArray(NSMutableArray_CalGroup_Internal) _removeTypeWhereTypeIsNonEvents:]
___84-[NSMutableArray(NSMutableArray_CalGroup_Internal) _removeTypeWhereTypeIsNonEvents:]_block_invoke
+[CALDuration durationWithMinutes:]
-[CALEntity init]
-[CALAbstractEntity init]
+[CALEntity makeNewLocalUID]
-[CALEntity setCreationDate:]
+[CALProperty propertyWithName:withValue:withType:]
-[CALProperty initWithName:withValue:withType:]
-[CALProperty addValue:]
-[CALAbstractEntity setProperty:]
-[CALProperty name]
-[CALProperty setCommitStatus:]
-[CALEntity setDropBoxFreeBytes:]
-[CALEntity setUnlistedOtherAttendees:]
-[CALEntity setIsOwnerMe:]
-[CALEntity localUID]
-[CoreEvent setStartDate:]
-[CoreEvent invalidateEntityCaches]
-[CALEntity invalidateEntityCaches]
-[CALEntity(CALRecurrence) updateRecurrenceFlag]
-[CALEntity(CALRecurrence) hasRecurrenceProperties]
-[CALAbstractEntity hasProperty:]
-[CoreEvent releaseCachedEndDate]
-[CALEntity setStartDate:]
-[CALEntity startDate]
-[CALAbstractEntity propertyForName:]
-[CALProperty singleValue]
-[CoreEvent setEndDate:]
-[CALEntity removeProperty:]
-[CALAbstractEntity removeProperty:]
-[CALEntity setSummary:]
-[CALEntity summary]
+[CALProperty propertyWithName:withValue:]
-[CALProperty initWithName:withValue:]
-[CALEntity _setITipNeedsUpd:]
-[CALEntity hasAttendees]
-[CoreEvent setLocations:]
-[CoreEvent setTransparency:]
+[CALPredefinedValue numberWithLong:]
-[CALPredefinedValue initWithLong:]
-[CALEntity setRepository:]
-[CalCalDAVCalendarSource isOwnerMe]
-[CALAbstractEntity setRepository:]
-[CALEntity repository]
-[CALAbstractEntity repository]
-[CALEntity commitInManagedObjectContext:]
-[CALEntity(detachedEntity) isSignificantlyDetached]
-[CoreEvent isOrganizerMe]
-[CALEntity isOwnerMe]
-[CALEntity isOrganizerMe]
-[CALEntity organizer]
-[CALEntity(detachedEntity) isSignificantlyDetachedIgnoringParticipation:]
-[CALAbstractEntity commitStatus]
-[CALEntity(detachedEntity) recurID]
-[CALEntity(detachedEntity) isDetachedEntity]
-[CALEntity commitAndPropogateChanges:inManagedObjectContext:]
-[CALAbstractEntity dirty]
-[CALAbstractEntity hasDirtyProperty:]
-[CALEntity validateIDs]
-[CALEntity sharedUID]
-[CALEntity(ITIPExtensions) invitationMode]
-[CALEntity(ITIPExtensions) isAnInvitation]
-[CALEntity attendeesIncludingUninvited]
+[CalendarStore propertiesIncrementingSequence]
-[CALAbstractEntity hasDirtyPropertyAmong:]
-[CALProperty commitStatus]
-[CALEntity incrementSequence]
-[CALEntity sequence]
-[CALEntity setSequence:]
-[CALEntity setStampDate:]
-[CALAbstractEntity dirtyProperties]
-[CALAbstractEntity deletedProperties]
+[CalendarStore propertiesToIgnoreWhenUpdatingDetachedEvents]
+[CalendarStore propertiesNotToBeLookedUpInParent]
-[CALAbstractEntity dirtySubComponents]
-[CALAbstractEntity deletedSubComponents]
+[CalendarStore propertiesToAlwaysUpdateOnDetachedEvents]
-[CALEntity(parentEntity) childrenEntities]
-[CALAbstractEntity commitInManagedObjectContext:]
-[CoreEvent checkValidity]
-[CoreEvent endDate]
-[CALEntity(CALRecurrence) mainRecurrenceRule]
-[CALEntity(CALRecurrence) recurrenceRules]
-[CALEntity dirty]
-[CALOccurrableEntity managedObjectID]
-[CalManagedSource hasCalendarItemForSharedUID:inManagedObjectContext:]
-[CalManagedSource calendarItemWithSharedUID:inManagedObjectContext:]
-[CalCalDAVCalendarSource addEntity:inManagedObjectContext:]
-[CalCalDAVCalendarSource(Private) addEntity:fromServer:inManagedObjectContext:]
-[CalManagedSource addEntity:inManagedObjectContext:]
-[CalManagedCalendarItem(CalendarSourceIPI) updateWithEntity:inCalendar:]
-[CalManagedEvent(CalendarSourceIPI) updateWithEntity:alarms:inCalendar:]
+[CalManagedPrincipal myAddressInPrincipal:forEvent:]
-[CALEntity attendees]
-[CALEntity stampDate]
-[CALEntity EWSItemID]
-[CALEntity changeKey]
-[CALEntity desc]
-[CALEntity creationDate]
-[CALEntity eTagShouldBeNil]
-[CALEntity url]
-[CALEntity(detachedEntity) masterEntity]
-[CALEntity calendarServerAccess]
-[CALEntity alarms]
-[CALAbstractEntity subComponents]
-[CALEntity isDefaultAlarmDeleted]
-[CalManagedCalendarItem undeleteDefaultAlarms]
-[CALEntity attachments]
-[CALEntity hasDropBox]
-[CALEntity dropBoxLocation]
-[CALEntity dropBoxFreeBytes]
-[CALEntity permission]
-[CALEntity needsServerConfirmation]
-[CoreEvent structuredLocation]
-[CoreEvent travelStartLocation]
-[CoreEvent travelDuration]
-[CoreEvent transparency]
-[CALPredefinedValue longValue]
-[CALEntity status]
-[CalManagedEvent setStatusType:]
-[CALEntity hasMyiTIPStatusChanged]
-[CALEntity alreadySentMarker]
-[CALEntity _ITipNeedsUpd]
-[CALEntity dontSchedule]
-[CALEntity rsvpNeeded]
-[CALEntity privateComment]
-[CoreEvent linkID]
-[CoreEvent isYearlessBirthday]
-[CoreEvent birthdayName]
-[CALEntity attendeeComments]
-[CoreEvent locations]
-[CalManagedEvent setLocations:]
+[CalManagedEvent locationStringFromArray:]
-[CALEntity(CALRecurrence) exceptionDates]
+[CalEventOccurrence changedPropertiesToCheck]
-[CalEventOccurrenceCacheData occurrencesForManagedObjectID:]
___57-[CalEventOccurrenceCache managedObjectContextDidChange:]_block_invoke_2
-[CALOccurrableEntity setManagedObjectID:]
+[CALEntityChangeTracker changeWithType:withEntity:]
-[CALEntityChangeTracker initWithTarget:withAction:]
-[CALChangeTracker(Private) initWithTarget:withAction:]
+[CALBag(CALChangeNotificationManagement) notifyChange:originator:inManagedObjectContext:]
+[CALBag(CALChangeNotificationManagement) notifyChanges:originator:inManagedObjectContext:]
-[CALBag repositoryContentChanged:]
-[CALChangeTracker target]
-[CALChangeTracker action]
-[CALEntity markAsClean]
-[CALAbstractEntity markAsClean]
-[CALProperty markAsClean]
-[CALEntity mainOccurrenceID]
-[CALAbstractEntity privateID]
-[CALEntity getMainOccurrence]
-[CALOccurrableEntity getOccurrenceForStartDate:]
-[CoreEvent correspondingOccurrenceClass]
-[CoreEventOccurrence initWithOccurrableEntity:withStartDate:]
-[CALOccurrence initWithOccurrableEntity:withStartDate:]
-[CALEntity(detachedEntity) parentEntity]
-[CALOccurrence occurrenceID]
-[CALEntity(CALRecurrence) hasRecurrenceData]
-[CALAbstractEntity hasPrivateID]
-[CalEventOccurrence legacyOccurrence]
+[CalEventOccurrence legacyOccurrenceFromOccurrence:]
-[CalEventOccurrence managedEventInUserOrChildContext]
-[CalEventOccurrence _managedEventInContext:]
-[CalManagedEvent(CalendarSourceIPI) entityClass]
+[CoreEvent(CreationFromManagedObject) entityFromManagedObject:]
+[CoreEvent(CreationFromManagedObject) entityFromManagedObject:omitAttendees:]
-[CalManagedCalendarItem(CalendarSourceIPI) isValidManagedObject]
+[CoreEvent event]
-[CoreEvent setLinkID:]
-[CALEntity setDesc:]
-[CALProperty isEqualToProperty:]
-[CALProperty isEqualToProperty:ignoreParameters:]
-[CALProperty isEqualToProperty:ignoreParameters:useCommittedValues:]
-[CALProperty values]
-[CALPropertyValue isEqualToPropertyValue:ignoreParameters:useCommittedValues:]
-[CALEntity setLocalUID:]
-[CALEntity setSharedUID:]
-[CALEntity setEWSItemID:]
-[CALEntity setChangeKey:]
-[CALEntity setURL:]
-[CALEntity setCalendarServerAccess:]
-[CALEntity setPrivateComment:]
-[CALEntity setPermission:]
-[CALEntity setNeedsServerConfirmation:]
-[CALEntity setIsPhantom:]
-[CoreEvent setBirthdayName:]
-[CoreEvent setIsYearlessBirthday:]
-[CalManagedEvent locations]
-[CoreEvent setNeedsReply:]
-[CoreEvent needsReply]
-[CALEntity setStatus:]
+[CoreAlarm(CreationFromManagedObject) entityFromManagedObject:]
+[CoreAlarmTrigger trigger]
-[CoreAlarmTrigger initWithDuration:]
-[CoreAlarmTrigger setDate:]
-[CALPropertyValue removeParameter:]
-[CALPropertyValue hasParameter:]
+[CalManagedAlarm proximityTypeFromString:]
-[CoreAlarmTrigger setProximity:]
-[CoreAlarm initWithTrigger:]
-[CoreAlarm setTrigger:]
+[CALProperty propertyWithName:withPropertyValue:]
-[CALProperty initWithName:withPropertyValue:]
-[CoreAlarm(AlarmUID) generateAlarmUID]
-[CoreAlarm setAlarmUID:]
-[CoreAlarm setIsDefaultAlarm:]
-[CoreAlarm isDefaultAlarm]
-[CALEntity setAlarms:]
-[CALEntity removeAllAlarms]
-[CoreAlarm setOriginEntity:]
-[CALAbstractEntity addSubComponent:duplicateCheck:]
-[CALAbstractEntity setCommitStatus:]
-[CALEntity setOwnerAddresses:]
-[CALEntity setIsSharingSchedulingSupported:]
-[CalEventOccurrence date]
-[CalEventOccurrence _legacyDateFromOccurrenceDate:]
-[CalEventOccurrence isFloating]
-[CalEventOccurrence changedValues]
-[CoreEventOccurrence setRegularOccurrence:]
-[CALOccurrence entity]
-[CALEntity isEditable]
-[CALEntity isEditableIgnoringInvitationStatus:]
-[CALEntity isEditableIgnoringInvitationStatus:ignoringAlarmsOrTravelTime:]
-[CALEntity isPrivateAndDelegateOrCalendarSharedToMe]
-[CALEntity isPrivate]
-[CALOccurrence(Compatibility) entityUID]
-[CalManagedObjectContext _attachChildContext]
-[CalEventOccurrenceCache managedObjectContextDidAddChildContext:]
-[CalManagedObjectContext associatedIdentifiers]
-[CalEventOccurrenceCache _replaceOccurrencesForLocalUIDs:inManagedObjectContext:]
___69-[CalEventOccurrenceCacheData removeOccurrencesWithManagedObjectIDs:]_block_invoke
-[CALEntity alarmsExcludingNone]
-[CoreAlarm isNoneAlarm]
-[CoreAlarm trigger]
-[CoreAlarmTrigger location]
-[CALOccurrence(Compatibility) HACKentity]
-[CALOccurrence(Compatibility) isDetachedEntity]
-[CALEntity attendessWithExcludingOptions:]
-[CALEntity unlistedOtherAttendees]
-[CALEntity hasCalDAVRepository]
-[CALOccurrence(Compatibility) privateComment]
-[CoreEvent isFullDayEvent]
-[CALEntity hideAttendeesForBrokenOwner]
-[CALEntity(detachedEntity) hasRecurrenceOrIsDetached]
-[CALOccurrence(Compatibility) myParticipationStatus]
-[CALEntity(ITIPExtensions) myParticipationStatus]
-[CALEntity hasAttendeeComments]
-[CALEntity invitationStatusPending]
-[CoreCalendarSource isBirthday]
-[CALOccurrence(Compatibility) isPrivateAndDelegateOrCalendarSharedToMe]
-[CoreEventOccurrence summary]
-[CALOccurrence(Compatibility) summary]
-[CALOccurrence(Compatibility) repository]
-[CALOccurrence ableToMoveToCalendar:]
-[CALOccurrence(Compatibility) isEditableIgnoringInvitationStatus:]
-[CALEntity attendeesWithOnlyRoomType]
-[CALOccurrence(Compatibility) isFullDayEvent]
-[CALOccurrence startDate]
-[CoreEventOccurrence endDate]
-[CoreEvent duration]
-[CALOccurrence(Compatibility) entityStartDate]
-[CALOccurrence(Compatibility) hasExchangeRepository]
-[CALEntity hasExchangeRepository]
-[CoreEvent hasEverUsedWorkingElswhere]
-[CalManagedCalDAVPrincipal hasAttachmentCapability]
-[CALEntity myiTIPStatusChanged]
-[CalManagedObjectContext hasPersistentChanges]
-[CalCalDAVCalendarSource queueScanDropBoxContentsForEntity:]
-[CalManagedSource calendarItemWithLocalUID:inManagedObjectContext:]
+[CalManagedCalendarItem fetchRequestWithLocalUID:inManagedObjectContext:]
-[CALProperty dealloc]
-[CoreEventOccurrence dealloc]
-[CALOccurrence dealloc]
-[CALChangeTracker dealloc]
-[CalMailMonitor processCalendarItem:forType:inManagedObjectContext:]
-[CalManagedEvent isOrganizerScheduleAgentNonServer]
+[CaliTIPHandler scheduleWithCalendarItem:changeRequest:]
+[CalManagedChangeRequest insertChangeRequestWithType:calendarItem:sourceUID:inManagedObjectContext:]
-[CalManagedObject(ChangeRequestProducer) _updateParentCR:withDependentCR:]
-[CalDAVChangeRequestsProducer addCreatedScheduleChangeRequest:]
-[CalManagedObjectContext parentContextDidSave:]
-[CalDAVChangeRequestsConsumer makeEntityAddOperation:forSource:]
+[CALEntity(CreationFromManagedObject) entityFromManagedObject:]
-[CalEventOccurrence userOrChildContext]
-[CalDAVEntityQueueableOperation setEntitySharedUID:]
-[CalDAVEntityQueueableOperation setEntityLocalUID:]
-[CalDAVEntityQueueableOperation setServerFilename:]
-[CalDAVEntityQueueableOperation configureWithSource:inObjectContext:]
-[CalDAVEntityQueueableOperation setSource:]
-[CalDAVEntityQueueableOperation setCalendarTitle:]
-[CalDAVEntityQueueableOperation setPrincipalTitle:]
-[CalDAVWriteEntityQueueableOperation setCurrentlyRunningGetEntityTask:]
-[CalDAVWriteEntityQueueableOperation enqueue]
-[CalDAVWriteEntityQueueableOperation configureOperationDependencies]
-[CalDAVEntityQueueableOperation configureOperationDependencies]
-[CalDAVEntityQueueableOperation entityLocalUID]
-[CalClientProxy calDavSharedUIDChanged:]
___copy_helper_block_32
___41-[CalClientProxy calDavSharedUIDChanged:]_block_invoke
___copy_helper_block_28
___destroy_helper_block_33
-[CalDAVEntityQueueableOperation performOperation]
-[CalDAVWriteEntityQueueableOperation performOperation:]
-[CalDAVEntityQueueableOperation source]
-[CalDAVEntityQueueableOperation serverFilename]
-[CoreEvent dealloc]
-[CALEntity dealloc]
-[CALOccurrableEntity dealloc]
-[CALAbstractEntity dealloc]
___41-[CalClientProxy calDavSharedUIDChanged:]_block_invoke_2
___destroy_helper_block_29
-[CalDAVWriteEntityQueueableOperation task:didFinishWithError:]
-[CalDAVWriteEntityQueueableOperation clearSyncMalfunctionPropertiesWithContext:]
-[CalDAVWriteEntityQueueableOperation clearedSyncMalfunctionProperties]
___81-[CalDAVWriteEntityQueueableOperation clearSyncMalfunctionPropertiesWithContext:]_block_invoke
-[CalDAVWriteEntityQueueableOperation setClearedSyncMalfunctionProperties:]
-[CalDAVWriteEntityQueueableOperation finishOperation]
-[CalManagedEvent willRefresh:]
-[CalManagedCalendarItem willRefresh:]
-[CalManagedCalendarItem awakeFromSnapshotEvents:]
-[CalDAVWriteEntityQueueableOperation dealloc]
-[CalDAVEntityQueueableOperation dealloc]
-[CalManagedObjectContext detachFromParentContext]
-[CalManagedObjectContext _detachChildContext:]
___47-[CalManagedObjectContext _detachChildContext:]_block_invoke
-[CalEventOccurrenceCache managedObjectContextDidRemoveChildContext:]
-[CalEventOccurrence description]
-[CALPropertyValue parameters]
+[CalEventOccurrence occurrenceInCalendar:]
-[CalEventOccurrence setIsEphemeral:]
-[CalEventOccurrence setTitle:]
-[CalEventOccurrence setProperty:forKey:]
-[CalEventOccurrence setTimeZone:]
-[CalEventOccurrence propertyForKey:]
-[CalEventOccurrence changedPropertyForKey:]
-[CalEventOccurrence initialStart]
-[CalEventOccurrence setStartDate:]
-[CalEventOccurrence setEndDate:]
-[CalEventOccurrence initialEnd]
-[CalEventOccurrence __sharedUID]
-[CalEventOccurrence url]
-[CalEventOccurrence _hasTimeChange]
-[CalEventOccurrence _hasAnyChange]
-[CalEventOccurrence validateForCommit]
-[CALProperty dirty]
-[CALPropertyValue dirty]
-[CalCalDAVCalendarSource modifyEntity:inManagedObjectContext:]
-[CalCalDAVCalendarSource(Private) modifyEntity:fromServer:inManagedObjectContext:]
-[CalManagedSource modifyEntity:inManagedObjectContext:]
-[CALBag occurrenceForOccurrenceID:inManagedObjectContext:]
-[CalManagedSource entityForSharedUID:inManagedObjectContext:]
-[CALOccurrencesCache getOccurrenceForEntity:occurrenceID:]
-[CALOccurrencesCache occurrenceCacheForEntity:]
-[NSString(CALDateID) dateFromRepresentationID]
-[CALOccurrencesCache createOccurrenceForEntity:startDate:]
-[CALOccurrencesCache addCachedOccurrence:forEntity:]
-[CALOccurrence isEqualToOccurrence:]
+[CoreStructuredLocation(CreationFromManagedObject) entityFromManagedObject:]
-[CoreStructuredLocation initWithGeoURLString:]
-[CoreStructuredLocation setRadius:]
-[CoreStructuredLocation setTitle:]
-[CoreStructuredLocation setAbURLString:]
-[CoreStructuredLocation setAddress:]
-[CoreStructuredLocation setRouteType:]
-[CoreEvent setStructuredLocation:]
-[CoreEvent setTravelStartLocation:]
-[CoreEvent setTravelDuration:]
-[CALDuration humanReadableDescriptionIncludeZero:abbreviate:]
-[CALDuration humanReadableDescriptionIncludeZero:abbreviate:allDayEvent:includeBeforeOrAfter:]
-[CALDuration humanReadableDescriptionIncludeZero:abbreviate:allDayEvent:includeBeforeOrAfter:includeTravel:includeAlert:]
+[CALDurationLocalization localizedStringForDuration:withOptions:]
+[CALDurationLocalization _stringWithDurations:timeUnits:]
+[CALDurationLocalization _localizedStringWithTimeString:rawDuration:options:]
-[CoreStructuredLocation title]
-[CALPropertyValue parameterValueForName:]
-[CoreStructuredLocation coordinates]
-[CoreStructuredLocation radius]
-[CoreStructuredLocation address]
-[CoreStructuredLocation routeType]
-[CalEventOccurrence isValid]
+[CALDuration durationWithDays:]
-[CALDateOnly dateByAddingRawInterval:]
-[CALDateOnly addYears:months:days:hours:minutes:seconds:]
-[CALFloatingDateTime addYears:months:days:hours:minutes:seconds:]
-[CALFloatingDateTime compare:]
-[CALFloatingDateTime NSDateWithGMT]
-[CALFloatingDateTime NSDateWithCalendar:]
+[CALDuration durationWithSeconds:]
-[CoreAlarmTrigger setDuration:]
+[CoreSoundAlarm alarmWithTrigger:]
-[CoreSoundAlarm initWithTrigger:]
-[CALPredefinedValue objCType]
-[CoreSoundAlarm setURL:]
-[CALFloatingDateTime setTimeZone:]
-[CALDateOnly dateByAddingYears:months:days:hours:minutes:seconds:]
-[CoreAlarm shortHumanReadableDescriptionIncludingTravelTimeAndAlert]
-[CoreAlarm isForAllDayEvent]
-[CoreAlarm originEntity]
-[CoreAlarm shortHumanReadableDescriptionIsAllDay:includeTravelTime:includeAlert:]
-[CoreAlarmTrigger isDurationBased]
+[CoreAlarm humanReadableDescriptionForTrigger:isAllDay:travelDuration:includeAlert:]
-[CoreAlarmTrigger isProximity]
-[CoreAlarmTrigger proximity]
-[CoreAlarmTrigger duration]
+[CALDurationLocalization _localizedTimeStringForAllDayEventDuration:includeAlert:]
-[CALFloatingDateTime NSDateWithTimeZone:]
-[CoreAlarm setAcknowledged:]
-[CoreSoundAlarm dealloc]
-[CalEventOccurrence sharedUID]
-[CalEventOccurrence commitDateTimeChangeWithDelegate:]
-[CalEventOccurrence commitDateTimeChangeWithDelegate:withEntityTimeZone:]
-[CalEventOccurrence hasRecurrenceData]
-[CoreEventOccurrence setStartDate:]
-[CoreEventOccurrence invalidateCachedEndDate]
-[CALOccurrence setStartDate:]
-[CoreEventOccurrence setEndDate:]
-[CoreEventOccurrence commitDateTimeChangeWithDelegate:withEntityTimeZone:inManagedObjectContext:]
-[CALOccurrence isMainOccurrence]
-[CALDuration isEqualTo:]
-[CALDateTime isEqualAsDateOnly:]
+[CALDateOnly dateOnlyFromDate:]
-[CoreEvent moveToStartDate:]
-[CALOccurrence resetOccurrenceID]
-[CalDAVChangeRequestsConsumer lastChangeRequestTypeProcessed]
-[CalDAVChangeRequestsConsumer makeEntityChangeOperation:forSource:]
-[CalDAVChangeRequestsConsumer lastLocalUIDProcessed]
-[CALEntity isOrganizerMeAndEditable]
-[CALEntity isCalendarSharedToMe]
-[CalRemoteCalendarSource sharingStatus]
-[CALOccurrence(Compatibility) setSummary:]
-[CALEntity setDontSchedule:]
-[CALEntity _setDontScheduleNoPropagate:]
-[CALOccurrence(Compatibility) locations]
-[CALOccurrence(Compatibility) hasChildren]
-[CALEntity(parentEntity) hasChildren]
+[CALDuration durationWithHours:]
+[CALDuration durationWithDays:hours:minutes:]
-[CoreEvent defaultAlarmsBasedOnItemAndPreferencesInContext:]
-[CalManagedRemoteCalendar defaultAlarmsWithIsAllDayEvent:]
-[CoreAlarm alarmUID]
-[CALEntity myAddress]
-[CALEntity attendeesExcludingOrganizer]
-[CalCalDAVCalendarSource isDelegate]
-[CoreEventOccurrence commitDateTimeChangeWithDelegate:inManagedObjectContext:]
+[CoreAlarmTrigger triggerWithDuration:]
-[CALOccurrence(Compatibility) addAlarm:]
-[CALEntity addAlarm:]
-[CALAbstractEntity addSubComponent:]
-[CALEntity deleteDefaultAlarms]
+[CoreAlarm newNoneAlarm]
-[CALEntity removeAlarm:]
-[CALAbstractEntity removeSubComponent:]
-[CALOccurrence(Compatibility) alarms]
-[CALOccurrence(Compatibility) occurrenceDateID]
-[CALDateTime(CALDateID) representationID]
-[CoreAlarm triggerForOccurrenceDateID:]
-[CoreAlarm occurrenceTriggers]
-[CalManagedAlarm(CalendarSourceIPI) updateWithEntity:omitSyncRecord:]
-[CoreAlarm relatedTo]
-[CoreSoundAlarm URL]
-[CoreAlarm acknowledged]
-[CoreAlarm effectiveTriggerDate]
-[CalManagedCalendarItem deleteDefaultAlarms]
-[CalManagedCalendarItem deleteDefaultAlarmsHelper:forType:]
___60-[CalManagedCalendarItem deleteDefaultAlarmsHelper:forType:]_block_invoke
-[CalManagedAlarm compareAlarmOrder:]
-[CALDuration daysPart]
-[CALDuration hoursPart]
-[CALDuration minutesPart]
-[CalManagedObjectContext clientCount]
-[CalManagedObjectContext _clientCountForChildContext:]
-[CalManagedAlarm willRefresh:]
-[CalUserNotificationCenter isSimilarDelivered:]
-[CalUserNotificationCenter isSnoozeNotification:]
-[CalUserNotificationCenterListener userNotificationCenter:didDeliverNotification:]
-[CalUserNotificationCenterHelper fireAlarm:]
-[CalUserNotificationCenterHelper coalesceAlarmsFromNotification:forCenter:]
-[CalUserNotificationCenterListener userNotificationCenter:shouldPresentNotification:]
___76-[CalUserNotificationCenterHelper coalesceAlarmsFromNotification:forCenter:]_block_invoke
-[CALOccurrence(Compatibility) desc]
-[CALOccurrence(Compatibility) setDesc:]
-[CALEntity(CALRecurrence) hasOnlySingleOccurence]
-[CALOccurrence(Compatibility) url]
-[CoreEventOccurrence isFullDayOccurrence]
-[CoreEvent setFullDayEvent:]
-[CoreEvent setFullDayEvent:withHintTimeRange:]
-[CALDate hourOfDay]
-[CALEntity(parentEntity) moveChildrenToTime:fromTime:]
-[CALEntity(parentEntity) recurrenceIndicesFromStartDate:]
-[CALEntity(CALRecurrence) setExceptionDates:]
-[CALOccurrence discard]
-[CoreAlarm shortHumanReadableDescriptionIsAllDay:]
-[CoreAlarm shortHumanReadableDescriptionIsAllDay:includeTravelTime:]
-[CalCalDAVCalendarSource isCalDAV]
+[CalAutoCompleteOperation alloc]
-[CalAutoCompleteOperation initWithDelegate:]
-[CalAutoCompleteOperation init]
-[CalAutoCompleteOperation setDelegate:]
-[CalAutoCompleteOperation setPrefix:]
-[CalAutoCompleteOperation setAddressBook:]
-[CalAutoCompleteOperation setIncludePrevious:]
-[CalAutoCompleteOperation setAddressesToIgnore:]
-[CalAutoCompleteOperation setRecentEmails:]
-[CalAutoCompleteOperation setLocalEmails:]
-[CalAutoCompleteOperation setLastSearchedSourceID:]
-[CalAutoCompleteOperation lastSearchString]
-[CalAutoCompleteOperation prefix]
-[CalAutoCompleteOperation cancelSearch]
-[CALEntity ownerForEntity]
-[CalCalDAVCalendarSource ownerForSource]
-[CalCalDAVCalendarSource ownerAddress]
-[CalCalDAVCalendarSource meForSource]
+[CALAddress addressWithMailString:]
-[CALEntity attendeeSimilarToAttendee:]
-[CALAddress hasMail]
-[CALAddress address]
-[NSURL(URLForNoMailAttendees) isNoMail]
-[CalAutoCompleteOperation setIgnoredAddresses:]
-[CalAutoCompleteOperation addressBookForQuery:]
-[CalAutoCompleteOperation addressBook]
-[CALAddress justEmailAddress]
-[CALAddress addressURIAsString]
+[ABPerson(CALExtension) cp_personMatchingAddress:inAddressBook:]
+[ABPerson(CALExtension) personCacheKeyForAddress:addressBook:]
-[CALAddress commonName]
-[CalAutoCompleteOperation searchFor:onAccount:findPeople:groups:resources:rooms:recents:]
-[CalAutoCompleteOperation clearLastResults]
-[CalAutoCompleteOperation cancelTimeouts]
-[CalAutoCompleteOperation stopTimeoutCounterForQuery:]
-[IICDQuerySession initWithDelegate:]
-[IIQuerySession initWithDelegate:]
-[IIQuerySession setIncludePrevious:]
-[IIQuerySession setDelegate:]
-[IIQuerySession setQueue:]
-[IIQuerySession queue]
-[IICDQuerySession setSearchSet:]
-[IICDQuerySession setSearchString:]
-[IICDQuerySession setSearchTypes:]
-[IICDQuerySession setCollectionSetName:]
-[CalAutoCompleteOperation includePrevious]
-[IICDQuerySession searchString]
-[IICDQuerySession collectionSetName]
-[IICDQuerySession searchTypes]
-[IICDQuerySession searchSet]
-[IICDQuerySession resetQuery]
-[IIQuerySession resetQuery]
-[IIQuerySession includePrevious]
-[IICDQuerySession loadPreviousSearch:forKey:]
+[CalPreviousController defaultController]
-[CalPreviousController init]
-[CalPreviousController filePath]
-[CalPreviousController checkPath:createIfNecessary:]
-[CalPreviousController itemsWithPrefix:key:locations:]
-[IIQuerySession addressBook]
-[IIQuerySession delegate]
+[IIABQuerySession groupsMatchingPrefix:inAddressBook:]
+[IIABQuerySession peopleMatchingPrefixes:inAddressBook:]
-[CalAddressABPersonWrapper initWithABPerson:address:]
-[CalAddressABRecordWrapper initWithABRecord:address:]
-[CalAddressRecordWrapper initWithRecord:address:]
-[CalAddressWrapper initWithAddress:]
-[CalAddressWrapper setFromPrevious:]
-[CalAddressWrapper setFreeBusyType:]
-[CalAddressABRecordWrapper setAddressBook:]
-[CalAddressWrapper address]
-[IICDQuerySession results]
-[CalAutoCompleteOperation removeIgnoredAddressesFromResults:]
-[CalAutoCompleteOperation addressesToIgnore]
-[CalAutoCompleteOperation removeAddresses:fromResults:]
-[CalAutoCompleteOperation fetchLocalSearchResults]
-[CalAutoCompleteOperation startTimeoutCounterForQuery:]
-[CalAutoCompleteOperation lastSearchedSourceID]
-[CalAutoCompleteOperation isRunning]
-[CALAddress dealloc]
-[CALAddress setManagedObjectID:]
___90-[CalAutoCompleteOperation searchFor:onAccount:findPeople:groups:resources:rooms:recents:]_block_invoke
-[CalAutoCompleteResults setSearchString:]
-[CalAutoCompleteResults setResults:]
-[CalAutoCompleteOperation _handleRecentsResults:]
-[CalAutoCompleteResults results]
-[CalAutoCompleteResults searchString]
-[CalAddressPreviousWrapper initWithFirstName:lastName:displayedName:address:loginName:type:]
-[CalAddressPreviousWrapper completionForSubstring:]
-[CalAddressPreviousWrapper displayedName]
-[CalAddressPreviousWrapper firstName]
-[CalAddressPreviousWrapper lastName]
-[CalAddressPreviousWrapper isLocation]
-[CalAddressPreviousWrapper type]
+[CalAutocompleteAttendee completionForSubstring:displayedName:firstName:lastName:address:isLocation:]
-[CalAddressWrapper setCUAddress:]
-[CalAutoCompleteOperation delegate]
-[CalAutoCompleteOperation gotResults]
-[CalAutoCompleteOperation allResults]
-[CalAddressRecordWrapper completionForSubstring:]
-[CalAddressABPersonWrapper displayedName]
-[CalAddressABPersonWrapper person]
-[CalAddressABRecordWrapper record]
-[CalAddressRecordWrapper record]
-[CalAddressABPersonWrapper firstName]
-[ABPerson(CALExtension) cp_firstName]
-[CalAddressABPersonWrapper lastName]
-[ABPerson(CALExtension) cp_lastName]
-[CalAddressWrapper isLocation]
-[NSString(CalAutocompleteAttendeeExtensions) hasCaseAndDiacriticInsensitivePrefix:]
-[CalAutoCompleteResults dealloc]
-[IIQuerySession cancelQuery]
-[IIQuerySession setIsCancelled:]
-[CalAddressABRecordWrapper dealloc]
-[CalAddressRecordWrapper dealloc]
-[CalAddressWrapper dealloc]
-[CalAddressPreviousWrapper dealloc]
-[IIQuerySession started]
-[CalAutoCompleteOperation startedQuery:]
-[CalDAVPrincipalPropertySearchOperation managedPrincipal]
-[CalDAVPrincipalPropertySearchOperation performSynchronousSearch]
-[CalDAVPrincipalPropertySearchOperation processCompletedRequest:]
+[CalDAVPrincipalResult resultFromResponse:]
-[CalDAVPrincipalResult initWithResponse:]
-[CalDAVPrincipalResult init]
-[CalDAVPrincipalResult setPrincipalPath:]
-[CalDAVPrincipalResult setOverrideBaseURL:]
___42-[CalDAVPrincipalResult initWithResponse:]_block_invoke
-[CalDAVPrincipalResult setFirstName:]
-[CalDAVPrincipalResult setLastName:]
-[CalDAVPrincipalResult setDisplayName:]
-[CalDAVPrincipalResult setResultType:]
-[CalDAVPrincipalResult addEmail:]
-[CalDAVPrincipalResult addCUAddress:]
-[CalDAVPrincipalResult principalPath]
-[CalDAVPrincipalResult resultType]
-[CalDAVPrincipalResult displayName]
-[CalDAVPrincipalResult emailAddresses]
-[CalDAVPrincipalPropertySearchOperation results]
-[CalDAVPrincipalResult encodeWithCoder:]
+[CalDAVPrincipalResult supportsSecureCoding]
-[CalDAVPrincipalResult initWithCoder:]
-[CalDAVPrincipalPropertySearchOperation dealloc]
-[IICDQuerySessionResults setSearchString:]
-[IICDQuerySessionResults setResults:]
-[CalDAVPrincipalResult dealloc]
-[IICDQuerySession _handleOperationResults:]
-[IICDQuerySessionResults results]
-[IICDQuerySessionResults searchString]
-[IICDQuerySessionResults dealloc]
-[CalAddressCDRecordWrapper initWithPrincipalResult:]
-[CalDAVPrincipalResult emailAddress]
-[IIQuerySession finished]
-[IIQuerySession isCancelled]
-[CalAutoCompleteOperation finishedQuery:]
-[CalAddressWrapper description]
-[CalAddressWrapper userType]
-[CalAddressPreviousWrapper isPerson]
-[CalAddressPreviousWrapper isResource]
-[CalAddressWrapper isGroup]
-[CalAddressWrapper cuAddress]
+[CalAutocompleteAttendee attendeeWithFirstName:lastName:commonName:userType:address:emailAddress:abPerson:geoURLstring:]
-[CalAutocompleteAttendee initWithFirstName:lastName:commonName:userType:address:emailAddress:abPerson:geoURLstring:]
+[CalAutocompleteAttendee properURLForAddress:userType:]
-[CalAutocompleteAttendee initWithCALAddress:]
-[CalAutocompleteAttendee setCalAddress:]
-[CalAutocompleteAttendee calAddress]
-[CALAddress setEmail:]
-[CALAddress setUserType:]
+[CoreCalendarUserTypeParameter calendarUserTypeParameterFromCode:]
-[CALAddress setRole:]
+[CALRoleParameter roleParameterFromCode:]
-[CalAutocompleteAttendee setFirstName:]
-[CalAutocompleteAttendee setLastName:]
-[CalAutocompleteAttendee setPerson:]
-[CalAutocompleteAttendee _person]
-[CalAutocompleteAttendee setGeoURLstring:]
-[CalAutocompleteAttendee markAsCleanAndNew]
-[CALEntity isSharingSchedulingSupported]
-[CalAutocompleteAttendee userType]
-[CALAddress userType]
-[CalAutocompleteAttendee ABGroupWrapper]
-[CalAutocompleteAttendee description]
-[CalAutocompleteAttendee emailAddress]
-[CalAutocompleteAttendee commonName]
-[CalAutocompleteAttendee firstName]
-[CalAutocompleteAttendee lastName]
+[CalAutocompleteAttendee descriptionForDisplayedName:firstName:lastName:address:]
-[CalManagedCalendar containerSource]
-[CalManagedGroup sourceIdentifier]
-[CALOccurrence(Compatibility) hasCalDAVRepository]
-[CalAutocompleteAttendee address]
-[CalPreviousController removeAddress:key:]
-[CalAutocompleteAttendee compoundName]
-[CalAutocompleteAttendee loginName]
+[CalPreviousController itemWithAddress:displayName:firstName:lastName:login:attendeeType:]
+[CalPreviousController itemWithAddress:attendeeType:]
+[CalPreviousController stringVersionOfType:]
-[CALDate timeIntervalSince1970]
-[CalPreviousController addItemToList:withKey:]
-[CalPreviousController trimPrevious:]
-[CALOccurrence(Compatibility) hasAttendee:]
-[CALEntity hasAttendee:]
-[CALEntity isOwnerAddress:ignoreMeCard:]
-[CALAbstractEntity isAddressMe:ignoreMeCard:]
-[CALOccurrence(Compatibility) addAttendee:]
-[CALEntity addAttendee:]
-[CALAbstractEntity addPropertyValue:withValue:]
-[CALEntity hasOrganizer]
-[CALAddress participationStatus]
-[CALAddress isSimilarTo:]
-[CALAddress isSameAddressAs:]
-[CALEntity setOrganizer:]
-[CALEntity removeOrganizer]
-[CALEntity setOrganizerType:]
-[CALPropertyValue copyWithZone:]
-[CALAddress setParticipationStatus:]
+[CALParticipationStatusParameter participationStatusParameterFromCode:]
-[CALPropertyValue isEqualToPropertyValue:]
-[CALPropertyValue isEqualToPropertyValue:ignoreParameters:]
-[CALAddress isSelfInvited]
-[CALAddress email]
+[CalAutocompleteAttendee attendeeFromAddress:]
-[CalAutocompleteAttendee setIsOrganizer:]
-[CalAutocompleteAttendee participationStatus]
-[CalCalDAVCalendarSource freeBusyCache]
-[CalFreeBusyCache freeBusyAndEventDetailsForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]
-[CalFreeBusyCache _freeBusyForCUAddresses:forEventSharedUid:inTimeRange:requestFromServer:callbackTo:withSelector:]
+[CalFreeBusyCache numberForFreeBusyType:]
-[CalFreeBusyCache bucketKeyDatesForStartDate:endDate:]
-[CalFreeBusyCache bucketKeyDateForDate:]
-[CalDAVFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]
-[CalFreeBusyOperationInfo initWithAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]
-[CALTimeRange encodeWithCoder:]
-[CALDate encodeWithCoder:]
-[CALDuration encodeWithCoder:]
+[CalFreeBusyCache leastAvailabileFreeBusyTypeForArray:]
+[CALTimeRange supportsSecureCoding]
-[CALTimeRange initWithCoder:]
+[CALDate supportsSecureCoding]
-[CALDate initWithCoder:]
+[CALDuration supportsSecureCoding]
-[CALDuration initWithCoder:]
-[CalManagedCalDAVPrincipal(GetUserAvailability) getUserAvailabilityForEventID:addresses:timeRange:reply:]
-[CalDAVLookupFreeBusyOperation initWithPrincipal:timeRange:attendees:maskingEventSharedUid:]
-[CALEntity hasSendableAttendees]
-[CALEntity isOwnerAddress:]
-[CALAddress(CALAddressExtensions) private_isOneOfMyEmails]
-[CalDAVLookupFreeBusyOperation executeSynchronouslyWithError:]
-[CALIdentityManager private_isOneOfMyEmails:]
+[CalendarStore propertiesMandatingRSVP]
-[CalManagedEvent(CalendarSourceIPI) occurrenceIDFromCommittedValues]
-[CALAddress scheduleStatus]
-[CALAddress scheduleAgent]
-[CALAddress addressForMail]
-[CALAddress rsvp]
-[CalManagedAttendee(CalendarSourceIPI) updateWithEntity:omitSyncRecord:]
-[CALAddress role]
-[CALAddress scheduleForceSend]
-[CALAddress setScheduleStatus:]
-[CALAddress setScheduleAgent:]
-[CALAddress setIsSelfInvited:]
-[CALEntity setAttendees:]
-[CALEntity removeAllAttendees]
+[CALProperty propertyWithName:withPropertyValues:]
-[CALProperty initWithName:withPropertyValues:]
-[CALEntity setMyiTIPStatusChanged:]
-[CALEntity setAlreadySentMarker:]
-[CALEntity setRSVPNeeded:]
-[CALEntity attendeesAreStillNone]
+[CalPersistence userContextForLocalUID:]
-[CalManagedEvent attendeeSet]
-[CalAutocompleteAttendee commonNameOrAddress]
-[CalAutocompleteAttendee hasAddress]
-[CalAutocompleteAttendee scheduleStatus]
-[CalAutocompleteAttendee commonNameOrEmailAddress]
-[CalAutocompleteAttendee isOrganizer]
-[CalAutocompleteAttendee role]
-[CALAbstractEntity isAddressMe:]
-[CalAutocompleteAttendee dealloc]
-[CalAutocompleteAttendee setUID:]
-[CalAutocompleteAttendee setABGroupWrapper:]
-[CoreEvent isOrganizerOwner]
-[CalAutocompleteAttendee isEqual:]
-[CalAutocompleteAttendee UID]
-[CalFreeBusyOperationInfo matchesSharedUid:andTimeRange:]
-[CALTimeRange includesOrEqualsTimeRange:]
-[CalFreeBusyOperationInfo containsAddress:]
+[CalDAVFreeBusyResponseReader addSuccessFreeBusySpansToDictionary:fromICS:]
+[CalDAVFreeBusyResponseReader eventDetailArrayFromICS:]
-[CalDAVLookupFreeBusyOperation freeBusySpans]
-[CalDAVLookupFreeBusyOperation userEventArrays]
-[CalDAVLookupFreeBusyOperation dealloc]
___copy_helper_block_55
-[CalFreeBusyOperationInfo cancelled]
-[CalFreeBusyCache freeBusyOperationWithInfo:spans:details:otherInfos:error:]
-[CalFreeBusyOperationInfo addresses]
-[CalFreeBusyOperationInfo eventSharedUid]
-[CalFreeBusyOperationInfo timeRange]
-[CalFreeBusyCache cacheFreeBusy:forCUAddress:event:timeRange:]
-[CalFreeBusyCache _insertSpanFrom:to:withValue:intoTree:]
-[CALRedBlackTree nodeAtOrBelowKey:]
-[CALRedBlackTree _recursiveLargestNodeWithKeyLessThanOrEqualTo:fromNode:]
-[CALRedBlackTree removeObjectsStartingAt:endingBefore:]
-[CALRedBlackTree _recursiveTraverseKeysFromNode:intoArray:startingAtOrAfterKey:stoppingBeforeKey:]
-[CALRedBlackTree setObject:forKey:]
-[CALRedBlackTree _recursiveInsertNode:fromNode:]
-[CALRedBlackTree _rebalanceFromNode:]
-[CalFreeBusyCache _markForExpirationFrom:to:forCUAddress:event:]
-[CalFreeBusyCache cacheEventDetailsArray:forCUAddress:]
-[CalFreeBusyCache knownFreeBusyAndEventDetailsForCUAddresses:forEventSharedUid:inTimeRange:]
-[CALRedBlackTree nodesStartingAt:endingBefore:]
-[CALRedBlackTree _recursiveTraverseFromNode:intoArray:startingAtOrAfterKey:stoppingBeforeKey:]
+[CALRedBlackNode CALRedBlackNodeWithKey:value:]
-[CALRedBlackNode initWithKey:value:]
-[CALRedBlackNode key]
-[CALRedBlackNode value]
-[CalFreeBusyOperationInfo perfermCallbackWith:]
___destroy_helper_block_56
-[CalFreeBusyOperationInfo dealloc]
-[CALRedBlackNode dealloc]
-[CALEntity possibleMeForEntity]
-[CALEntity(ITIPExtensions) handleMeCaseInAttendees]
-[CALPredefinedValue copyWithZone:]
-[CALEntity(ITIPExtensions) forceNeedsActionOnNoneAttendees]
-[CALAddress setRSVP:]
-[CALEntity commitWithoutBumpInManagedObjectContext:]
-[CalManagedAttendee uniqueKeyForObject]
-[CalManagedAttendee justEmailAddress]
-[CalManagedEvent isInvitationStatusPending]
-[CalManagedEvent(iTIP) sendiTIP:changeRequest:]
-[CalManagedEvent(iTIP) sendiTIP:withInfo:changeRequest:]
-[CalManagedEvent(iCalendarTranslation) iCalendarDocumentWithMethod:options:]
-[CalManagedEvent(iTIP) _sendCalDAViTIP:changeRequest:]
-[CalPreviousController saveAll]
-[CalDAVFreeBusyCache _calDAVChangeQueuedAnyThread:]
___52-[CalDAVFreeBusyCache _calDAVChangeQueuedAnyThread:]_block_invoke
-[CalFreeBusyCache clearCacheExceptForSharedUIDs:]
-[CalDAVWriteEntityQueueableOperation getTask:data:error:]
-[CalDAVWriteEntityQueueableOperation currentlyRunningGetEntityTask]
-[CalManagedCalendarItem applyServerAcknowledgementToLocal]
-[CalManagedCalendarItem mostRecentServerDefaultAlarmAcknowledgement]
-[CalManagedSource entityForLocalUID:inManagedObjectContext:]
-[CalManagedEvent isAnyAttendeeMeInCalendar:]
-[CaliTIPMessage masterEvent]
-[CaliTIPMessage occurrences]
+[CaliTIPHandler(Private) preProcessRequestOccurrences:forEvent:principal:]
+[CaliTIPHandler(Private) myAddressInPrincipal:forEvent:]
+[CaliTIPHandler(Private) doScheduleChanges:applyToEvent:inCalendar:]
-[CalDAVScheduleChangesProperty isCreate]
+[CaliTIPHandler(Private) iTIPCompletionBlockForPrincipal:context:]
+[CaliTIPHandler(Private) validateOrganizerMatches:managedEvent:]
-[CaliTIPMessage localImport]
+[CaliTIPHandler(Private) calculateDiffsForEvent:inMessage:managedEvent:]
+[CaliTIPHandler diffsFromCalDAVOccurrenceChange:]
+[CaliTIPHandler(Private) isAddressMe:forPrincipal:]
-[CaliTIPMessage data]
-[CalManagedMessage updateContentsWithData:]
+[CalManagedMessageContents entityName]
-[CALOccurrence(Compatibility) isPrivate]
-[CalLocation(CoreStructuredLocation) legacyLocation]
-[CoreStructuredLocation setDisplayName:]
-[CALOccurrence(Compatibility) setLocations:]
-[CALOccurrence(Compatibility) setStructuredLocation:]
+[CalManagedLocation entityName]
-[CalManagedLocation(CalendarSourceIPI) updateWithLocation:]
-[CoreStructuredLocation abURLString]
-[CoreStructuredLocation displayName]
+[CalLocation(CoreStructuredLocation) locationFromLegacyLocation:]
-[CalManagedAttendee validateForUpdate:]
-[CalManagedAttendee willRefresh:]
-[CALEntity(ITIPExtensions) isMeInAttendees]
-[CoreCalendarSource isSourceInSameAccount:]
-[CALOccurrence ableToMovePreservingAttendeesToCalendar:]
-[CalManagedEvent allowAttendeePreservingMoveToCalendar:]
-[CoreCalendarSource isExchange]
-[CoreCalendarSource isCalDAV]
-[CalExchangeCalendarSource isSourceInSameAccount:]
-[CalExchangeCalendarSource isExchange]
-[CalCalDAVCalendarSource isSourceInSameAccount:]
-[CalCalDAVCalendarSource isSourceInSameAccount:ignoringOwner:]
-[CALEntity attendeeWithAddress:]
-[CALEntity attendeeWithAddress:fromAttendees:]
+[CaliTIPHandler(Private) deleteAndCreateChangeRequestForMessage:principal:context:]
-[CalDAVDeleteInboxFileQueueableOperation performOperation]
-[CalDAVDeleteInboxFileQueueableOperation useCoreDAV]
-[CalDAVDeleteInboxFileQueueableOperation task:didFinishWithError:]
-[CalDAVDeleteInboxFileQueueableOperation dealloc]
-[CALOccurrence(Compatibility) setMyParticipationStatus:]
-[CALEntity(ITIPExtensions) setMyParticipationStatus:]
-[CALOccurrence(Compatibility) setMyRSVPStatus:]
-[CALEntity(ITIPExtensions) setMyRSVPStatus:]
-[CALOccurrence(Compatibility) invitationMode]
+[CaliTIPHandler _findOrMakeMessageForEvent:inContext:]
-[CalManagedMessage setIsIntentionallyReplyToAll:]
-[CalManagedMessage isIntentionallyReplyToAll]
-[CalManagedEvent(CalendariTIP) createExceptionsAndMessages:forConflicts:sender:]
+[CaliTIPHandler removeMessages:]
-[CalManagedEvent(CalendariTIP) _finishImplicitReplyOnMasterEvent:forEvents:status:putInCalendar:]
-[CalManagedChangeRequest addDependentChangeRequest:]
+[CalManagedChangeRequestDependency entityName]
-[CalFreeBusyCache _cacheExpiryTimerFired]
+[CalSpotlight newQueryForMDQueryString:calendars:]
+[CalSpotlight managedCalendarItemResultsForQuery:startIndex:endIndex:context:]
___43-[CalManagedEvent filenameWithoutExtension]_block_invoke
___43-[CalManagedEvent filenameWithoutExtension]_block_invoke_2
-[CALRedBlackTree dealloc]
-[CalDAVRefreshDelegateListQueueableOperation(Private) addDelegate:toPrincipal:inContext:]
-[CalManagedPrincipal setIsDelegate:]
-[CalManagedCalDAVPrincipal setIsWritable:]
-[CalSubscriptionSession dealloc]
-[CalSession dealloc]
-[CALAddress addressForCommonName]
-[CalAddressCDRecordWrapper cuAddress]
-[CalAddressCDRecordWrapper record]
-[CalDAVPrincipalResult preferredCUAddress]
-[CalAddressWrapper compare:]
-[CalAddressWrapper fromPrevious]
-[CalAddressWrapper sortString]
-[CalAddressCDRecordWrapper displayedName]
-[CalAddressCDRecordWrapper firstName]
-[CalDAVPrincipalResult firstName]
-[CalAddressCDRecordWrapper lastName]
-[CalDAVPrincipalResult lastName]
-[CalAddressCDRecordWrapper isPerson]
-[CalAddressCDRecordWrapper isLocation]
+[CalDAVFreeBusyResponseReader calculateFreeBusySpansWithProperties:]
+[CalDAVFreeBusyResponseReader freeBusySpanForPeriod:type:]
-[CALFreeBusyTime initWithTimeRange:]
-[CALFreeBusyTime setFreeBusyType:]
-[CalFreeBusyEventDetails setTitle:]
-[CalFreeBusyEventDetails setStartTime:]
-[CalFreeBusyEventDetails setEndTime:]
-[CalFreeBusyEventDetails setUid:]
-[CALFreeBusyTime encodeWithCoder:]
-[CalFreeBusyEventDetails encodeWithCoder:]
+[CALFreeBusyTime supportsSecureCoding]
-[CALFreeBusyTime initWithCoder:]
-[CALFreeBusyTime dealloc]
+[CalFreeBusyEventDetails supportsSecureCoding]
-[CalFreeBusyEventDetails initWithCoder:]
-[CALFreeBusyTime freeBusyTimeRange]
-[CALFreeBusyTime freeBusyType]
-[CALRedBlackTree removeObjectForKey:]
-[CALRedBlackTree _recursiveRemoveNodeWithKey:fromNode:isDone:]
-[CalFreeBusyEventDetails startTime]
-[CalFreeBusyEventDetails endTime]
+[CalManagedLocalCalendar singletonContainerSource]
___51+[CalManagedLocalCalendar singletonContainerSource]_block_invoke
-[CalVirtualSource initWithTypeString:displayOrder:localizedTitle:]
-[CalVirtualSource typeString]
-[CalVirtualSource title]
-[CalVirtualSource sourceIdentifier]
-[CalVirtualSource managedObjectID]
-[CalVirtualSource isDelegate]
-[CalVirtualSource displayOrder]
-[CalVirtualSource supportsEmailValidation]
-[CalVirtualSource isEnabledForEvents]
-[CalVirtualSource isEnabledForReminders]
-[CalVirtualSource supportsEventCalendarCreation]
-[CalVirtualSource supportsTaskCalendarCreation]
-[CalManagedBirthdayCalendar containerSource]
+[CalManagedBirthdayCalendar singletonContainerSource]
___54+[CalManagedBirthdayCalendar singletonContainerSource]_block_invoke
-[CalManagedSubscriptionCalendar containerSource]
+[CalManagedSubscriptionCalendar singletonContainerSource]
___58+[CalManagedSubscriptionCalendar singletonContainerSource]_block_invoke
-[CalManagedCalDAVPrincipal typeString]
-[CalManagedGroup displayOrder]
-[CalManagedPrincipal isEnabledForEvents]
-[CalManagedPrincipal isEnabledForReminders]
-[CalManagedCalDAVPrincipal supportsTaskCalendarCreation]
-[CalManagedCalDAVPrincipal supportsEmailValidation]
-[CalManagedExchangePrincipal typeString]
-[CalManagedGroup supportsEventCalendarCreation]
-[CalManagedGroup supportsTaskCalendarCreation]
-[CalManagedGroup supportsEmailValidation]
-[CalManagedCalendar calendarIdentifier]
-[CalManagedCalendar sharingStatusString]
-[CalManagedCalendar sharedOwnerAddress]
-[CalManagedCalendar sharedOwnerName]
-[CalManagedCalendar prePublishURL]
-[CalManagedCalendar publishURL]
-[CalManagedCalendar defaultOrganizerNameForNewItems]
+[CALAddress(CALAddressExtensions) private_localEmailMe]
-[CALIdentityManager private_localEmailMe]
-[CalManagedCalendar defaultOrganizerAddressForNewItems]
-[CalManagedCalendar defaultOrganizerIsMeForNewItems]
-[CalManagedCalendar displayOrder]
-[CalVirtualSource isFrozen]
-[CalManagedBirthdayCalendar sharees]
-[CalManagedCalendar allowsContentModifications]
-[CalManagedCalendar isShareable]
-[CalManagedLocalCalendar containerSource]
-[CalManagedLocalCalendar sharees]
-[CalManagedCalDAVCalendar sharingStatusString]
-[CalManagedCalDAVCalendar sharedOwnerAddress]
-[CalManagedCalDAVCalendar sharedOwnerName]
-[CalManagedRemoteCalendar prePublishURL]
-[CalManagedRemoteCalendar publishURL]
-[CalManagedCalDAVCalendar defaultOrganizerNameForNewItems]
-[CalManagedCalDAVCalendar defaultOrganizerAddressForNewItems]
-[CalManagedCalDAVCalendar defaultOrganizerIsMeForNewItems]
-[CalManagedSharee name]
-[CalManagedSharee URL]
-[CalManagedCalDAVCalendar isShareable]
-[CalManagedRemoteCalendar defaultOrganizerNameForNewItems]
-[CalManagedRemoteCalendar defaultOrganizerAddressForNewItems]
-[CalManagedExchangeCalendar sharees]
-[CalManagedExchangeCalendar isDeletable]
-[CalManagedSubscriptionCalendar sharees]
+[CalManagedMessage(SharedCalendarInviteNotifications) sharedCalendarInvitesForClass:principals:context:]
+[CalManagedTask fetchRequestWithPredicate:inManagedObjectContext:]
-[CalManagedCalendarItem isEvent]
-[CalManagedTask isReminder]
-[CalManagedCalendarItem URL]
-[CalManagedTask priorityNumber]
-[CalManagedCalendarItem lastModifiedDate]
-[CalManagedCalendarItem timeZoneObject]
-[CalManagedCalendarItem recurrenceDateUnadjustedFromUTC]
-[CalManagedCalendarItem startDateUnadjustedFromUTC]
-[CalManagedCalendarItem organizerName]
-[CalManagedCalendarItem organizerURL]
-[CalManagedCalendarItem organizedByMe]
-[CalManagedCalendarItem container]
-[CalManagedCalendarItem alarmSet]
-[CalManagedCalendarItem allAlarms]
-[CalManagedCalendarItem attendeeSet]
-[CalManagedTask dueDateUnadjustedFromUTC]
-[CalManagedTask orderNumber]
-[CalManagedTask statusCompleteNotByDate]
-[CalManagedTask canEditRecurrence]
___34-[CalManagedCalendarItem alarmSet]_block_invoke
-[CalManagedAlarm sharedUID]
-[CalManagedAlarm absoluteDate]
-[CalManagedAlarm relativeOffset]
-[CalManagedAlarm acknowledgedDate]
-[CalManagedAlarm actionString]
-[CalManagedAlarm soundName]
-[CalManagedAlarm proximityString]
-[CalManagedAlarm structuredLocation]
+[CLLocation(CLLocationString) coreLocationFromURLString:]
-[NSDate(MidnightHelpers) midnightInCalendar:]
+[CalManagedLocalCalendar entityName]
-[CalManagedLocalCalendar isLocal]
+[CalManagedExchangeCalendar entityName]
+[CalManagedCalDAVCalendar enableChangeRequestNotifications]
-[CalManagedRemoteCalendar setPublishURL:]
-[CalManagedTask order]
-[CalManagedTask setPriorityNumber:]
-[CalManagedCalendarItem setRecurrenceRuleString:]
-[CalManagedCalendarItem setURL:]
-[CalManagedCalendarItem setAllDay:]
-[CalManagedCalendarItem setTimeZoneObject:]
-[CalManagedCalendarItem setLastModifiedDate:]
-[CalManagedCalendarItem setStartDateUnadjustedFromUTC:]
-[CalManagedCalendarItem setStartDate:]
-[CalManagedCalendarItem setOrganizerName:]
-[CalManagedCalendarItem setOrganizerURL:]
-[CalManagedTask setDueDateUnadjustedFromUTC:]
-[CalManagedTask setCompletionDate:]
-[CalManagedTask setCompletedDate:]
-[CalManagedTask setOrderNumber:]
-[CalManagedCalendarItem(iCalendarTranslation) iCalendarDocumentWithOptions:]
-[CalManagedTask(iCalendarTranslationInternal) _iCalendarElementWithOptions:]
+[CalManagedCalendarItem(iCalendarTranslation) icsDateForDate:timeZone:allDay:]
-[CalManagedTask(CalendarSourceIPI) entityClass]
+[CALTodo(CreationFromManagedObject) entityFromManagedObject:]
+[CALTodo todo]
-[CALTodo setOrder:]
-[CALTodo setRecurrenceDescription:]
-[CALTodo setCompletionDate:]
-[CALTodo setTimeZone:]
-[CALTodo setPriority:]
-[CALTodo setDueDate:]
-[CALTodo dealloc]
-[CalManagedAlarm setStructuredLocation:]
-[CALTodo dueDate]
-[CALTodo cleanUp]
+[CoreDisplayAlarm alarmWithTrigger:withDesc:]
-[CoreDisplayAlarm initWithTrigger:withDesc:]
-[CoreDisplayAlarm initWithTrigger:]
-[CoreDisplayAlarm setDesc:]
-[NSDate(MidnightHelpers) deltaDays:inCalendar:]
+[CalManagedSharee entityName]
-[CalManagedSharee(ChangeRequestProducer) processForType:inManagedObjectContext:]
-[CalDAVUpdateShareesQueuableOperation setShareesToUpdate:]
-[CalDAVUpdateShareesQueuableOperation setShareesToRemove:]
-[CalDAVUpdateShareesQueuableOperation shareesToUpdate]
-[CalDAVUpdateShareesQueuableOperation performOperation]
+[CalManagedSharee arrayOfShareesWithAddresses:inCalendar:inManagedObjectContext:]
-[CalManagedSharee calDAVCalendarServerUserItem]
-[CalManagedSharee calDAVCalendarServerInviteStatus]
-[CalManagedSharee calDAVCalendarServerAccessLevel]
-[CalDAVUpdateShareesQueuableOperation shareesToRemove]
___56-[CalDAVUpdateShareesQueuableOperation performOperation]_block_invoke
-[CalDAVUpdateShareesQueuableOperation dealloc]
___copy_helper_block_31
___destroy_helper_block_32
-[CalDAVRemoveCalendarQueueableOperation setUri:]
-[CalDAVRemoveCalendarQueueableOperation setInboxURI:]
-[CalDAVRemoveCalendarQueueableOperation configureOperationDependencies]
-[CalDAVRemoveCalendarQueueableOperation performOperation]
-[CalDAVRemoveCalendarQueueableOperation useCoreDAV]
-[CalDAVRemoveCalendarQueueableOperation uri]
-[CalDAVRemoveCalendarQueueableOperation deleteTask:completedWithError:]
-[CalDAVRemoveCalendarQueueableOperation finishOperation]
-[CalDAVRemoveCalendarQueueableOperation dealloc]
+[CALBag defaultBagInitialized]
+[CALBag shutdownDefaultBag]
+[CALBag removeClientOnView:]
+[CALBag createToDoView:inManagedObjectContext:]
-[CALBag createToDoView:inManagedObjectContext:]
+[CALBag createToDoView:withTargetRepositories:inManagedObjectContext:]
-[CALBag createToDoView:withTargetRepositories:inManagedObjectContext:]
+[CALBag createAlarmView:inManagedObjectContext:]
-[CALBag createAlarmView:inManagedObjectContext:]
+[CALBag createEventView:withTargetRepositories:asActiveView:inManagedObjectContext:]
-[CALBag createEventView:withTargetRepositories:asActiveView:inManagedObjectContext:]
+[CALBag createEventView:withTargetRepositories:inManagedObjectContext:]
+[CALBag createEventView:inManagedObjectContext:]
-[CALBag createEventView:inManagedObjectContext:]
+[CALBag createMultipleOccurrencesView:inManagedObjectContext:]
+[CALBag createSearchView:withValue:withType:matchedProperty:withTargetRepositories:inManagedObjectContext:]
-[CALBag finalize]
-[CALBag dealloc]
-[CALBag createView:withQuery:inManagedObjectContext:]
-[CALBag createView:withQuery:withTargetRepositories:inManagedObjectContext:]
-[CALBag createView:withQuery:withTargetRepositories:asActiveView:inManagedObjectContext:]
-[CALBag createMultipleOccurrencesView:inManagedObjectContext:]
-[CALBag internal_createAlarmView:inManagedObjectContext:]
-[CALBag internal_createView:withQuery:inManagedObjectContext:]
-[CALBag internal_createView:withQuery:withTargetRepositories:inManagedObjectContext:]
-[CALBag internal_createView:withQuery:withTargetRepositories:asActiveView:inManagedObjectContext:]
-[CALBag internal_createMultipleOccurrencesView:inManagedObjectContext:]
-[CALBag activateView:withInitialNotification:inManagedObjectContext:]
-[CALBag deactivateView:]
-[CALBag addClientOnView:]
-[CALBag removeClientOnView:]
-[CALBag disable:]
-[CALBag enable:]
-[CALBag flushOccurrenceCache]
-[CALBag managedObjectContextDidReset:]
-[CALBag searchRepository:withView:inManagedObjectContext:]
-[CALBag searchRepository:forEntities:withView:inManagedObjectContext:]
-[CALBag updateAllAlarmViews]
-[CALBag updateViewsForRepository:inManagedObjectContext:]
-[CALBag resetView:inManagedObjectContext:]
-[CALBag resetTimeBasedView:inManagedObjectContext:]
-[CALBag resetOccurrenceBasedView:inManagedObjectContext:]
-[CALBag resetOccurrenceBasedView:fromEntities:inManagedObjectContext:]
-[CALQuery(VeryPrivate) postChangeNotification:]
-[CALPropertyQuery description]
+[CALPropertyQuery propertyQueryWithPropertyName:operator:value:]
-[CALPropertyQuery initWithPropertyName:operator:value:]
-[CALPropertyQuery copyWithZone:]
-[CALPropertyQuery propertyName]
-[CALPropertyQuery value]
-[CALPropertyQuery operator]
-[CALPropertyQuery stringMatches:]
-[CALPropertyQuery dateMatches:]
-[CALPropertyQuery matchesEntity:]
-[CALPropertyQuery matchesOccurrence:]
-[CALQuery description]
+[CALQuery initialize]
-[CALQuery isEqual:]
-[CALQuery init]
+[CALQuery queryWithIndexedString:]
-[CALQuery initWithIndexedString:]
+[CALQuery queryWithPropertyQueries:]
-[CALQuery initWithPropertyQueries:]
+[CALQuery queryWithPropertyQuery:]
-[CALQuery initWithPropertyQuery:]
+[CALQuery queryWithTargetRepositories:]
-[CALQuery initWithTargetRepositories:]
+[CALQuery queryWithEntityType:]
-[CALQuery initWithEntityType:]
+[CALQuery queryWithIndexedString:propertyQueries:]
-[CALQuery initWithIndexedString:propertyQueries:]
+[CALQuery queryWithIndexedString:targetRepositories:]
-[CALQuery initWithIndexedString:targetRepositories:]
+[CALQuery queryWithPropertyQuery:targetRepositories:]
-[CALQuery initWithPropertyQuery:targetRepositories:]
+[CALQuery queryWithPropertyQueries:targetRepositories:]
-[CALQuery initWithPropertyQueries:targetRepositories:]
+[CALQuery queryWithIndexedString:propertyQueries:targetRepositories:searchProperty:]
-[CALQuery initWithIndexedString:propertyQueries:targetRepositories:searchProperty:]
-[CALQuery copyWithZone:]
-[CALQuery dealloc]
-[CALQuery setIndexedString:]
-[CALQuery indexedString]
-[CALQuery setPropertyQuery:]
-[CALQuery setPropertyQueries:]
-[CALQuery propertyQueries]
-[CALQuery targetRepositoriesEqualTo:]
-[CALQuery setTargetRepositories:]
-[CALQuery targetRepositories]
-[CALQuery matchesRepository:]
-[CALQuery isForAllRepositories]
-[CALQuery matchesPropertyQueriesOnEntity:]
-[CALQuery matchesPropertyQueriesOnOccurrence:]
-[CALQuery setEntityType:]
-[CALQuery entityType]
-[CALQuery setSearchProperty:]
-[CALQuery searchProperty]
-[CALAbstractView init]
-[CALAbstractView isActive]
-[CALAbstractView description]
-[CALAbstractView occurrencesIndex]
-[CALAbstractView occurrences]
-[CALAbstractView name]
-[CALAbstractView setName:]
-[CALAbstractView postDetailledNotifications]
-[CALAbstractView setPostDetailledNotifications:]
-[CALAbstractView dealloc]
-[CALAbstractView(CALViewPrivate) reset:]
-[CALAbstractView(CALViewPrivate) setActive:]
-[CALAbstractView(CALViewPrivate) incrementClientCount]
-[CALAbstractView(CALViewPrivate) decrementClientCount]
-[CALAbstractView(CALViewPrivate) noClients]
-[CALAbstractView(CALViewPrivate) removeEntitiesFromResults:]
-[CALAbstractView(CALViewPrivate) setStorageFromArray:]
-[CALAbstractView(CALViewPrivate) updateResults:fromEntities:]
-[CALAbstractView(CALViewPrivate) setResults:]
-[CALAbstractView(CALViewPrivate) fireContentChangeNotification]
-[CALAbstractView(CALViewPrivate) fireContentChangeNotificationWithAddedOccurrences:removedOccurrences:modifiedOccurrencesOld:modifiedOccurrencesNew:]
-[CALView init]
-[CALView initWithTimeRange:withQuery:withTargetRepositories:]
-[CALView description]
-[CALView query]
-[CALView timeRange]
-[CALView isObservingRepository:]
-[CALView changeRepositoriesTo:]
-[CALView changeQueryTo:]
-[CALView changeTimeRangeTo:]
-[CALView updateQuery:inManagedObjectContext:]
-[CALView updateSearchQueryForIndex:withEntityType:matchedProperty:inManagedObjectContext:]
-[CALView updateTargetRepositories:inManagedObjectContext:]
-[CALView updateTimeRange:inManagedObjectContext:]
-[CALView updateTimeRange:forceUpdate:inManagedObjectContext:]
-[CALView updateTimeRangeNoNotification:]
-[CALView updateTimeRange:withTargetRepositories:inManagedObjectContext:]
-[CALView updateTimeRange:withQuery:inManagedObjectContext:]
-[CALView updateTimeRange:withQuery:withTargetRepositories:inManagedObjectContext:]
-[CALView expandEntity:onSource:withCache:]
-[CALView nextOccurrenceAfter:]
-[CALView dealloc]
-[CALView(CALViewPrivate) setQuery:]
-[CALView(CALViewPrivate) setTimeRange:]
-[CoreAlarmView expandEntity:onSource:withCache:]
-[CoreAlarmView nextAlarmToTriggerAfter:]
-[CALMultipleOccurrencesView occurrenceIDs]
-[CALMultipleOccurrencesView updateOccurrenceIDs:inManagedObjectContext:]
-[CALMultipleOccurrencesView dealloc]
-[CALMultipleOccurrencesView(CALMultipleOccurrencesViewPrivate) initWithOccurrences:]
-[CALPreconfiguredDetachDelegate initWithAction:]
+[CALPreconfiguredDetachDelegate preconfiguredDetachWithAction:]
-[CALPreconfiguredDetachDelegate decideDetachmentFor:withOccurrence:]
-[CALDuration description]
+[CALDuration durationWithDays:hours:]
+[CALDuration durationWithDays:hours:minutes:seconds:]
+[CALDuration durationWithDurationRoundedToDay:]
+[CALDuration durationWithDurationWithoutDayPart:]
-[CALDuration initWithHours:]
-[CALDuration initWithMinutes:]
-[CALDuration initWithSeconds:]
-[CALDuration initWithDays:hours:]
-[CALDuration initWithDays:hours:minutes:]
-[CALDuration initWithDurationRoundedToDay:]
-[CALDuration initWithDurationWithoutDayPart:]
-[CALDuration durationRoundedToDay]
-[CALDuration setRawInterval:]
-[CALDuration secondsPart]
-[CALDuration isEqual:]
-[CALDuration isLongerThan:]
-[CALDuration isNegative]
-[CALDuration inverse]
-[CALDuration copyWithZone:]
-[CALDuration humanReadableDescription]
-[CALDuration humanReadableDescriptionIncludeZero:]
+[CALWeekDuration durationWithWeeks:]
-[CALWeekDuration initWithWeeks:]
-[CALWeekDuration weeksPart]
+[EKProtocolEventOccurrence_Shared isSignificantlyDetachedIgnoringParticipationForEvent:]
+[EKProtocolEventOccurrence_Shared isSignificantlyDetachedForEvent:]
+[EKProtocolEventOccurrence_Shared isSignificantlyDetachedForEvent:comparedToMaster:]
+[EKProtocolEventOccurrence_Shared _isSignificantlyDetachedHelperForEvent:shouldIgnorePartStat:comparedToMaster:]
+[EKProtocolEventOccurrence_Shared isCalendarOwnerInvitedAttendeeForOccurrence:]
+[EKProtocolEventOccurrence_Shared isCalendarOwnerInvitedAttendeeForOccurrence:inCalendar:]
+[EKProtocolEventOccurrence_Shared isCalendarOwnerRepresentedByAttendee:forOccurrence:]
+[EKProtocolEventOccurrence_Shared isCalendarOwnerRepresentedByAttendee:inCalendar:]
+[EKProtocolEventOccurrence_Shared isCurrentUserInvitedAttendeeForOccurrence:]
+[EKProtocolEventOccurrence_Shared isCurrentUserInvitedAttendeeForOccurrence:inCalendar:]
+[EKProtocolEventOccurrence_Shared birthdayTitleForEvent:date:]
+[EKProtocolEventOccurrence_Shared _userAddresses:representAttendee:]
+[EKProtocolEventOccurrence_Shared _userAddressesRepresentsInvitedAttendee:forOccurrence:]
+[EKProtocolEventOccurrence_Shared _userAddressesRepresentsInvitedAttendee:forOccurrence:checkEmailAddresses:]
-[CALTimeRangeSubstractionResult result1]
-[CALTimeRangeSubstractionResult setResult1:]
-[CALTimeRangeSubstractionResult result2]
-[CALTimeRangeSubstractionResult setResult2:]
-[CALTimeRange description]
+[CALTimeRange timeRangeWithStartDate:withDuration:]
-[CALTimeRange initWithStartDate:withDuration:]
+[CALTimeRange timeRangeFromTimeRangeRoundedToFullDays:]
+[CALTimeRange timeRangeUnboundedWithStartDate:]
-[CALTimeRange initUnboundedWithStartDate:]
+[CALTimeRange timeRangeUnboundedWithEndDate:]
-[CALTimeRange initUnboundedWithEndDate:]
+[CALTimeRange timeRangeFromTimeRange:withShift:]
-[CALTimeRange initFromTimeRange:withShift:]
-[CALTimeRange initAsUnbounded]
+[CALTimeRange timeRangeUnbounded]
-[CALTimeRange duration]
-[CALTimeRange isInfinite]
-[CALTimeRange isZeroDuration]
-[CALTimeRange includesDateExcludingBounds:]
-[CALTimeRange intersectsTimeRange:]
-[CALTimeRange intersectsTimeRangeExcludingUpperBound:]
-[CALTimeRange intersectsTimeRangeExcludingBounds:]
-[CALTimeRange strictlyIncludesTimeRange:]
-[CALTimeRange isEqualTo:]
-[CALTimeRange compareStartDate:]
-[CALTimeRange copyWithZone:]
-[CALTimeRange union:]
-[CALTimeRange intersection:]
-[CALTimeRange minus:]
+[CALTimeRange simplifyOverlappingTimeRanges:]
-[CALMutableTimeRange setStartDateNoCopy:]
-[CALMutableTimeRange setEndDateNoCopy:]
-[CALMutableTimeRange setStartDateNoCopy:endDate:]
+[EKProtocolCalendar_Shared colorForCalendar:]
+[CalendarStore propertiesImpactingDetachedEvents]
+[CalendarStore propertiesDesignatingSignificance]
+[CalendarStore prefFirstMinuteOfWorkHours]
-[CalNamedMutex lock]
-[NSString(CalAutoArchivePathExtensions) stringWithAutoArchiveExtensionRemoved]
-[CalDefaultDictionary copyWithZone:]
-[CalDefaultDictionary deepCopy]
-[CalDefaultDictionary _copyWithZone:isDeepCopy:]
-[CalDefaultDictionary _mutableCopyOfFinalDictionaryWithZone:isDeepCopy:]
-[CalDefaultDictionary keys]
-[CalDefaultDictionary count]
-[CalDefaultDictionary setDictionary:]
-[NSError(CalErrorTypes) isCalAuthenticationError]
-[NSError(CalErrorTypes) isCalGoogleAuthError]
-[NSError(CalErrorTypes) CalRedirectURLForGoogleAuthError]
-[NSError(CalErrorTypes) isCalDAVTransientErrorException]
-[NSError(CalErrorTypes) isCalDAVTranslatedRevertableError]
-[NSError(CalErrorTypes) isCalTransientError]
-[NSError(CalErrorTypes) isCalConnectionError]
-[NSError(CalErrorTypes) isCalHTTPAuthOrHTTPTimeoutError]
-[CALDate(Private) setYear:month:day:hour:minute:second:timeZone:]
-[CALDate(Private) meetComparisonCondition:withDate:]
+[CALDate dateWithTimeIntervalSince1970:]
+[CALDate dateWithString:]
+[CALDate distantFuture]
+[CALDate distantPast]
-[CALDate initWithTimeIntervalSince1970:]
-[CALDate initWithTimeIntervalSince2001:]
-[CALDate absoluteTimeInterval]
-[CALDate weekOfYear]
-[CALDate dayOfCommonEra]
-[CALDate minuteOfHour]
-[CALDate secondOfMinute]
-[CALDate dayCountInMonth]
-[CALDate isAfterOrEqual:]
-[CALDate descriptionWithCalendarFormat:]
-[CALDate descriptionWithCalendarFormat:locale:]
-[CALDate setCalendarFormat:]
-[CALDate calendarFormat]
-[CALDate isMidnight]
-[CALDate dateBySubstractingDuration:]
-[CALDate dateRoundedToMinute]
-[CALDate dateRoundedToHour]
-[CALDate dateRoundedToNextDay]
-[CALDate dateRoundedToPreviousDay]
-[CALDate dateRoundedToYear]
+[CALDate dateWithDatePartFrom:withTimePartFrom:]
+[CALDate dateWithDatePartFrom:withTimePartFrom:withTimeZone:]
-[CALDate dateWithHour:]
-[CALDate isoStringRepresentation]
+[CALDate dateFromICSDate:timeZone:]
+[CALDate date]
+[CALDate dateOnlyFromDate:]
-[CALDate initWithTimeInterval:sinceDate:]
-[CALDate initWithString:calendarFormat:]
-[CALDate initWithString:]
-[CALDate offsetFromGMT]
-[CALDate offsetFromGMTForTimeZone:]
-[CALDate isEqualToDateAsLocaltime:]
-[CALDate compare:]
-[CALDate years:months:days:hours:minutes:seconds:sinceDate:]
-[CALDate setTimeZone:]
-[CALDate setTimeZone:keepingLocalDate:]
-[CALDate roundToDay]
-[CALDate addSecondsInGMT:]
-[CALDate addYears:months:days:hours:minutes:seconds:]
-[CALDate takeValueFrom:]
-[CALDate isEqualAsDateOnly:]
-[CALDate timeIntervalSinceNow]
-[CALDate description]
-[CALDate(SkipWeekends) dateOfNextDayShouldSkipWeekend:]
-[CALDate(SkipWeekends) dateOfPreviousDayShouldSkipWeekend:]
-[CALDate(SkipWeekends) dateByRoundingToWeekdayForward]
-[CALDate(SkipWeekends) dateByRoundingToWeekdayBackward]
-[NSCalendarDate(iSync11Compatibility) CALDate]
-[CALDate(iSync11Compatibility) isDateOnly]
-[CALDate(LocalizationExtensions) localizedWithFormatKey:]
-[CALDate(LocalizationExtensions) localizedYear]
-[CALDate(LocalizationExtensions) localizedMonth]
-[CALDate(LocalizationExtensions) localizedFullDateAndTime]
-[CALDate(LocalizationExtensions) localizedShortDateAndTime]
-[CALDate(LocalizationExtensions) localizedDayOfMonthWithoutLeadingZero]
-[CALDate(LocalizationExtensions) localizedAbbreviatedMonth]
-[CALDate(LocalizationExtensions) localizedLongDate]
-[CALDate(LocalizationExtensions) localizedAbbrevDate]
-[CALDate(LocalizationExtensions) localizedShortDate]
-[CALDate(LocalizationExtensions) localizedLongDateWithoutDay]
-[CALDate(LocalizationExtensions) localizedLongDateWithoutYear]
-[CALDate(LocalizationExtensions) localizedAbbrevDateWithoutYear]
-[CALDate(LocalizationExtensions) localizedShortDateWithoutYear]
-[CALDate(LocalizationExtensions) localizedLongDayMonthWithoutDayOfWeek]
-[CALDate(LocalizationExtensions) localizedAbbrevDayMonthWithoutDayOfWeek]
-[CALDate(LocalizationExtensions) localizedLongDayOfWeek]
-[CALDate(LocalizationExtensions) localizedAbbrevDayOfWeek]
-[CALDate(LocalizationExtensions) localizedLongDayOfWeekWithDayOfMonth]
-[CALDate(LocalizationExtensions) localizedTime]
-[CALDate(LocalizationExtensions) localizedHourMinutes]
-[CALDate(LocalizationExtensions) localizedHour]
-[CALDate(LocalizationExtensions) localizedHourMinutesWithoutAMPM]
-[CALDate(LocalizationExtensions) localizedHourWithoutAMPM]
+[CALDate(LocalizationExtensions) localizedOneCharacterAbbrevDayOfWeekForDay:]
-[CALDate(LocalizationExtensions) localizedRelativeWithDateFormatKey:]
-[CALDate(LocalizationExtensions) localizedRelativeWithDateFormatKey:titlecase:]
-[CALDate(LocalizationExtensions) localizedRelativeWithDateFormatKey:withTimeFormatKey:]
+[CALDate(LocalizationExtensions) getSizeOrderedDateFormats]
+[CALDate(LocalizationExtensions) getSizeOrderedDateFormatsWithYear]
+[CALDate(LocalizationExtensions) getSizeOrderedDateFormatsWithoutYear]
+[CALDate(LocalizationExtensions) getSizeOrderedAllDateFormatsWithoutYear]
-[NSDate(CALDateOnlyConversion) CALDateOnly]
-[NSCalendarDate(CALDateOnlyConversion) CALDateOnly]
+[CALDateOnly date]
-[CALDateOnly addSecondsInGMT:]
-[CALDateOnly takeValueFrom:]
-[CALDateOnly description]
+[CALDateTime timeOnlyWithHour:minute:second:timeZone:]
-[CALDateTime initWithTimeInterval:sinceDate:]
-[CALDateTime initAsTimeOnlyWithHour:minute:second:timeZone:]
-[CALDateTime initWithString:calendarFormat:]
-[CALDateTime initWithString:]
-[CALDateTime timeIntervalSinceNow]
-[CALDateTime description]
-[CALDateTime roundToDay]
-[CALDateTime takeValueFrom:]
-[CalSyncClearifier init]
+[CalSyncClearifier unregisterClients]
+[CalSyncClearifier _syncToClearRecordsForEntitiesInDataClass:client:]
+[CalSyncClearifier clearRecordsForEntitiesInDataClass:]
+[CalSyncClearifier clearRecords]
-[NSDate(CALFloatingDateConversion) CALFloatingDateTime]
+[CALFloatingDateTime date]
+[CALFloatingDateTime timeOnlyWithHour:minute:second:]
-[CALFloatingDateTime initWithTimeInterval:sinceDate:]
-[CALFloatingDateTime initWithString:]
-[CALFloatingDateTime setTimeZone:keepingLocalDate:]
-[CALFloatingDateTime roundToDay]
-[CALFloatingDateTime addSecondsInGMT:]
-[CALFloatingDateTime takeValueFrom:]
-[CALFloatingDateTime isEqualAsDateOnly:]
-[CALFloatingDateTime timeIntervalSinceNow]
-[CALFloatingDateTime description]
+[ABPerson(CALExtension) calYearForYearlessLunarNonLeapMonthChineseBirthday:]
+[ABPerson(CALExtension) calYearForYearlessLunarLeapMonthChineseBirthday:]
+[ABPerson(CALExtension) calYearForYearlessBirthdaysForCalendar:birthdayComponents:]
+[ABPerson(CALExtension) cp_personMatchingName:inAddressBook:]
+[ABPerson(CALExtension) personCache]
___37+[ABPerson(CALExtension) personCache]_block_invoke
+[ABPerson(CALExtension) cp_personMatchingName:email:URL:inAddressBook:]
-[ABPerson(CALExtension) cp_emails]
-[ABPerson(CALExtension) cp_calendarURIs]
-[ABPerson(CALExtension) cp_firstCalendarURI]
-[ABPerson(CALExtension) cp_calendarURIWithIdentifier:]
-[ABPerson(CALExtension) UID]
+[ABPerson(CALExtension) _cp_birthdayFromComponents:lunarCalendarString:]
-[ABPerson(CALExtension) cp_alternateBirthday]
-[ABPerson(CALExtension) cp_alternateBirthdayComponents]
-[ABPerson(CALExtension) cp_birthdayComponents]
-[ABPerson(CALExtension) cp_alternateBirthdayIsYearless]
-[ABPerson(CALExtension) cp_companyName]
-[ABPerson(CALExtension) cp_birthdayDisplayName]
-[ABPerson(CALExtension) cp_alternateBirthdayEventSummaryWithLunarCalendarString:]
+[ABPerson(CALExtension) cp_birthdayStringFromName:forBirthday:forDate:isYearless:lunarCalendarString:]
+[ABPerson(CALExtension) cp_defaultBirthdayString]
-[ABPerson(CALExtension) cp_circularImage]
+[ABAddressBook(CALExtension) addressBookIfAllowed]
-[NSString(RFC822Extension) RFC822Address]
-[CALAbstractEntity description]
-[CALAbstractEntity encodeWithCoder:]
-[CALAbstractEntity initWithCoder:]
-[CALAbstractEntity removePropertyValue:forName:]
-[CALAbstractEntity dirtyPropertyForName:]
-[CALAbstractEntity committedPropertyForName:]
-[CALAbstractEntity _setProperties:]
-[CALAbstractEntity setProperties:]
-[CALAbstractEntity properties]
-[CALAbstractEntity isValidStatus:]
-[CALAbstractEntity checkValidity]
-[CALAbstractEntity actualCommitInManagedObjectContext:]
-[CALAbstractEntity detached]
-[CALAbstractEntity deleteFromRepositoryInManagedObjectContext:]
-[CALAbstractEntity moveToRepository:inManagedObjectContext:]
-[CALAbstractEntity isEqual:]
-[CALAbstractEntity isEqualToEntity:]
-[CALAbstractEntity isEqualToEntity:ignoreProperties:useCommittedValues:]
-[CALAbstractEntity hasDirtySubcomponent]
-[CALAbstractEntity _dirtyPropertiesNames]
-[CALAbstractEntity restoreAsClean]
-[CALAbstractEntity reset]
-[CALAbstractEntity hasSubComponents]
-[CALAbstractEntity copyPropertiesFrom:]
-[CALAbstractEntity copyWithZone:]
-[CALAbstractEntity removeAllPropertiesWithKeys:]
-[CALAbstractEntity keepOnlyPropertiesWithKeys:]
-[CALAbstractEntity removeAllSubComponentsOfClasses:]
-[CALAbstractEntity keepOnlySubComponentsOfClasses:]
-[CALAbstractEntity correspondingOccurrenceClass]
-[CALAbstractEntity isOwnerAddress:]
-[CALAbstractEntity isOwnerAddress:ignoreMeCard:]
-[CALOccurrableEntity expandOnTimeRange:]
-[CALOccurrableEntity copyWithZone:]
-[CALEntity(CALRecurrence) encodeWithCoder:]
-[CALEntity(CALRecurrence) initWithCoder:]
-[CALEntity(CALRecurrence) initRecurrence]
-[CALEntity(CALRecurrence) setSingleRecurrenceRule:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___52-[CALEntity(CALRecurrence) setSingleRecurrenceRule:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___52-[CALEntity(CALRecurrence) setSingleRecurrenceRule:]_block_invoke23
___52-[CALEntity(CALRecurrence) setSingleRecurrenceRule:]_block_invoke61
___copy_helper_block_64
___destroy_helper_block_65
-[CALEntity(CALRecurrence) removeAllRecurrences]
-[CALEntity(CALRecurrence) removeRecurrenceProperties]
-[CALEntity(CALRecurrence) needsDetachCheck]
-[CALEntity(CALRecurrence) hasRuleWithByParameter]
-[CALEntity(CALRecurrence) setInfiniteRecurrence]
-[CALEntity(CALRecurrence) isInfiniteRecurrence]
-[CALEntity(CALRecurrence) setCachedEndDate:]
-[CALEntity(CALRecurrence) cachedEndDate]
-[CALEntity(CALRecurrence) occurrencesOnTimeRange:withRecurrenceStart:]
-[CALEntity(CALRecurrence) recurrenceDates]
-[CALEntity(CALRecurrence) recurrenceDatesInTimeRange:]
-[CALEntity(CALRecurrence) exceptionRules]
-[CALEntity(CALRecurrence) hasExceptionDates]
-[CALEntity(CALRecurrence) setRecurrenceDates:]
-[CALEntity(CALRecurrence) addRecurrenceRule:]
-[CALEntity(CALRecurrence) removeRecurrenceRule:]
-[CALEntity(CALRecurrence) addExceptionRule:]
-[CALEntity(CALRecurrence) removeExceptionRule:]
-[CALEntity(CALRecurrence) addRecurrenceDatePropertyValue:]
-[CALEntity(CALRecurrence) addRecurrenceDate:]
-[CALEntity(CALRecurrence) removeRecurrenceDate:]
-[CALEntity(CALRecurrence) addExceptionDatePropertyValue:]
-[CALEntity(CALRecurrence) addExceptionDate:]
-[CALEntity(CALRecurrence) removeExceptionDate:]
-[CALEntity(CALRecurrence) setMainRecurrenceRule:]
+[CALTimeRange(RecurrenceAdditions) timeRangeForRecurrencesFromDate:]
-[CoreCalendar description]
-[CoreCalendar init]
-[CoreCalendar initWithEntitiesIncludingChildren:]
-[CoreCalendar initWithEntities:copy:]
-[CoreCalendar initFromDictionary:]
+[CoreCalendar calendarFromDictionary:]
-[CoreCalendar initWithEntities:]
-[CoreCalendar initWithSingleEntity:]
-[CoreCalendar initWithCalendar:]
+[CoreCalendar calendar]
+[CoreCalendar calendarWithEntitiesIncludingChildren:]
+[CoreCalendar calendarWithEntities:]
+[CoreCalendar calendarWithEntity:]
+[CoreCalendar calendarWithCalendar:]
-[CoreCalendar copyWithZone:]
-[CoreCalendar dealloc]
-[CoreCalendar markAsClean]
-[CoreCalendar forceToGMT]
-[CoreCalendar generateIDsWithSuffix:]
-[CoreCalendar generateNewIDs]
-[CoreCalendar fixUIDStorage]
-[CoreCalendar generateDictionary]
-[CoreCalendar fixEntitiesRelationship]
-[CoreCalendar method]
-[CoreCalendar setMethod:]
-[CoreCalendar relcalid]
-[CoreCalendar setRelcalid:]
-[CoreCalendar name]
-[CoreCalendar setName:]
-[CoreCalendar color]
-[CoreCalendar setColor:]
-[CoreCalendar hasDesc]
-[CoreCalendar desc]
-[CoreCalendar setDesc:]
-[CoreCalendar version]
-[CoreCalendar setVersion:]
-[CoreCalendar prodID]
-[CoreCalendar setProdID:]
-[CoreCalendar timeZoneHint]
-[CoreCalendar setTimeZoneHint:]
-[CoreCalendar calendarType]
-[CoreCalendar setCalendarType:]
-[CoreCalendar expiration]
-[CoreCalendar setExpiration:]
-[CoreCalendar setupStandardProperties]
-[CoreCalendar calscale]
-[CoreCalendar setCalscale:]
-[CoreCalendar _timeZones:inEntity:]
-[CoreCalendar timeZonesInCalendar]
-[CoreCalendar timeZoneIdentifiersInCalendar]
-[CoreCalendar entities]
-[CoreCalendar journals]
-[CoreCalendar events]
-[CoreCalendar todos]
-[CoreCalendar addEntity:]
-[CoreCalendar addEntityAtStart:]
-[CoreCalendar addEntities:]
-[CoreCalendar replaceEntity:withEntity:]
-[CoreCalendar removeEntities:]
-[CoreCalendar removeEntity:]
-[CoreCalendar countEntities]
-[CoreCalendar removeEntityByPrivateID:]
-[CoreCalendar entityForPrivateID:]
-[CoreCalendar containsEntity:withRecurrenceID:]
-[CoreCalendar containsEntityWithPrivateID:]
-[CoreCalendar entitiesStartingBefore:includingRecurringEvents:]
-[CoreCalendar topLevelEntities]
-[CoreEvent finalize]
-[CoreEvent actualCommitInManagedObjectContext:]
-[CoreEvent forceDatesToGMT]
-[CoreEvent lastSavedDuration]
-[CoreEvent setDuration:]
-[CoreEvent priority]
-[CoreEvent removePriority]
-[CoreEvent setPriority:]
-[CoreEvent removeTransparency]
-[CoreEvent locationString]
-[CoreEvent hasOccurrencesThatOverlap]
-[CoreEvent isOverlappingAdjacentOccurrenceForStartDate:endDate:originalStartDate:]
-[CoreEvent isOverlappingAlarmForStartDate:endDate:newDuration:]
-[CoreEvent hasAlarmWithDuration:thatOverlapsOccWithStartDate:andEndDate:]
-[CoreEvent cleanUp]
-[CoreEvent isValidStatus:]
-[CoreEvent upperBoundDate]
-[CoreEvent expandOnTimeRange:]
-[CoreEvent _makeExchangeCompatible]
-[CoreEvent isExchangeCompatible]
-[CoreEvent _isAlarmExchangeCompatible:]
-[CoreEvent _makeAlarmExchangeCompatible:]
-[CoreEvent humanReadableRepeatDescription]
-[CoreRecurrenceRule(HumanReadableRepeatDescription) humanReadableDescriptionForStartDate:]
-[CaliMIPCancelOperation initWithManagedAttendees:]
-[CaliMIPCancelOperation initWithCoder:]
-[CaliMIPCancelOperation dealloc]
-[CaliMIPCancelOperation encodeWithCoder:]
+[CaliMIPCancelOperation iMIPSchedulingWillResultFromChangesToManagedEvent:ignoreiMIPSuppression:]
-[CaliMIPCancelOperation attachmentName]
-[CaliMIPCancelOperation emailBodyInContext:]
-[CaliMIPCancelOperation emailRecipientsInContext:]
-[CaliMIPCancelOperation emailSubjectInContext:]
+[CaliMIPCancelOperation icsMethod]
-[CaliMIPCancelOperation attendeeEmails]
-[CaliMIPCancelOperation setAttendeeEmails:]
-[CALFreeBusyTime initWithDateRange:]
-[CALFreeBusyTime freeBusyDateRange]
-[CALFreeBusyTime setFreeBusyTimeRange:]
-[CALFreeBusy contact]
-[CALFreeBusy setContact:]
-[CALFreeBusy startDate]
-[CALFreeBusy setStartDate:]
-[CALFreeBusy endDate]
-[CALFreeBusy setEndDate:]
-[CALFreeBusy duration]
-[CALFreeBusy setDuration:]
-[CALFreeBusy stampDate]
-[CALFreeBusy setStampDate:]
-[CALFreeBusy organizer]
-[CALFreeBusy setOrganizer:]
-[CALFreeBusy uid]
-[CALFreeBusy setUID:]
-[CALFreeBusy url]
-[CALFreeBusy setURL:]
-[CALFreeBusy hasAttendee:]
-[CALFreeBusy attendees]
-[CALFreeBusy addAttendee:]
-[CALFreeBusy removeAttendee:]
-[CALFreeBusy setAttendees:]
-[CALFreeBusy removeAllAttendees]
-[CALFreeBusy comments]
-[CALFreeBusy addComment:]
-[CALFreeBusy removeComment:]
-[CALFreeBusy setComments:]
-[CALFreeBusy removeAllComments]
-[CALFreeBusy requestStatus]
-[CALFreeBusy addRequestStatus:]
-[CALFreeBusy removeRequestStatus:]
-[CALFreeBusy setRequestStatus:]
-[CALFreeBusy removeAllRequestStatus]
-[CALFreeBusy freeBusyTimes]
-[CALFreeBusy addFreeBusyTime:]
-[CALFreeBusy removeFreeBusyTime:]
-[CALFreeBusy setFreeBusyTimes:]
-[CALFreeBusy removeAllFreeBusyTimes]
-[CALFreeBusy expandOnTimeRange:]
-[CALFreeBusy maskUID]
-[CALFreeBusy setMaskUID:]
-[CaliMIPReplyOperation initWithManagedAttendees:]
-[CaliMIPReplyOperation initWithCoder:]
+[CaliMIPReplyOperation operationsWithManagedAttendees:]
+[CaliMIPReplyOperation operationsWithManagedAttendees:replyStatus:]
-[CaliMIPReplyOperation dealloc]
-[CaliMIPReplyOperation encodeWithCoder:]
+[CaliMIPReplyOperation managedAttendeeWillCauseiMIPScheduling:]
+[CaliMIPReplyOperation updateSequenceNumber]
-[CaliMIPReplyOperation attachmentName]
-[CaliMIPReplyOperation emailBodyInContext:]
-[CaliMIPReplyOperation emailRecipientsInContext:]
-[CaliMIPReplyOperation emailSubjectInContext:]
+[CaliMIPReplyOperation icsMethod]
+[CaliMIPReplyOperation _managedAttendeeWillCauseiMIPScheduling:ignoreParticipantStatus:]
-[CaliMIPReplyOperation _participationStatusInContext:]
-[CaliMIPReplyOperation replyStatus]
-[CaliMIPReplyOperation setReplyStatus:]
-[CaliMIPReplyOperation organizerEmail]
-[CaliMIPReplyOperation setOrganizerEmail:]
+[CALJournal journal]
-[CALJournal correspondingOccurrenceClass]
-[CALJournal isValidStatus:]
-[CALJournal checkValidity]
-[CALTodo actualCommitInManagedObjectContext:]
-[CALTodo forceDatesToGMT]
-[CALTodo _makeExchangeCompatible]
-[CALTodo isExchangeCompatible]
-[CALTodo _isAlarmExchangeCompatible:]
-[CALTodo _makeAlarmExchangeCompatible:]
-[CALTodo completionDate]
-[CALTodo isCompleted]
-[CALTodo setStatus:]
-[CALTodo timeZone]
-[CALTodo duration]
-[CALTodo setDuration:]
-[CALTodo priority]
-[CALTodo masterTodoUID]
-[CALTodo setMasterTodoUID:]
-[CALTodo location]
-[CALTodo setLocation:]
-[CALTodo order]
-[CALTodo isValidStatus:]
-[CALTodo checkValidity]
-[CALTodo upperBoundDate]
-[CALTodo expandOnTimeRange:]
-[CALTodo humanReadableRepeatDescription]
+[CALTodo exchangeConversionLocalizedMessage]
+[CALTodo exchangeConversionLocalizedInfo]
+[CALTodo exchangeConversionLocalizedPluralMessage]
+[CALTodo exchangeConversionLocalizedPluralInfo]
-[CALTodo recurrenceDescription]
+[CALBridgevCal convertFromVCalFile:]
+[CALDurationLocalization _localizedTimeStringForTimedEventDuration:abbreviate:]
+[CALDurationLocalization _calculateDurations:timeUnits:forDuration:allDay:abbreviate:]
+[CALDurationLocalization _calculateDurations:timeUnits:forDuration:allDay:dayDuration:hourDuration:minuteDuration:secondDuration:abbreviate:]
-[NSData(CALEncodings) stringWithEncoding:]
-[NSData(CALEncodings) convert8bitBufferToUTF8From:]
-[NSData(vCalConversions) convertToDateListwithGlobalTZ:]
-[CALDateTime(vCalConversions) initWithvCalDateString:withGlobalTZ:]
-[CALDateTime(vCalConversions) initWithvCalDateString:withGlobalTZ:withCheck:]
-[CALDuration(vCalConversions) initWithISO8601String:]
-[CALEntity(vCalConversions) ensureDurationAlarms]
-[CoreCalendar(vCalConversions) initFromVCalFile:]
-[CoreCalendar(vCalConversions) initFromVCalData:]
-[CoreCalendar(vCalConversions) decodeVCalLine:withParseState:]
-[CoreCalendar(vCalConversions) beginVCalEntity:withParseState:]
-[CoreCalendar(vCalConversions) endVCalEntity:withParseState:]
-[CALProperty(vCalConversions) initFromVCal:withParseState:]
-[CALProperty(vCalConversions) initVerbatimProperty:withParseState:property:]
-[CALProperty(vCalConversions) initISO8061Property:withParseState:property:]
-[CALProperty(vCalConversions) initISO8061DateListProperty:withParseState:property:]
-[CALProperty(vCalConversions) initEncodedTextProperty:withParseState:property:]
-[CALProperty(vCalConversions) initIntProperty:withParseState:property:]
-[CALProperty(vCalConversions) initURIProperty:withParseState:property:]
-[CALProperty(vCalConversions) initClassificationProperty:withParseState:property:]
-[CALProperty(vCalConversions) initStatusProperty:withParseState:property:]
-[CALProperty(vCalConversions) initRecurrenceProperty:withParseState:property:]
-[CALProperty(vCalConversions) initTranspProperty:withParseState:property:]
-[CALProperty(vCalConversions) initKeywordListProperty:withParseState:property:]
-[CALProperty(vCalConversions) initRFC822AddressProperty:withParseState:property:]
+[CoreAlarm(vCalConversions) alarmWithvCalLine:withParseState:property:]
-[CALvCALInputStream init]
-[CALvCALInputStream initWithData:]
-[CALvCALInputStream dealloc]
-[CALvCALInputStream getLine:withSize:]
-[CALvCALInputStream isContinued]
-[CALvCALInputStream lineNum]
-[CALvCALInputStream errorStr:]
-[CALvCALInputStream load_line_buffer]
+[CalSessionStateCache initialize]
-[CalSessionStateCache dealloc]
-[CalSessionStateCache init]
+[CalSessionStateCache updateSessionCache]
___42+[CalSessionStateCache updateSessionCache]_block_invoke
+[CalSessionStateCache updateConnectedStateForSessionID:withState:]
+[CalSessionStateCache connectedStateForSessionID:]
-[CalSessionStateCache connectedStates]
-[CalSessionStateCache setConnectedStates:]
-[CALvCALParseState init]
-[CALvCALParseState dealloc]
-[CALvCALParseState context]
-[CALvCALParseState setContext:]
-[CALvCALParseState version]
-[CALvCALParseState setVersion:]
-[CALvCALParseState setVersionMaj:andMin:]
-[CALvCALParseState getLineNumber]
-[CALvCALParseState setLineNumber:]
-[CALvCALParseState palmImport]
-[CALvCALParseState setPalmImport:]
-[CALvCALParseState error]
-[CALvCALParseState setError:]
-[CALvCALParseState setGlobalTZ:]
-[CALvCALParseState setGlobalTZFromString:]
-[CALvCALParseState globalTZ]
-[CALvCALParseState currentEntity]
-[CALvCALParseState setCurrentEntity:]
+[CALvCALParsedLine tokenizeKeyword:withType:]
+[CALvCALParsedLine tokenizeNSStringKeyword:withType:]
+[CALvCALParsedLine lookupProperty:]
-[CALvCALParsedLine init]
-[CALvCALParsedLine dealloc]
-[CALvCALParsedLine reset]
-[CALvCALParsedLine loadFromCString:withParseState:]
-[CALvCALParsedLine setKeywordFromCString:]
-[CALvCALParsedLine keyword]
-[CALvCALParsedLine description]
-[CALvCALParsedLine setContentFromCString:]
-[CALvCALParsedLine content]
-[CALvCALParsedLine convertedContent]
-[CALvCALParsedLine params]
-[CALvCALParsedLine setType:]
-[CALvCALParsedLine type]
-[CALvCALParsedLine setTokenID:]
-[CALvCALParsedLine tokenID]
-[CALvCALParsedLine setUsePalmD4Hooks:]
-[CALvCALRecurrence init]
-[CALvCALRecurrence initWithStr:withGlobalTz:]
-[CALvCALRecurrence dealloc]
-[CALvCALRecurrence type]
-[CALvCALRecurrence decode_daily:]
-[CALvCALRecurrence decode_weekly:]
-[CALvCALRecurrence decode_monthly_by_pos:]
-[CALvCALRecurrence decode_monthly_by_day:]
-[CALvCALRecurrence decode_yearly_by_month:]
-[CALvCALRecurrence decode_yearly_by_day:]
-[CALvCALRecurrence decode_interval:]
-[CALvCALRecurrence decode_weekday_list:]
-[CALvCALRecurrence decode_occurrencelist:]
-[CALvCALRecurrence decode_daynumberlist:]
-[CALvCALRecurrence decode_monthlist:]
-[CALvCALRecurrence decode_daylist:]
-[CALvCALRecurrence decode_duration:]
-[CALvCALRecurrence decode_digits:withResult:]
+[CoreRecurrenceRule(vCalConversions) recurrenceWithStr:withGlobalTz:]
+[CoreCalendarsManager defaultManagerInitialized]
+[CoreCalendarsManager _resetForUnitTests]
-[CoreCalendarsManager dealloc]
-[CoreCalendarsManager unregisterAllSources]
-[CoreCalendarsManager unregisterSourceForKey:]
-[CoreCalendarsManager sources]
-[NSObject(CALDetachmentDelegateExtension) setChangeInformations:]
-[CoreEventOccurrence event]
-[CoreEventOccurrence duration]
-[CoreEventOccurrence setStartDateAndTimeZone:]
-[CoreEventOccurrence moveToStartDate:]
-[CoreEventOccurrence setStartDate:endDate:]
-[CoreEventOccurrence timeRangeForFullDayOccurrence]
-[CoreEventOccurrence restore]
-[CoreEventOccurrence deleteWithDelegate:inManagedObjectContext:]
-[CoreEventOccurrence makeEntityFromOccurrence]
-[CoreEventOccurrence commitWithDelegate:inManagedObjectContext:]
-[CoreEventOccurrence commitWithDelegate:commitWholeRecurrence:inManagedObjectContext:]
-[CoreEventOccurrence regularOccurrence]
-[CaliMIPPersistDetailsOperation initWithManagedAttendees:]
-[CaliMIPPersistDetailsOperation initWithCoder:]
-[CaliMIPPersistDetailsOperation dealloc]
-[CaliMIPPersistDetailsOperation encodeWithCoder:]
-[CaliMIPPersistDetailsOperation attachmentInContext:]
-[CaliMIPPersistDetailsOperation attachment]
-[CaliMIPPersistDetailsOperation setAttachment:]
-[CaliMIPPersistDetailsOperation eventIsAllDay]
-[CaliMIPPersistDetailsOperation setEventIsAllDay:]
-[CaliMIPPersistDetailsOperation eventIsFloating]
-[CaliMIPPersistDetailsOperation setEventIsFloating:]
-[CaliMIPPersistDetailsOperation eventStartDate]
-[CaliMIPPersistDetailsOperation setEventStartDate:]
-[CaliMIPPersistDetailsOperation eventTimeZone]
-[CaliMIPPersistDetailsOperation setEventTimeZone:]
-[CaliMIPPersistDetailsOperation eventTitle]
-[CaliMIPPersistDetailsOperation setEventTitle:]
-[CaliMIPPersistDetailsOperation organizerName]
-[CaliMIPPersistDetailsOperation setOrganizerName:]
-[CALOccurrence description]
-[CALOccurrence isDiscarded]
-[CALOccurrence reset]
-[CALOccurrence clientData]
-[CALOccurrence initialStartDate]
-[CALOccurrence setStartDateAndTimeZone:]
-[CALOccurrence isOrganizerMe]
-[CALOccurrence isOrganizerMeAndEditable]
-[CALOccurrence isFirstOccurence]
-[CALOccurrence isEqual:]
-[CALOccurrence compare:]
-[CALOccurrence makeEntityFromOccurrence]
-[CALOccurrence isAddressMe:]
-[CALOccurrence(Alarms) alarmBaseDate]
-[CALOccurrence(Export) textRepresentation]
-[CALOccurrence(Compatibility) completionDate]
-[CALOccurrence(Compatibility) setCompletionDate:]
-[CALOccurrence(Compatibility) priority]
-[CALOccurrence(Compatibility) setPriority:]
-[CALOccurrence(Compatibility) entityDueDate]
-[CALOccurrence(Compatibility) setEntityDueDate:]
-[CALOccurrence(Compatibility) signature]
-[CALOccurrence(Compatibility) setPermission:]
-[CALOccurrence(Compatibility) permission]
-[CALOccurrence(Compatibility) setNeedsServerConfirmation:]
-[CALOccurrence(Compatibility) needsServerConfirmation]
-[CALOccurrence(Compatibility) isEditable]
-[CALOccurrence(Compatibility) calendarServerAccess]
-[CALOccurrence(Compatibility) setCalendarServerAccess:]
-[CALOccurrence(Compatibility) setPrivateComment:]
-[CALOccurrence(Compatibility) comment]
-[CALOccurrence(Compatibility) setComment:]
-[CALOccurrence(Compatibility) setEntityStartDate:]
-[CALOccurrence(Compatibility) status]
-[CALOccurrence(Compatibility) setStatus:]
-[CALOccurrence(Compatibility) classification]
-[CALOccurrence(Compatibility) setClassification:]
-[CALOccurrence(Compatibility) organizer]
-[CALOccurrence(Compatibility) setOrganizer:]
-[CALOccurrence(Compatibility) URL]
-[CALOccurrence(Compatibility) setURL:]
-[CALOccurrence(Compatibility) categories]
-[CALOccurrence(Compatibility) attachments]
-[CALOccurrence(Compatibility) attachment]
-[CALOccurrence(Compatibility) alarmsExcludingNone]
-[CALOccurrence(Compatibility) attendees]
-[CALOccurrence(Compatibility) hasAttendees]
-[CALOccurrence(Compatibility) hasAttendeesOtherThanOrganizer]
-[CALOccurrence(Compatibility) hasOrganizer]
-[CALOccurrence(Compatibility) hasAlarms]
-[CALOccurrence(Compatibility) addAttachment:]
-[CALOccurrence(Compatibility) removeOrUninviteAttendee:]
-[CALOccurrence(Compatibility) removeAttachment:]
-[CALOccurrence(Compatibility) removeAlarm:]
-[CALOccurrence(Compatibility) removeAttendee:]
-[CALOccurrence(Compatibility) removeAttendeeSimilarToAttendee:]
-[CALOccurrence(Compatibility) removeAllAlarms]
-[CALOccurrence(Compatibility) removeAllAttendees]
-[CALOccurrence(Compatibility) removeAllAttachments]
-[CALOccurrence(Compatibility) removeAllCategories]
-[CALOccurrence(Compatibility) setAttendees:]
-[CALOccurrence(Compatibility) hasDropBox]
-[CALOccurrence(Compatibility) setHasDropBox:]
-[CALOccurrence(Compatibility) dropBoxLocation]
-[CALOccurrence(Compatibility) setDropBoxLocation:]
-[CALOccurrence(Compatibility) invitationStatusPending]
-[CALOccurrence(Compatibility) _ITipNeedsUpd]
-[CALOccurrence(Compatibility) originEntity]
-[CALOccurrence(Compatibility) parentEntity]
-[CALOccurrence(Compatibility) deleteFromRepositoryInManagedObjectContext:]
-[CALOccurrence(Compatibility) locationString]
-[CALOccurrence(Compatibility) structuredLocation]
-[CALOccurrence(Compatibility) recurID]
-[CALOccurrence(Compatibility) masterEntity]
-[CALOccurrence(Compatibility) dirty]
-[CALOccurrence(Compatibility) hasRecurrenceOrIsDetached]
-[CALOccurrence(Compatibility) needsDetachCheck]
-[CALOccurrence(Compatibility) hasRecurrenceData]
-[CALOccurrence(Compatibility) templateData]
-[CALOccurrence(Compatibility) mainRecurrenceRule]
-[CALOccurrence(Compatibility) setMainRecurrenceRule:]
-[CALOccurrence(Compatibility) moveToRepository:inManagedObjectContext:]
-[CALOccurrence(Compatibility) setFullDayEvent:]
-[CALOccurrence(Compatibility) setSingleRecurrenceRule:]
-[CALOccurrence(Compatibility) alarmWithSignature:]
-[CALOccurrence(Compatibility) searchMetaData]
-[CALOccurrence(Compatibility) myStatusHasChanged]
-[CALOccurrence(Compatibility) setDirtyParticipationStatus:]
-[CALOccurrence(Compatibility) alreadySentMarker]
-[CALOccurrence(Compatibility) setAlreadySentMarker:]
-[CALOccurrence(Compatibility) rsvpNeeded]
-[CALOccurrence(Compatibility) setRSVPNeeded:]
-[CALOccurrence(Compatibility) isAnInvitation]
-[CALOccurrence(Compatibility) invitationModeIncludingChildren]
-[CALOccurrence(Compatibility) myRSVPStatus]
-[CALOccurrence(Compatibility) handleMeCaseInAttendees]
-[CALOccurrence(Compatibility) forceRSVPTo:]
-[CALOccurrence(Compatibility) isCancelledInvitation]
-[CALOccurrence(Compatibility) resetParticipationStatus]
-[CALOccurrence(Compatibility) forceNeedsActionOnNoneAttendees]
-[CALOccurrence(Compatibility) hasSendableAttendees]
-[CALOccurrence(Compatibility) hasInvitedAttendees]
-[CALOccurrence(Compatibility) hasInvitedAttendeesIncludingChildren]
-[CALOccurrence(Compatibility) isExchangeCompatible]
-[CALOccurrence(Compatibility) shouldWarnUserOnMoveToExchangeRepository:]
-[CALOccurrence(Compatibility) shouldWarnUserOnMoveToExchangeCalendar:]
-[CALOccurrence(Compatibility) makeExchangeCompatible]
-[CALEntity(ITIPExtensions) invitationModeIncludingChildren]
-[CALEntity(ITIPExtensions) myRSVPStatus]
-[CALEntity(ITIPExtensions) cleanParticipationStatus]
-[CALEntity(ITIPExtensions) cleanAttachmentInfo]
-[CALEntity(ITIPExtensions) forceRSVPTo:]
-[CALProperty description]
-[CALProperty encodeWithCoder:]
-[CALProperty initWithCoder:]
+[CALProperty propertyWithName:withValues:withType:]
-[CALProperty initWithName:]
-[CALProperty initWithName:withValues:withType:]
-[CALProperty setSingleValue:]
-[CALProperty removeValue:]
-[CALProperty changedValues]
-[CALProperty committedValues]
-[CALProperty deletedValues]
-[CALProperty isSingleValued]
-[CALProperty count]
-[CALProperty isEqualToProperty:useCommittedValues:]
-[CALProperty restoreAsClean]
-[CALProperty copyWithZone:]
-[CALProperty stringValue]
-[CALPredefinedValue initWithBytes:objCType:]
-[CALPredefinedValue getValue:]
+[CALScheduleStatusParameter scheduleStatusParameterFromCode:]
+[CALScheduleAgentParameter scheduleAgentParameterFromCode:]
+[CALStatusTypeValue statusTypeFromCode:]
+[CALTransparencyTypeValue transparencyTypeFromCode:]
+[CALClassificationTypeValue classificationTypeFromCode:]
+[CALMethodValue methodParameterFromCode:]
+[CALActionValue actionParameterFromCode:]
-[CALPropertyValue description]
-[CALPropertyValue encodeWithCoder:]
-[CALPropertyValue initWithCoder:]
+[CALPropertyValue propertyValue]
+[CALPropertyValue propertyValueWithValue:]
+[CALPropertyValue propertyValueWithValue:withType:]
-[CALPropertyValue initWithValue:]
-[CALPropertyValue addParameters:]
-[CALPropertyValue committedParameterValueForName:]
-[CALPropertyValue stringValue]
-[CALPropertyValue setParameters:]
-[CALPropertyValue parameterChanged:]
-[CALPropertyValue restoreAsClean]
-[CALPropertyMultiValue initWithSubValues:withType:]
-[CALPropertyMultiValue copyWithZone:]
-[CALPropertyMultiValue removeSubValue:]
-[CALDailyRecurrence lastSpecifiedRulePartOrder]
-[CALDailyRecurrence matchingDaysOnTimeRangeArray:withRecurrenceStart:]
-[CALDailyRecurrence realOccurrencesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
-[CALDailyRecurrence isEqualToRule:consideringStartDate:]
-[CALDailyRecurrence appendICSStringToString:]
-[CALMonthlyRecurrence lastSpecifiedRulePartOrder]
-[CALMonthlyRecurrence matchingMonthsOnTimeRangeArray:withRecurrenceStart:]
-[CALMonthlyRecurrence realOccurrencesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
-[CALMonthlyRecurrence ruleMatchesDate:]
-[CALMonthlyRecurrence proposedRuleForMovingFrom:to:changes:]
-[CALMonthlyRecurrence acceptableMoveToTimeRangeForDate:]
-[CALMonthlyRecurrence isEqualToRule:consideringStartDate:]
-[CALMonthlyRecurrence appendICSStringToString:]
-[CALWeeklyRecurrence lastSpecifiedRulePartOrder]
-[CALWeeklyRecurrence matchingWeeksOnTimeRangeArray:withRecurrenceStart:]
-[CALWeeklyRecurrence realOccurrencesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
-[CALWeeklyRecurrence ruleMatchesDate:]
-[CALWeeklyRecurrence proposedRuleForMovingFrom:to:changes:]
-[CALWeeklyRecurrence acceptableMoveToTimeRangeForDate:]
-[CALWeeklyRecurrence isEqualToRule:consideringStartDate:]
-[CALWeeklyRecurrence appendICSStringToString:]
-[CALYearlyRecurrence ruleMatchesDate:]
-[CALYearlyRecurrence proposedRuleForMovingFrom:to:changes:]
-[CALYearlyRecurrence acceptableMoveToTimeRangeForDate:]
-[CALYearlyRecurrence isEqualToRule:consideringStartDate:]
-[CALYearlyRecurrence appendICSStringToString:]
-[CALAddress setContainer:]
-[CALAddress container]
-[CALAddress managedObjectID]
+[CALAddress addressWithNoMail]
+[CALAddress addressWithAddressServicesUID:]
+[CALAddress addressFromABPerson:]
+[CALAddress addressFromABPerson:distributionIdentifier:]
-[CALAddress initWithAddressServicesUID:]
-[CALAddress setScheduleForceSend:]
-[CALAddress setDirectoryEntry:]
-[CALAddress directoryEntry]
-[CALAddress removeUserType]
-[CALAddress removeRole]
-[CALAddress setSentBy:]
-[CALAddress sentBy]
-[CALAddress setDelegatedFrom:]
-[CALAddress delegatedFrom]
-[CALAddress setDelegatedTo:]
-[CALAddress delegatedTo]
-[CALAddress setMember:]
-[CALAddress member]
+[CalExchangeErrorMessage localizedStringFromErrorCode:]
+[CalExchangeErrorMessage setError:description:reason:code:]
-[CALIdentityManager dealloc]
-[CALIdentityManager description]
-[CALIdentityManager myEmails]
-[CALIdentityManager private_hasMe]
___copy_helper_block_
___destroy_helper_block_
-[CALIdentityManager defaultEmail]
-[CALIdentityManager setMyEmail:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___33-[CALIdentityManager resetCache:]_block_invoke
___copy_helper_block_76
___destroy_helper_block_77
-[CALIdentityManager meCardChanged]
-[CALIdentityManager _clearCachedEmails]
-[CALIdentityManager myEmailsForUnitTests]
-[CALIdentityManager setMyEmailsForUnitTests:]
+[CALAddress(CALAddressExtensions) private_hasMe]
+[CALAttachment attachmentWithURL:]
-[CALAttachment initWithURL:]
-[CALAttachment initWithData:]
-[CALAttachment description]
-[CALAttachment dealloc]
-[CALAttachment managedObjectID]
-[CALAttachment setManagedObjectID:]
-[CALAttachment url]
-[CALAttachment setURL:]
-[CALAttachment cachedURL]
-[CALAttachment setCachedURL:]
-[CALAttachment data]
-[CALAttachment setData:]
-[CALAttachment contentType]
-[CALAttachment setContentType:]
-[CALAttachment attachmentId]
-[CALAttachment setAttachmentId:]
-[CALAttachment isAutoArchived]
-[CALAttachment setAutoArchived:]
-[CALAttachment filename]
-[CALAttachment setFilename:]
-[CALAttachment filenameParameter]
-[CALAttachment icon]
-[CALAttachment previewItemURL]
+[CALRecurID recurIDWithDate:]
+[CALRecurID recurIDWithDate:withRange:]
-[CALRecurID initWithDate:]
-[CALRecurID initWithDate:withRange:]
-[CALRecurID setDate:]
-[CALRecurID date]
-[CALRecurID setRange:]
-[CALRecurID range]
-[CALRequestStatus initWithStatusCode:withDesc:]
-[CALRequestStatus desc]
-[CALRequestStatus setDesc:]
-[CALRequestStatus statusCode]
-[CALRequestStatus setStatusCode:]
-[CALRequestStatus exceptionData]
-[CALRequestStatus setExceptionData:]
-[CoreCalendarSource description]
-[CoreCalendarSource init]
-[CoreCalendarSource bundlePath]
-[CoreCalendarSource type]
-[CoreCalendarSource freeBusyCache]
-[CoreCalendarSource status]
-[CoreCalendarSource lastOperationError]
-[CoreCalendarSource entityForLocalUID:inManagedObjectContext:]
-[CoreCalendarSource entityForSharedUID:inManagedObjectContext:]
-[CoreCalendarSource hasCalendarItemForSharedUID:inManagedObjectContext:]
-[CoreCalendarSource isSubscription]
-[CoreCalendarSource entitiesMatchingSearchElement:inManagedObjectContext:]
-[CoreCalendarSource allEntitiesInManagedObjectContext:]
-[CoreCalendarSource allToDosInManagedObjectContext:]
-[CoreCalendarSource allEventsInManagedObjectContext:]
-[CoreCalendarSource markVersionForUID:forDate:withComment:withTagID:]
-[CoreCalendarSource addEntity:inManagedObjectContext:]
-[CoreCalendarSource modifyEntity:inManagedObjectContext:]
-[CoreCalendarSource removeEntity:inManagedObjectContext:]
-[CoreCalendarSource addEntities:inManagedObjectContext:]
-[CoreCalendarSource modifyEntities:inManagedObjectContext:]
-[CoreCalendarSource removeEntities:inManagedObjectContext:]
-[CoreCalendarSource meForSource]
-[CoreCalendarSource ownerForSource]
-[CoreCalendarSource isSourceInSameAccount:ignoringOwner:]
-[CoreCalendarSource isOwnerMe]
-[CoreCalendarSource allowsSchedulingByMe]
-[CoreCalendarSource(iTIPDeletion) eventsWithFutureInvitationsInManagedObjectContext:]
-[CoreCalendarSource(RepositoryCompatibility) notifyChangesWithChangeTracker:]
-[CoreCalendarSource(RepositoryCompatibility) notifyChanges]
-[CoreCalendarSource(RepositoryCompatibility) fireRepositoryParametersChangeNotification]
-[CoreCalendarSource(RepositoryCompatibility) entitiesStartingBefore:withEntityType:includingRecurringEvents:inManagedObjectContext:]
-[CoreCalendarSource(RepositoryCompatibility) entitiesEndingBefore:withEntityType:inManagedObjectContext:]
-[CoreCalendarSource(RepositoryCompatibility) removeCompletedTasksBefore:inManagedObjectContext:]
-[CoreCalendarSource(RepositoryCompatibility) removeEventOccurrencesEndingBefore:inManagedObjectContext:]
-[CALEntity(StringMatching) summaryMatchesString:]
-[CALSearchElement matchesEntity:]
-[CALSearchElement isEqualToSearchElement:]
-[CALEntityWithAlarmSearchElement initWithinRange:]
+[CALEntityWithAlarmSearchElement entityWithAlarmSearchElement]
+[CALEntityWithAlarmSearchElement entityWithAlarmSearchElementWithinRange:]
-[CALEntityWithAlarmSearchElement dealloc]
-[CALEntityWithAlarmSearchElement timeRange]
-[CALEntityWithAlarmSearchElement setTimeRange:]
-[CALEntityWithAlarmSearchElement matchesEntity:]
-[CALEntityTypeSearchElement(Private) initWithEntityType:withinTimeRange:]
+[CALEntityTypeSearchElement allEntitiesSearchElement]
-[CALEntityTypeSearchElement copyWithZone:]
+[CALEntityTypeSearchElement searchWithEntityType:]
+[CALEntityTypeSearchElement searchWithEntityType:withinTimeRange:]
-[CALEntityTypeSearchElement dealloc]
-[CALEntityTypeSearchElement entityType]
-[CALEntityTypeSearchElement timeRange]
-[CALEntityTypeSearchElement setTimeRange:]
-[CALEntityTypeSearchElement matchesEntity:]
-[CALIndexSearchElement initForIndexString:withEntityType:matchedProperty:]
-[CALIndexSearchElement copyWithZone:]
+[CALIndexSearchElement searchElementForIndex:withEntityType:matchedProperty:]
-[CALIndexSearchElement dealloc]
-[CALIndexSearchElement indexString]
-[CALIndexSearchElement entityType]
-[CALIndexSearchElement property]
-[CALIndexSearchElement matchesEntity:]
-[CALIndexSearchElement isEqualToSearchElement:]
-[CALSourceFactory dealloc]
-[CALEntityChangeTracker setInternal:]
-[CALEntityChangeTracker isInternal]
+[CALEntityChangeTracker externalChangeWithType:withEntity:]
___91+[CALBag(CALChangeNotificationManagement) notifyChanges:originator:inManagedObjectContext:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CALBag(CALChangeNotificationManagement) notifyMainThread:]
-[CALOccurrence(PrintingBridge) objectForKey:]
-[CoreEventOccurrence(PrintingBridge) objectForKey:]
-[CALFilter applyTo:]
-[CALPropertyFilter initWithPropertiesNames:withMode:]
+[CALPropertyFilter filterPropertiesNames:withMode:]
-[CALPropertyFilter applyTo:]
-[CALPropertyFilter dealloc]
-[CALSubComponentFilter initWithSubComponentsWithClasses:withMode:]
-[CALSubComponentFilter dealloc]
+[CALSubComponentFilter filterSubComponentsWithClasses:withMode:]
-[CALSubComponentFilter applyTo:]
-[CALChainedFilter initWithFilters:]
+[CALChainedFilter chainedFilterWithFilters:]
-[CALChainedFilter dealloc]
-[CALChainedFilter applyTo:]
+[CALDirEntriesFilter dirEntriesFilter]
-[CALDirEntriesFilter applyTo:]
+[CoreAttendeeStateFilter attendeeStateFilter]
-[CoreAttendeeStateFilter applyTo:]
+[CALApplePropertiesFilter applePropertiesFilter]
+[CALInvitationPropertiesFilter invitationPropertiesFilter]
+[CALInvitationPropertiesFilter appleInvitationMarkersFilter]
+[CoreAlarmsFilters filterAlarms:]
+[CalAttachmentsFilter attachmentsFilter]
+[CALDuplicateFilter duplicateFilter]
-[CALDuplicateFilter applyTo:]
+[CALExportFilter filterForExport]
+[CALSubscribeFilter filterAlarms:]
+[CALPublishFilter filterForPublishByRemovingTextProperties]
+[CALPublishFilter filterForPublishByKeepingTextPropertiesExceptNotes]
+[CALPublishFilter filterForPublishByKeepingTextProperties]
+[CALPublishFilter filterForPublishByKeepingPropertyNames:]
+[CALCancelFilter cancelFilter]
+[CALRequestFilter requestFilter]
-[CALPublisher init]
-[CALPublisher dealloc]
-[CALPublisher finalize]
-[CALPublisher isEqualToPublisher:]
-[CALPublisher hasCapability:]
-[CALPublisher setUploadURL:]
-[CALPublisher setSubscriptionURL:]
-[CALPublisher setPageURL:]
-[CALPublisher uploadURL]
-[CALPublisher name]
-[CALPublisher setName:]
-[CALPublisher publisherID]
-[CALPublisher filter]
-[CALPublisher lastUpdate]
-[CALPublisher status]
-[CALPublisher fireStatusChangeNotification]
-[CALPublisher isAutoUpdating]
-[CALPublisher dictionaryRepresentation]
+[CALPublisher publisherWithDictionaryRepresentation:]
-[CALPublisher initWithDictionaryRepresentation:]
-[CALPublisher lastOperationError]
-[CALPublisher subscriptionURL]
-[CALPublisher pageURL]
-[CALPublisher fireParameterChangeNotification]
-[CALPublisher setPublisherState:]
-[CALPublisher publisherState]
-[CALPublisher setFilteringMask:]
-[CALPublisher filteringMask]
-[CALPublisher setActive:]
-[CALPublisher isActive]
+[CalUnrecognizedICSHelper storeICSForComponent:managedObject:]
+[CalUnrecognizedICSHelper restoreUnrecognizedICSForComponent:managedObject:]
+[CalUnrecognizedICSHelper _propertyWithKey:hasUnrecognizedParameterIn:managedObject:]
+[CalUnrecognizedICSHelper _parameter:isUnrecognizedForPropertyKey:managedObject:]
-[CALRemotePublisher setStatus:]
-[CALRemotePublisher setLastUpdate:]
-[CALRemotePublisher enablePublisher]
-[CALRemotePublisher disablePublisher]
-[CALRemotePublisher delayedRequestPublish]
-[CALRemotePublisher cancelSchedulePublish]
-[CALRemotePublisher schedulePublish]
-[CALRemotePublisher requestAutomaticPublish]
-[CALRemotePublisher requestPublishOperation]
-[CALRemotePublisher requestAutomaticPublishOperation]
-[CALRemotePublisher startPublish:document:]
-[CALRemotePublisher startAutomaticPublish:]
-[CALRemotePublisher startFirstPublish:document:]
-[CALRemotePublisher startPublish:withData:]
-[CALRemotePublisher startUnpublish:]
-[CALRemotePublisher publishDone:]
-[CALRemotePublisher automaticPublishDone:]
-[CALRemotePublisher firstPublishDone:]
-[CALRemotePublisher unpublishDone:]
-[CALRemotePublisher commonOperationDone:]
-[CALRemotePublisher persistError:inContext:]
-[CALRemotePublisher init]
-[CALRemotePublisher dealloc]
-[CALRemotePublisher finalize]
-[CALRemotePublisher setDelegate:]
-[CALRemotePublisher setSchedulePublishTimer:]
-[CALRemotePublisher setMinimumPublishInterval:]
-[CALRemotePublisher setActive:]
-[CALRemotePublisher setAutoUpdating:]
-[CALRemotePublisher remoteOperation]
-[CALRemotePublisher requestEtagPublishOperation:]
-[CALRemotePublisher requestFirstPublishOperation]
-[CALRemotePublisher requestPublish:]
-[CALRemotePublisher requestEtagUnpublishOperation:]
-[CALRemotePublisher requestUnpublishOperation]
-[CALRemotePublisher status]
+[CALRemotePublisher errorForUnpublishOperation:]
-[CALRemotePublisher lastOperationError]
-[CALRemotePublisher setLastOperationError:]
-[CALRemotePublisher publishOperation:didFinishWithError:]
-[CALRemotePublisher publishOperation:progressedToCurrentUnits:totalUnits:]
-[CALRemotePublisher nodeID]
-[CALRemotePublisher setNodeID:]
-[CALPublishOperation initWithPublisher:]
-[CALPublishOperation setFirstPublish:]
-[CALPublishOperation setEtag:]
-[CALPublishOperation dealloc]
-[CALPublishOperation finalize]
-[CALPublishOperation setDelegate:]
-[CALPublishOperation publisher]
-[CALPublishOperation operationProgress]
-[CALPublishOperation operationTotal]
-[CALPublishOperation publish:automatic:]
-[CALPublishOperation unpublishWithAutomatic:]
-[CALPublishOperation setUseKerberos:]
-[CALPublishOperation useKerberos]
-[CALPublishOperation setInfo:forKey:]
-[CALPublishOperation infoForKey:]
-[CALPublishOperation removeInfoForKey:]
-[CALPublishOperation setError:]
-[CALPublishOperation error]
-[CALPublishOperation abortOperation]
+[CALURLPublisher(private) _bootstrapCALURLPublishOperationFactory]
-[CALURLPublisher(private) remoteOperationForURL:]
-[CALURLPublisher(private) getKeychainURL]
-[CALURLPublisher(private) saveKeychainInformations]
-[CALURLPublisher(private) loadKeychainInformations]
-[CALURLPublisher(private) commonOperationDone:]
+[CALURLPublisher onlySupportsWebDAV]
+[CALURLPublisher registerPublishOperation:priority:]
+[CALURLPublisher initialize]
-[CALURLPublisher init]
-[CALURLPublisher dictionaryRepresentation]
-[CALURLPublisher initWithDictionaryRepresentation:]
-[CALURLPublisher dealloc]
-[CALURLPublisher finalize]
-[CALURLPublisher setUploadURL:]
-[CALURLPublisher remoteOperation]
-[CALURLPublisher setUsername:]
-[CALURLPublisher setPassword:]
-[CALURLPublisher password]
+[CALURLPublisher errorForUnpublishOperation:]
+[CALURLPublisher guessLoginPasswordForURL:login:password:]
+[CALURLPublishOperation canHandleURL:]
-[CALURLPublishOperation initWithPublisher:withURL:]
-[CALURLPublishOperation dealloc]
-[CALURLPublishOperation publishData:automatic:]
-[CALURLPublishOperation publish:automatic:]
-[CALURLPublishOperation unpublishDataWithAutomatic:]
-[CALURLPublishOperation unpublishWithAutomatic:]
-[CALURLPublishOperation abortOperation]
-[CALDateOnly(CALDateID) representationID]
-[CALFloatingDateTime(CALDateID) representationID]
-[CALDate(CALDateID) representationID]
-[NSDate(CALDateID) representationID]
-[CALOccurrencesCache dealloc]
-[CALOccurrencesCache cachedOccurrenceForEntity:startDate:]
-[CALOccurrencesCache removeCachedOccurrence:forEntity:]
-[CALOccurrencesCache flushCacheForEntity:]
-[CALOccurrencesCache getOccurrencesForEntity:forStartDates:]
-[CALOccurrencesCache getOccurrenceForEntity:forStartDate:]
-[CALDate(iSyncBridge) NSCalendarDateForISync]
-[CALDateTime(iSyncBridge) NSCalendarDateForISync]
-[CALDateOnly(iSyncBridge) NSCalendarDateForISync]
+[CALDateOnly(iSyncBridge) dateOnlyArrayFromDateTimeArray:]
-[CoreEvent(iSyncBridge) forceFullDayEvent]
+[CALTimeRange(CALDateBridge) timeRangeWithStartNSCalendarDate:withEndNSCalendarDate:]
-[CoreEventOccurrence(CALDateBridge) startNSCalendarDate]
-[CoreRecurrenceRule(CALDateBridge) setUntilNSCalendarDate:]
-[CoreRecurrenceRule(CALDateBridge) untilNSCalendarDate]
-[CoreAlarmTrigger(CALDateBridge) setNSCalendarDate:]
-[CoreAlarmTrigger(CALDateBridge) NSCalendarDate]
-[CALRecurID(CALDateBridge) setNSCalendarDate:]
-[CALRecurID(CALDateBridge) NSCalendarDate]
-[CALEntity(CALDateBridge) startNSCalendarDate]
-[CALEntity(CALDateBridge) setStartNSCalendarDate:]
-[CALEntity(CALDateBridge) creationNSCalendarDate]
-[CALEntity(CALDateBridge) setCreationNSCalendarDate:]
-[CALEntity(CALDateBridge) lastModificationNSCalendarDate]
-[CALEntity(CALDateBridge) setLastModificationNSCalendarDate:]
-[CALEntity(CALDateBridge) stampNSCalendarDate]
-[CALEntity(CALDateBridge) setStampNSCalendarDate:]
-[CALEntity(CALDateBridge) recurrenceNSCalendarDates]
-[CALEntity(CALDateBridge) exceptionNSCalendarDates]
-[CALEntity(CALDateBridge) setRecurrenceNSCalendarDates:]
-[CALEntity(CALDateBridge) setExceptionNSCalendarDates:]
-[CoreEvent(CALDateBridge) endNSCalendarDate]
-[CoreEvent(CALDateBridge) setEndNSCalendarDate:]
-[CALTodo(CALDateBridge) completionNSCalendarDate]
-[CALTodo(CALDateBridge) setCompletionNSCalendarDate:]
-[CALTodo(CALDateBridge) dueNSCalendarDate]
-[CALTodo(CALDateBridge) setDueNSCalendarDate:]
-[CALFreeBusy(Expansion) occurrencesOnTimeRange:]
-[CALBusyTimeOccurrence initWithEntity:withFreeBusyTime:]
-[CALBusyTimeOccurrence dealloc]
-[CALBusyTimeOccurrence duration]
-[CALBusyTimeOccurrence type]
-[CALBusyTimeOccurrence endDate]
-[CALBusyTimeOccurrence occurrenceID]
+[CalBackup copyPath:toPath:error:required:]
+[CalBackup movePath:toPath:error:required:]
+[CalBackup trashPath:error:required:]
+[CalBackup backupToPath:error:]
+[CalBackup backupToPath:backupRemoteCalendars:error:]
+[CalBackup restoreToBackupAtPath:]
+[CalBackup defaultLocalCalendarAttachmentsBackupPath]
+[CalBackup backupLocalCalendarAttachmentsToPath:]
___50+[CalBackup backupLocalCalendarAttachmentsToPath:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalBackup(Properties) backupFileExtension]
+[CalBackup(Properties) defaultBackupFileName]
+[CalBackup(Properties) defaultBackupFileNameWithExtension]
-[CoreEventOccurrence(Morphing) transformIntoTodo]
-[CALDAVPublishOperation initWithPublisher:withURL:]
-[CALDAVPublishOperation dealloc]
+[CALDAVPublishOperation canHandleURL:]
-[CALDAVPublishOperation performTask:]
-[CALDAVPublishOperation task:didFinishWithError:]
-[CALDAVPublishOperation setInfoWithNilCheck:forKey:]
-[CALDAVPublishOperation _checkCompatilityModeWithOldURL:]
-[CALDAVPublishOperation setEtag:]
-[CALDAVPublishOperation publishData:automatic:]
-[CALDAVPublishOperation unpublishDataWithAutomatic:]
-[CALDAVPublishOperation abortOperation]
-[CALDAVPublishOperation taskManager]
-[CALDAVPublishOperation setTaskManager:]
-[CALDAVPublishOperation accountInfoProvider]
-[CALDAVPublishOperation setAccountInfoProvider:]
-[CALDAVPublishOperation taskError]
-[CALDAVPublishOperation setTaskError:]
-[CALDAVPublishOperation taskInProgress]
-[CALDAVPublishOperation setTaskInProgress:]
+[CoreAlarmTrigger triggerWithDuration:withRelation:]
-[CoreAlarmTrigger initWithDuration:withRelation:]
-[CoreAlarmTrigger description]
-[CoreAlarmTrigger relation]
-[CoreAlarmTrigger setRelation:]
-[CoreAlarmTrigger signature]
+[CoreAlarmOccurrenceTrigger triggerWithDate:withOccurrenceDateID:]
-[CoreAlarmOccurrenceTrigger initWithDate:withOccurrenceDateID:]
-[CoreAlarmOccurrenceTrigger setOccurrenceDateID:]
-[CoreAlarmOccurrenceTrigger occurrenceDateID]
-[CoreAlarmOccurrenceTrigger date]
-[CoreAlarmOccurrenceTrigger setDate:]
-[CoreAlarm correspondingOccurrenceClass]
-[CoreAlarm isSimilarToAlarm:useCommittedValues:]
-[CoreAlarm setActionPropertyHackForiSync11:]
-[CoreAlarm notRelativeToTravelTime]
-[CoreAlarm setNotRelativeToTravelTime:]
-[CoreAlarm duration]
-[CoreAlarm repeat]
-[CoreAlarm setDuration:withRepeat:]
-[CoreAlarm markTriggerAsModified]
-[CoreAlarm acknowledgeAlarm]
-[CoreAlarm setRelatedTo:]
-[CoreAlarm isSnoozeAlarm]
-[CoreAlarm copyWithZone:]
-[CoreAlarm expandOnTimeRange:]
-[CoreAlarm uid]
-[CoreAlarm localUID]
-[CoreAlarm signature]
-[CoreAlarm removeAllOccurrenceTriggers]
-[CoreAlarm addOccurrenceTrigger:]
-[CoreAlarm triggerDate:forOccurrenceDateID:]
-[CoreAlarm removeOccurrenceTriggerForOccurrenceDateID:]
-[CoreAlarm humanReadableDescription]
-[CoreAlarm humanReadableDescriptionIsAllDay:]
-[CoreAlarm shortHumanReadableDescription]
-[CoreAlarm shortHumanReadableDescriptionIncludingTravelTime]
+[CoreAlarm humanReadableDescriptionForTrigger:]
+[CoreAlarm humanReadableDescriptionForTrigger:isAllDay:]
+[CoreAlarm humanReadableDescriptionForTrigger:isAllDay:travelDuration:includeAlert:abbreviate:]
-[CoreAlarm durationRelativeToTravel]
-[CoreAlarm shouldPretendAlarmTextRelativeToTravel]
+[CoreDisplayAlarm alarmWithTrigger:]
-[CoreDisplayAlarm correspondingOccurrenceClass]
-[CoreDisplayAlarm desc]
+[CoreDisplayAlarm humanReadableDescriptionForTrigger:isAllDay:]
-[CoreDisplayAlarm humanReadableDescription]
-[CoreDisplayAlarm humanReadableDescriptionIsAllDay:]
-[CoreMailAlarm initWithTrigger:]
+[CoreMailAlarm alarmWithTrigger:]
+[CoreMailAlarm alarmWithTrigger:withSummary:withDesc:]
-[CoreMailAlarm initWithTrigger:withSummary:withDesc:]
-[CoreMailAlarm correspondingOccurrenceClass]
-[CoreMailAlarm desc]
-[CoreMailAlarm setDesc:]
-[CoreMailAlarm summary]
-[CoreMailAlarm setSummary:]
-[CoreMailAlarm attachments]
-[CoreMailAlarm addAttachment:]
-[CoreMailAlarm removeAttachment:]
-[CoreMailAlarm attendees]
-[CoreMailAlarm addAttendee:]
-[CoreMailAlarm removeAttendee:]
-[CoreMailAlarm removeAllAttendees]
-[CoreMailAlarm humanReadableDescription]
-[CoreMailAlarm humanReadableDescriptionIsAllDay:]
+[CoreMailAlarm humanReadableDescriptionForTrigger:email:isAllDay:]
-[CoreProcAlarm initWithTrigger:]
+[CoreProcAlarm alarmWithTrigger:]
+[CoreProcAlarm alarmWithTrigger:withAttachment:]
-[CoreProcAlarm initWithTrigger:withAttachment:]
-[CoreProcAlarm correspondingOccurrenceClass]
-[CoreProcAlarm attachment]
-[CoreProcAlarm setAttachment:]
-[CoreProcAlarm desc]
-[CoreProcAlarm setDesc:]
-[CoreProcAlarm humanReadableDescription]
-[CoreProcAlarm humanReadableDescriptionIsAllDay:]
+[CoreProcAlarm humanReadableDescriptionForTrigger:bookmark:isAllDay:]
-[CalDAVSetCalendarColorQueueableOperation initWithChangeRequest:session:URI:colorString:colorName:]
-[CalDAVSetCalendarColorQueueableOperation dealloc]
-[CalDAVSetCalendarColorQueueableOperation performOperation]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___60-[CalDAVSetCalendarColorQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVSetCalendarColorQueueableOperation backupElement]
-[CalDAVSetCalendarColorQueueableOperation setBackupElement:]
-[CoreSoundAlarm correspondingOccurrenceClass]
-[CoreSoundAlarm humanReadableDescription]
-[CoreSoundAlarm humanReadableDescriptionIsAllDay:]
+[CoreSoundAlarm humanReadableDescriptionForTrigger:sound:isAllDay:]
+[CoreAlarmOccurrence occurrenceFromEntity:originOccurrence:]
-[CoreAlarmOccurrence isSnoozed]
-[CoreAlarmOccurrence setIsSnoozed:]
-[CoreAlarmOccurrence alarmEntity]
-[CoreAlarmOccurrence occurrenceID]
-[CoreAlarmOccurrence originOccurrence]
-[CoreAlarmOccurrence setOriginOccurrence:]
-[CoreAlarmOccurrence dealloc]
-[NSDate(LegacyTranslation) CALFloatingDateTimeInTimeZone:]
-[NSDate(LegacyTranslation) CALFloatingDateTimeInGMT]
-[NSDate(LegacyTranslation) convertToCALDateFromTimeZone:toTimeZone:isDateOnly:]
-[NSDate(LegacyTranslation) legacyDateAsType:timeZone:]
-[CalDAVSession initWithObjectID:]
-[CalDAVSession dealloc]
-[CalDAVSession deactivate]
-[CalDAVSession activate]
-[CalDAVSession reactivate]
-[CalDAVSession _setupQueueIfNecessary]
-[CalDAVSession passwordChanged:]
-[CalDAVSession updateAccountInfoProvider]
-[CalDAVSession goOnline]
-[CalDAVSession goOffline]
-[CalDAVSession operationQueue]
-[CalDAVSession _isRefreshing]
-[CalDAVSession _isPendingRefresh]
-[CalDAVSession synchronizeAndMigrateWithPreviousDelay:]
-[CalDAVSession synchronizeWithFlags:]
-[CalDAVSession synchronizeWithFlags:previousMigrateDelay:]
-[CalDAVSession synchronizeDelegatesWithCompletion:]
___52-[CalDAVSession synchronizeDelegatesWithCompletion:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVSession reschedule]
-[CalDAVSession _createScheduleCriteria]
-[CalDAVSession timerFiredWithInfo:]
-[CalDAVSession timeSinceLastSync]
___34-[CalDAVSession timeSinceLastSync]_block_invoke
___copy_helper_block_225
___destroy_helper_block_226
-[CalDAVSession needsSync]
-[CalDAVSession sourceWithID:]
-[CalDAVSession sourceWithID:shouldCreate:]
-[CalDAVSession removeSourceWithID:]
-[CalDAVSession updatePushState:]
-[CalDAVSession processChangeRequests:]
-[CalDAVSession persistErrorAndNotify]
-[CalDAVSession persistError:forChangeRequestID:]
-[CalDAVSession deletePersistedErrorAndNotify]
-[CalDAVSession attemptAutomaticConnect]
-[CalDAVSession managedPrincipalInContext:]
-[CalDAVSession systemNetworkDidChange]
-[CalDAVSession debugInfo]
-[CalDAVSession description]
-[CalDAVSession pushToken]
-[CalDAVSession setPushToken:]
-[CalDAVSession accountInfoProvider]
-[CalDAVSession setAccountInfoProvider:]
-[CalDAVSession calendarSources]
-[CalDAVSession setCalendarSources:]
-[CalDAVSession isDelegate]
-[CalDAVSession setIsDelegate:]
-[CalDAVSession fullRefreshDate]
-[CalDAVSession setFullRefreshDate:]
-[CalManagedCalDAVPrincipal(CalSession) wantsSession]
-[CalManagedCalDAVPrincipal(CalSession) activateSession]
-[CalManagedCalDAVPrincipal(CalSession) deactivateSession]
-[CalManagedCalDAVPrincipal(CalSession) session]
-[CalManagedCalDAVPrincipal(CalSession) safeRefreshInterval]
-[CalDAVFreeBusyResponseReader initWithRange:]
-[CalDAVFreeBusyResponseReader dealloc]
-[CalDAVFreeBusyResponseReader freeBusySpans]
+[CalDAVFreeBusyResponseReader addErrorFreeBusySpanToDictionary:recipient:range:type:]
+[CALWeekDayNumber weekDayNumberWithDay:withNumber:]
-[CALWeekDayNumber initWithDay:withNumber:]
-[CALWeekDayNumber isEqual:]
-[CALWeekDayNumber description]
-[CALWeekDayNumber compareDay:]
-[CoreRecurrenceRule initWithRecurrenceRule:]
-[CoreRecurrenceRule removeProperty:]
-[CoreRecurrenceRule propertyForName:]
-[CoreRecurrenceRule description]
-[CoreRecurrenceRule isEqualToPropertyValue:]
-[CoreRecurrenceRule setRange:]
-[CoreRecurrenceRule range]
-[CoreRecurrenceRule hasByParameter]
-[CoreRecurrenceRule setByWeekno:]
-[CoreRecurrenceRule setByYearDay:]
-[CoreRecurrenceRule setByMonthDay:]
-[CoreRecurrenceRule setByHour:]
-[CoreRecurrenceRule setByMinute:]
-[CoreRecurrenceRule setBySecond:]
-[CoreRecurrenceRule setBySetpos:]
-[CoreRecurrenceRule hasWeekStart]
-[CoreRecurrenceRule weekStart]
-[CoreRecurrenceRule numberOfOccurrences:withRecurrenceStart:]
-[CoreRecurrenceRule setInfinite]
-[CoreRecurrenceRule isInfinite]
-[CoreRecurrenceRule realOccurrencesOnTimeRange:withRecurrenceStart:alwaysIncludeStartDate:]
-[CoreRecurrenceRule week:forYear:withTimeZone:]
-[CoreRecurrenceRule generateByWeeknoOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule generateByYearDayOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule addPeriodicDay:toArray:withTimeRange:]
-[CoreRecurrenceRule generateByHourOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule generateByMinuteOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule generateBySecondOnTimeRange:withRecurrenceStart:]
-[CoreRecurrenceRule ruleMatchesDate:]
-[CoreRecurrenceRule proposedRuleForMovingFrom:to:changes:]
-[CoreRecurrenceRule acceptableMoveToTimeRangeForDate:]
-[CoreRecurrenceRule isEqualToRule:consideringStartDate:]
+[CoreRecurrenceRule dayOfMonthAsString:]
+[CoreRecurrenceRule weekDayPositionAsString:]
+[CoreRecurrenceRule daysTypeForDayArray:]
+[CoreRecurrenceRule daysOfWeek]
+[CoreRecurrenceRule numberedWeekDayString:]
+[CoreRecurrenceRule customDayCombinationDescription:]
+[CoreRecurrenceRule andDaysOfWeekString:]
+[CoreRecurrenceRule orDaysOfWeekString:]
-[CoreRecurrenceRule ICSStringForCALDay:]
-[CoreRecurrenceRule appendCALWeekDayNumber:toString:]
-[CoreRecurrenceRule appendCommaDelimitedCALWeekDayNumbers:toString:]
-[CoreRecurrenceRule appendCommaDelimitedNumbers:toString:]
-[CoreRecurrenceRule appendICSStringForCALDate:toString:]
-[CoreRecurrenceRule appendICSStringToString:]
-[CoreRecurrenceRule ICSString]
-[CoreRecurrenceRule fastPathEligible]
-[CoreRecurrenceRule _fastPathDeltaComponentsWithCount:]
-[CoreRecurrenceRule _recurrenceUnitsToJumpBetween:rangeStart:inCalendar:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_
___destroy_helper_block_
+[CalDAVAccountInfoProvider providerFromPrincipal:]
+[CalDAVAccountInfoProvider searchPropertySetForAccount:]
-[CalDAVAccountInfoProvider init]
-[CalDAVAccountInfoProvider isEqualToProvider:]
-[CalDAVAccountInfoProvider dealloc]
-[CalDAVAccountInfoProvider absoluteURLForPath:]
-[CalDAVAccountInfoProvider absoluteURLForPath:overrideBaseURL:]
-[CalDAVAccountInfoProvider principalURL]
-[CalDAVAccountInfoProvider promptUserForNewCoreDAVPasswordWithCompletionBlock:]
-[CalDAVAccountInfoProvider handleTrustChallenge:]
-[CalDAVAccountInfoProvider handleShouldUseCredentialStorage]
-[CalDAVAccountInfoProvider handleAuthenticateAgainstProtectionSpace:]
-[CalDAVAccountInfoProvider shouldTurnModalOnBadPassword]
-[CalDAVAccountInfoProvider noteHomeSetOnDifferentHost:]
-[CalDAVAccountInfoProvider noteCollectionSetNameChange:]
-[CalDAVAccountInfoProvider noteSearchPropertySetChange:]
-[CalDAVAccountInfoProvider shouldSendClientInfoHeaderForURL:]
-[CalDAVAccountInfoProvider additionalHeaderValues]
-[CalDAVAccountInfoProvider overrideBaseURL]
-[CalDAVAccountInfoProvider setOverrideBaseURL:]
-[CalDAVAccountInfoProvider useKerberos]
-[CalDAVAccountInfoProvider setUseKerberos:]
-[CalDAVAccountInfoProvider isDelegate]
-[CalDAVAccountInfoProvider setIsDelegate:]
-[CalDAVAccountInfoProvider isManagedAttachmentSupported]
-[CalDAVAccountInfoProvider setIsManagedAttachmentSupported:]
-[CalDAVAccountInfoProvider fullName]
-[CalDAVAccountInfoProvider setFullName:]
-[CalDAVAccountInfoProvider mainPrincipalUID]
-[CalDAVAccountInfoProvider setMainPrincipalUID:]
-[CalDAVAccountInfoProvider mainPrincipalID]
-[CalDAVAccountInfoProvider setMainPrincipalID:]
-[CalDAVAccountInfoProvider accountCollectionSetName]
-[CalDAVAccountInfoProvider setAccountCollectionSetName:]
-[CalDAVAccountInfoProvider accountSearchPropertySet]
-[CalDAVAccountInfoProvider setAccountSearchPropertySet:]
-[NSFileManager(CalAttachmentCacheSupport) uniquePathWithPreferredPath:]
+[CalAttachmentCache _validateAttachmentForCaching:]
+[CalAttachmentCache cacheDirectoryForAttachmentsInEntityWithSharedUID:sourcePath:]
+[CalAttachmentCache isAttachmentCachedWithFileName:forSharedUID:inSourcePath:]
+[CalAttachmentCache isAttachmentUnarchivedWithFileName:forSharedUID:inSourcePath:]
+[CalAttachmentCache addAttachment:toEntityWithSharedUID:sourcePath:]
+[CalAttachmentCache moveCacheDirectoryForEntityWithSharedUID:fromSourcePath:toSourcePath:]
+[CalAttachmentCache _etagCacheForEntityAttachmentsSharedUID:sourcePath:]
+[CalAttachmentCache etagForAttachment:inEntityWithSharedUID:sourcePath:]
+[CalAttachmentCache setEtag:forAttachment:inEntityWithSharedUID:sourcePath:]
+[CalAttachmentCache etagEntriesForEntityWithSharedUID:sourcePath:]
+[CalAttachmentCache etagFileNameAtIndex:inEntityWithSharedUID:sourcePath:]
+[CalAttachmentCache icalURLForAttachment:inCalendar:filename:]
+[CalAttachmentCache pathToAttachmentCacheForCalendarItem:inCalendar:]
+[CalAttachmentCache pathToAttachmentCacheForCalendarItem:]
+[CalAttachmentCache pathToAttachment:inCalendar:]
+[CalAttachmentCache pathToAttachment:]
+[CalAttachmentCache pathToAttachmentWithICalURL:]
+[CalAttachmentCache setQuarantineProperties:forCalendarItem:inCalendar:]
+[CalAttachmentCache addAttachment:inCalendar:overwriteExisting:]
+[CalAttachmentCache _writeAttachment:inCalendar:originalURL:overwriteExisting:]
+[CalAttachmentCache removeAttachment:]
+[CalAttachmentCache removeCacheDirectory:]
-[CalArchiveFileWrapper dealloc]
-[CalArchiveFileWrapper finalize]
-[CalArchiveFileWrapper initWithData:archiveType:]
-[CalArchiveFileWrapper writeToFile:atomically:updateFilenames:]
_fatalBomError
_fatalBomFileError
-[CalArchiveFileWrapper approximateSize]
-[CalArchiveFileWrapper isRegularFile]
-[CalArchiveFileWrapper isDirectory]
-[CalArchiveFileWrapper isSymbolicLink]
-[CalArchiveFileWrapper serializedRepresentation]
__getRealFileWrapper
-[CalArchiveFileWrapper addFileWrapper:]
-[CalArchiveFileWrapper removeFileWrapper:]
-[CalArchiveFileWrapper fileWrappers]
-[CalArchiveFileWrapper keyForFileWrapper:]
-[CalArchiveFileWrapper addFileWithPath:]
-[CalArchiveFileWrapper addRegularFileWithContents:preferredFilename:]
-[CalArchiveFileWrapper addSymbolicLinkWithDestination:preferredFilename:]
-[CalArchiveFileWrapper preferredFilename]
-[CalArchiveFileWrapper getCompressedData:archiveType:]
-[CalFileCDChangeTracker insureDirectoryAtPath:]
-[CalFileCDChangeTracker setBasePath:]
-[CalFileCDChangeTracker init]
-[CalFileCDChangeTracker dealloc]
-[CalFileCDChangeTracker getFileNames]
-[CalFileCDChangeTracker dictionaryFromFile:]
-[CalFileCDChangeTracker mergeChangesFrom:to:]
-[CalFileCDChangeTracker getAllChanges]
-[CalFileCDChangeTracker tempFile]
-[CalFileCDChangeTracker storeChanges:]
-[CalFileCDChangeTracker deleteFiles:]
___38-[CalFileCDChangeTracker deleteFiles:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalFileCDChangeTracker clearAllStoredChanges]
-[CalFileCDChangeTracker clearProcessedChanges]
-[CalPublisherManager autoPublishEnabled]
-[CalPublisherManager dealloc]
-[CalPublisherManager finalize]
-[CalPublisherManager removeAllPublishers]
-[CalPublisherManager publisherForKey:]
-[CalPublisherManager setPublisher:forKey:]
-[CalPublisherManager removePublisherForKey:]
___copy_helper_block_
___destroy_helper_block_
-[CalPublisherManager(Private) cancelAutoPublish]
-[CalPublisherManager(Private) publishNeeded:]
__encodeBase64Data
+[CaliTIPHandler logiTIPDetail]
+[CaliTIPHandler setLogiTIPDetail:]
+[CaliTIPHandler process:preferCalendar:inManagedObjectContext:]
+[CaliTIPHandler scheduleWithCalendarItem:]
+[CaliTIPHandler diffsAreImportant:]
+[CaliTIPHandler shouldMarkAsScheduleAgentClientForCalendar:forMaster:forMessage:]
+[CaliTIPHandler markAsScheduleAgentClient:]
+[CaliTIPHandler markAsScheduleAgentClientForEvent:]
+[CaliTIPHandler acknowledgeMessages:pendingMessages:]
+[CaliTIPHandler acknowledgeMessages:pendingMessages:doAsyncWithCompletionBlock:]
___81+[CaliTIPHandler acknowledgeMessages:pendingMessages:doAsyncWithCompletionBlock:]_block_invoke
___81+[CaliTIPHandler acknowledgeMessages:pendingMessages:doAsyncWithCompletionBlock:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
+[CaliTIPHandler acknowledgeMessage:pendingMessages:]
+[CaliTIPHandler acknowledgeMessage:pendingMessages:doAsyncWithCompletionBlock:]
___80+[CaliTIPHandler acknowledgeMessage:pendingMessages:doAsyncWithCompletionBlock:]_block_invoke
___copy_helper_block_233
___destroy_helper_block_234
___80+[CaliTIPHandler acknowledgeMessage:pendingMessages:doAsyncWithCompletionBlock:]_block_invoke237
___copy_helper_block_240
___destroy_helper_block_241
+[CaliTIPHandler removeMessages:doAsyncWithCompletionBlock:]
___60+[CaliTIPHandler removeMessages:doAsyncWithCompletionBlock:]_block_invoke
___60+[CaliTIPHandler removeMessages:doAsyncWithCompletionBlock:]_block_invoke_2
___copy_helper_block_265
___destroy_helper_block_266
+[CaliTIPHandler replyToMessage:withStatus:placingInCalendar:conflictDecisionBlock:doAsyncWithCompletionBlock:]
___111+[CaliTIPHandler replyToMessage:withStatus:placingInCalendar:conflictDecisionBlock:doAsyncWithCompletionBlock:]_block_invoke
___copy_helper_block_288
___destroy_helper_block_289
___111+[CaliTIPHandler replyToMessage:withStatus:placingInCalendar:conflictDecisionBlock:doAsyncWithCompletionBlock:]_block_invoke292
___copy_helper_block_293
___destroy_helper_block_294
+[CaliTIPHandler replyToInviteMessages:withStatus:placingInCalendar:inContext:conflictDecisionBlock:doAsyncWithCompletionBlock:]
___128+[CaliTIPHandler replyToInviteMessages:withStatus:placingInCalendar:inContext:conflictDecisionBlock:doAsyncWithCompletionBlock:]_block_invoke
___copy_helper_block_313
___destroy_helper_block_314
___128+[CaliTIPHandler replyToInviteMessages:withStatus:placingInCalendar:inContext:conflictDecisionBlock:doAsyncWithCompletionBlock:]_block_invoke317
___copy_helper_block_318
___destroy_helper_block_319
+[CaliTIPHandler resourceUpdatedDiffsFromCalDAVOccurrenceChange:]
___67+[CaliTIPHandler(Private) iTIPCompletionBlockForPrincipal:context:]_block_invoke
___copy_helper_block_436
___destroy_helper_block_437
+[CaliTIPHandler(Private) insertChangeRequestForEvent:type:context:]
+[CaliTIPHandler(Private) setReply:onEvent:forAddress:]
+[CaliTIPHandler(Private) process:principal:preferCalendar:existingUIDs:delayFlag:inManagedObjectContext:]
+[CaliTIPHandler(Private) process:principal:preferCalendar:existingUIDs:delayFlag:inManagedObjectContext:withPrefetchDictionary:]
+[CaliTIPHandler(Private) process:principal:inManagedObjectContext:]
+[CaliTIPHandler(Private) cancelEvent:inMessage:masterEvent:principal:existingUIDs:]
+[CaliTIPHandler(Private) cancelEvent:inMessage:masterEvent:principal:]
+[CaliTIPHandler(Private) getChanges:forIncomingEvent:withOccurrences:onCalendar:managedEvent:masterEvent:principal:attendee:inManagedObjectContext:]
+[CaliTIPHandler(Private) requestForEvent:withOccurrences:inMessage:masterEvent:delayFlag:principal:preferCalendar:inManagedObjectContext:withPrefetchDictionary:]
+[CaliTIPHandler(Private) calculateDiffsForEvent:]
+[CaliTIPHandler(Private) calculateDiffsForEvent:changedProperties:]
-[CALEntity(CalendariTIP) finishReplyToInvitationWithStatus:moveToCalendar:inManagedObjectContext:]
-[CalManagedEvent(CalendariTIP) _finishNonImplicitReplyOnMasterEvent:forEvents:status:putInCalendar:context:]
-[CalManagedEvent(CalendariTIP) replyWithStatus:fromMessage:putInCalendar:conflictDecisionBlock:handledMessage:]
___112-[CalManagedEvent(CalendariTIP) replyWithStatus:fromMessage:putInCalendar:conflictDecisionBlock:handledMessage:]_block_invoke
___copy_helper_block_1112
___destroy_helper_block_1113
-[CalManagedEvent(CalendariTIP) checkAndPromptForConflictsWithStatus:conflictDecisionBlock:]
_sleepytime
+[CalNetworkChangeNotifier disableNotifications]
-[CalNetworkChangeNotifier _delayPost]
-[CalNetworkChangeNotifier _cancelPost]
-[CalNetworkChangeNotifier _cancelAndRepostIfNecessary]
-[CalNetworkChangeNotifier _sendNotification]
-[CalNetworkChangeNotifier _goingToSleep:]
-[CalNetworkChangeNotifier _wakeUp:]
__networkChangeCallBack
___copy_helper_block_
___destroy_helper_block_
-[CalNetworkChangeNotifier dealloc]
+[CalNetworkChangeNotifier isNetworkUp]
+[CalNetworkChangeNotifier isHostReachable:]
-[CalNetworkChangeNotifier isNetworkUp]
-[CalNetworkChangeNotifier isHostReachable:]
-[CalBagChangeMonitor unregisterListeners]
___copy_helper_block_
___destroy_helper_block_
-[CalBagChangeMonitor managedObjectContextDidReset:]
___52-[CalBagChangeMonitor managedObjectContextDidReset:]_block_invoke
+[CalBagChangeMonitor disableForUnitTests]
-[RBNode dealloc]
-[RBNode key]
-[RBNode setKey:]
-[RBNode value]
-[RBNode setValue:]
-[RBNode left]
-[RBNode setLeft:]
-[RBNode right]
-[RBNode setRight:]
-[RBNode parent]
-[RBNode setParent:]
-[RBNode isBlack]
-[RBNode setIsBlack:]
-[CALRedBlackNode description]
-[CALRedBlackTree _rightRotate:]
-[CALRedBlackTree _leftRotate:]
-[CALRedBlackTree _recursiveFindNodeWithKey:fromNode:]
-[CALRedBlackTree _recursiveSmallestNodeWithKeyGreaterThanOrEqualTo:fromNode:]
-[CALRedBlackTree _balanceAfterRemove:isRight:isDone:]
-[CALRedBlackTree objectForKey:]
-[CALRedBlackTree nodeAtOrAboveKey:]
-[CALRedBlackTree _recursiveTraverseFromNode:intoArray:]
-[CALRedBlackTree allNodes]
-[CALRedBlackTree description]
-[CALRedBlackTree count]
-[CALRedBlackTree root]
-[CALRedBlackTree setRoot:]
-[CalDAVFreeBusyCache initWithPrincipalID:]
-[CalDAVFreeBusyCache cleanUp]
-[CalDAVFreeBusyCache dealloc]
___copy_helper_block_
___destroy_helper_block_
___Block_byref_object_copy_
___Block_byref_object_dispose_
___113-[CalDAVFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]_block_invoke
___113-[CalDAVFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]_block_invoke_2
___copy_helper_block_58
___destroy_helper_block_59
___copy_helper_block_61
___destroy_helper_block_62
+[CalDAVResource resourceWithCalDAVCalendarItemData:]
-[CalDAVResource dealloc]
-[CalDAVResource filename]
-[CalDAVResource setFilename:]
-[CalDAVResource etag]
-[CalDAVResource setEtag:]
-[CalDAVResource scheduleTag]
-[CalDAVResource setScheduleTag:]
-[CalDAVResource data]
-[CalDAVResource setData:]
-[CalDAVResource scheduleChanges]
-[CalDAVResource setScheduleChanges:]
-[CalManagedSource entitiesMatchingSearchElement:inManagedObjectContext:]
-[CalManagedSource addEntities:inManagedObjectContext:]
-[CalManagedSource modifyEntities:inManagedObjectContext:]
-[CalManagedSource removeEntity:inManagedObjectContext:]
-[CalManagedSource removeEntities:inManagedObjectContext:]
-[CalManagedSource hasEntitiesInManagedObjectContext:]
-[CalManagedSource eventsWithFutureInvitationsInManagedObjectContext:]
-[CalCalDAVCalendarSource(Private) debugDescription]
-[CalCalDAVCalendarSource(Private) addEntities:fromServer:inManagedObjectContext:]
-[CalCalDAVCalendarSource(Private) modifyEntities:fromServer:inManagedObjectContext:]
-[CalCalDAVCalendarSource(Private) removeEntity:fromServer:inManagedObjectContext:]
-[CalCalDAVCalendarSource(Private) removeEntities:fromServer:inManagedObjectContext:]
-[CalCalDAVCalendarSource timeZone]
-[CalCalDAVCalendarSource principalUID]
-[CalCalDAVCalendarSource backingPrincipal]
-[CalCalDAVCalendarSource backingPrincipalInContext:]
+[CalCalDAVCalendarSource propertiesForListContents]
-[CalCalDAVCalendarSource addEntities:inManagedObjectContext:]
-[CalCalDAVCalendarSource modifyEntities:inManagedObjectContext:]
-[CalCalDAVCalendarSource removeEntity:inManagedObjectContext:]
-[CalCalDAVCalendarSource removeEntities:inManagedObjectContext:]
-[CalCalDAVCalendarSource allowsSchedulingByMe]
-[CalCalDAVCalendarSource principalID]
-[CalCalDAVCalendarSource setPrincipalID:]
-[CalLocalCalendarSource hasCapability:]
-[CalSubscriptionCalendarSource isSubscription]
-[CalIMAPCalendarSource hasCapability:]
-[CaliTIPMessage initWithData:filename:]
-[CaliTIPMessage compare:]
-[CaliTIPMessage description]
-[CaliTIPMessage serverFilename]
-[CaliTIPMessage setLocalImport:]
-[CALOccurrence(UltraPrivateSwapOccurrenceHack) setOccurrableEntity:]
-[CALEntity copyWithZone:]
-[CALEntity correspondingOccurrenceClass]
-[CALEntity cleanUp]
___24-[CALEntity markAsClean]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___18-[CALEntity dirty]_block_invoke
___copy_helper_block_63
___destroy_helper_block_64
-[CALEntity _propogateAlarmsWithModifiedAlarms:deletedAlarms:]
-[CALEntity _propogateAttendeesWithMeAddress:modifiedProperties:parentEntity:]
-[CALEntity needsDetachmentDecision]
-[CALEntity setSharedUIDForMainAndDetached:localUID:]
___53-[CALEntity setSharedUIDForMainAndDetached:localUID:]_block_invoke
___copy_helper_block_333
___destroy_helper_block_334
-[CALEntity templateData]
-[CALEntity setTemplateData:]
-[CALEntity cancelItemID]
-[CALEntity setCancelItemID:]
-[CALEntity iconInformation]
-[CALEntity setIconInformation:]
-[CALEntity invitationUID]
-[CALEntity removeInvitationUID]
-[CALEntity setInvitationUID:]
-[CALEntity invitationUIDorUID]
-[CALEntity hasInvitationUID]
-[CALEntity shouldPushInvitationUID]
-[CALEntity adoptInvitationUID:]
-[CALEntity comment]
-[CALEntity setComment:]
-[CALEntity attendeeCommentsForCurrentAttendees]
-[CALEntity forceDatesToGMT]
-[CALEntity classification]
-[CALEntity setClassification:]
-[CALEntity lastModificationDate]
-[CALEntity setLastModificationDate:]
-[CALEntity defaultAlarm]
-[CALEntity alarmWithSignature:]
-[CALEntity hasAlarms]
-[CALEntity setAlarmsOriginEntity]
-[CALEntity _isInvitee]
-[CALEntity shouldWarnUserOnMoveToExchangeRepository:]
-[CALEntity shouldWarnUserOnMoveToExchangeCalendar:]
-[CALEntity _makeExchangeCompatible]
-[CALEntity _makeAlarmExchangeCompatible:]
-[CALEntity _isAlarmExchangeCompatible:]
-[CALEntity removeAttendeesInviteeSideExchange]
-[CALEntity makeExchangeCompatible]
-[CALEntity isExchangeCompatible]
-[CALEntity undeleteDefaultAlarms]
-[CALEntity undeleteDefaultAlarmsInContext:]
-[CALEntity defaultAlarmsBasedOnItemAndPreferencesInContext:]
-[CALEntity myAddressIgnoringMeCard:]
-[CALEntity _updateCachedMyAddressWithAttendee:ignoreMeCard:]
-[CALEntity _updateCachedMyAddressNotHereIgnoringMeCard:]
-[CALEntity isAddressMe:ignoreMeCard:]
-[CALEntity isOrganizerScheduleAgentNonServer]
-[CALEntity isOrganizerOwner]
-[CALEntity hasAttendeesNoInherit]
-[CALEntity attendeesNoInherit]
-[CALEntity hasUninvitedAttendees]
-[CALEntity attendeesExcludingRoomType]
-[CALEntity attendeesExcludingRoomTypeAndOrganizer]
-[CALEntity attendeeIncludingUnivitedWithAddress:]
-[CALEntity removeOrUninviteAttendee:]
-[CALEntity removeAttendee:]
-[CALEntity removeAttendeeSimilarToAttendee:]
-[CALEntity hasInvitedAttendees]
-[CALEntity hasInvitedAttendeesIncludingChildren]
-[CALEntity resetParticipationStatus]
-[CALEntity resetParticipationStatusTo:]
-[CALEntity relatedTos]
-[CALEntity addRelatedTo:]
-[CALEntity setRelatedTos:]
-[CALEntity removeAllRelatedTos]
-[CALEntity removeRelatedTo:]
-[CALEntity categories]
-[CALEntity addCategory:]
-[CALEntity setCategories:]
-[CALEntity removeAllCategories]
-[CALEntity removeCategory:]
-[CALEntity addAttachment:]
-[CALEntity removeAttachment:]
-[CALEntity removeAllAttachments]
-[CALEntity attachmentWithURL:]
-[CALEntity attachmentWithFileName:]
-[CALEntity setHasDropBox:]
-[CALEntity attachmentsLocation]
-[CALEntity setDropBoxLocation:]
-[CALEntity _filesystemURLForFilename:]
-[CALEntity _getPathsForOldAttachmentsWithSameNameAsAnyOfNewOnes:]
-[CALEntity _removeAttachmentsFromArrayFromSelf:]
-[CALEntity _removeOldAttachmentsWithSameNameAsAnyOfNewOnes:]
-[CALEntity _notAllowedToAddAttachments]
-[CALEntity _getValidDropBoxLocationFromPrincipal:]
-[CALEntity _getFilePathOnServer:withPrincipal:]
-[CALEntity _addURL:inCalDAVCalendar:withContext:]
-[CALEntity _addURL:inNonCalDAVCalendar:]
-[CALEntity _addURL:withContext:]
-[CALEntity addNewAttachments:withContext:]
-[CALEntity removeAndProcessAttachments:]
-[CALEntity upperBoundDate]
-[CALEntity occurrencesFromDates:]
-[CALEntity expandOnTimeRange:]
-[CALEntity compare:]
-[CALEntity versionForVersionTag:]
-[CALEntity versions]
-[CALEntity hasOccurrenceInTheFuture]
-[CALEntity setETagShouldBeNil:]
-[CALEntity isPhantom]
-[CALEntity ownerAddresses]
-[CALEntity dropBoxLocationOverrideBaseURL]
-[CALEntity setDropBoxLocationOverrideBaseURL:]
-[CALEntity(detachedEntity) setParentEntity:]
-[CALEntity(detachedEntity) _setParent:]
-[CALEntity(detachedEntity) setRecurID:]
-[CALEntity(parentEntity) recurrenceIDTag]
-[CALEntity(parentEntity) addChild:]
-[CALEntity(parentEntity) removeChild:]
-[CALEntity(parentEntity) detach:inManagedObjectContext:]
-[CALEntity(parentEntity) undetach:]
-[CALEntity(parentEntity) deleteDetach:]
-[CALEntity(parentEntity) deleteDetach:inManagedObjectContext:]
-[CALEntity(parentEntity) undeleteDetach:]
-[CALEntity(parentEntity) redetach:]
-[CALEntity(parentEntity) sliceOn:inManagedObjectContext:]
-[CALEntity(parentEntity) cleanOldExceptionDates]
-[CALEntity(parentEntity) cleanExceptionsAtDate:]
___49-[CALEntity(parentEntity) cleanExceptionsAtDate:]_block_invoke
___copy_helper_block_1160
___destroy_helper_block_1161
-[CALEntity(parentEntity) childWithRecurrenceID:]
-[CALEntity(parentEntity) childWithRecurrenceIDTag:]
-[CALEntity(parentEntity) recurrenceIDDatesOfChildren]
___54-[CALEntity(parentEntity) recurrenceIDDatesOfChildren]_block_invoke
___copy_helper_block_1165
___destroy_helper_block_1166
-[CALEntity(parentEntity) registerChildEntity:]
-[CALEntity(parentEntity) unregisterChildEntity:]
-[CALEntity(parentEntity) moveToRepository:inManagedObjectContext:]
-[CALEntity(parentEntity) deleteFromRepositoryInManagedObjectContext:]
-[CALEntity(SearchHack) searchMetaData]
-[CALEntity(SearchHack) setSearchMetaData:]
-[CalSubscriptionOperation protectionSpace]
-[CalSubscriptionOperation response]
-[CalSubscriptionOperation downloadAsynchronously]
___36-[CalSubscriptionOperation download]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalSubscriptionOperation generateAuthenticationError]
-[CalSubscriptionOperation operationProgress]
-[CalSubscriptionOperation operationTotal]
-[CalSubscriptionOperation calendarID]
-[CalSubscriptionOperation createLocalSubscriptionCalendarInContext:]
-[CalSubscriptionOperation createCalDAVSubscriptionCalendarForAccount:]
-[CalSubscriptionOperation _createCalendarHelper:withAccount:context:]
-[CalSubscriptionOperation abortOperation]
-[CalSubscriptionOperation calendarIsEventContainer]
-[CalSubscriptionOperation calendarIsTaskContainer]
-[CalSubscriptionOperation(NSURLConnectionDelegate) connection:didReceiveAuthenticationChallenge:]
-[CalSubscriptionOperation(NSURLConnectionDelegate) connection:didFailWithError:]
___81-[CalSubscriptionOperation(NSURLConnectionDelegate) connection:didFailWithError:]_block_invoke
___copy_helper_block_580
___destroy_helper_block_581
+[CalSessionPool sessionForSessionID:]
+[CalSessionPool sessionsOfType:]
+[CalSessionPool removeSessionForSessionID:]
+[CalSessionPool timerFiredWithInfo:]
+[CalSessionPool synchronizeAll]
+[CalSessionPool synchronizeAllWithFlags:]
-[CalSession initWithSessionID:]
-[CalSession schedule]
-[CalSession _schedule]
___23-[CalSession _schedule]_block_invoke
-[CalSession unschedule]
-[CalSession reschedule]
-[CalSession updatePushState:]
-[CalSession _createScheduleCriteria]
-[CalSession timerFiredWithInfo:]
-[CalSession timeSinceLastSync]
-[CalSession needsSyncDueToTime]
-[CalSession needsSync]
-[CalSession goOnline]
-[CalSession goOffline]
-[CalSession isOffline]
-[CalSession isOfflineOrError]
-[CalSession setError:status:]
-[CalSession broadcastStatusUpdate]
-[CalSession deactivate]
-[CalSession activate]
-[CalSession reactivate]
-[CalSession synchronize]
-[CalSession synchronizeWithFlags:]
-[CalSession synchronizeDelegatesWithCompletion:]
-[CalSession processChangeRequests:]
-[CalSession persistErrorAndNotify]
-[CalSession deletePersistedErrorAndNotify]
-[CalSession managedObjectInContext:]
+[CalSession knownNonNodeSessionIDs]
___36+[CalSession knownNonNodeSessionIDs]_block_invoke
-[CalSession systemNetworkDidChange]
-[CalSession systemWillSleep]
-[CalSession systemDidWake]
-[CalSession debugInfo]
-[CalSession description]
-[CalSession interval]
-[CalSession setInterval:]
-[CalSession sessionID]
-[CalSession setSessionID:]
-[CalManagedNode(CalSession) wantsSession]
-[CalManagedNode(CalSession) activateSession]
-[CalManagedNode(CalSession) deactivateSession]
-[CalManagedNode(CalSession) refreshSession]
-[CalManagedNode(CalSession) refreshSession:]
-[CalManagedNode(CalSession) session]
-[CalSubscriptionSession reschedule]
-[CalSubscriptionSession timeSinceLastSync]
___43-[CalSubscriptionSession timeSinceLastSync]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalSubscriptionSession needsSync]
-[CalSubscriptionSession synchronizeWithFlags:]
-[CalSubscriptionSession persistErrorAndNotify]
-[CalSubscriptionSession deletePersistedErrorAndNotify]
-[CalSubscriptionSession onNextSyncTryUsername:andPassword:]
-[CalSubscriptionSession subscription:didReceiveAuthenticationChallenge:]
-[CalSubscriptionSession subscription:didFailWithError:]
-[CalSubscriptionSession systemNetworkDidChange]
-[CalSubscriptionSession username]
-[CalSubscriptionSession password]
-[CalSubscriptionSession isAutoRefreshed]
-[CalSubscriptionSession setIsAutoRefreshed:]
-[CalSubscriptionSession needsRefresh]
-[CalSubscriptionSession setNeedsRefresh:]
-[CalManagedSubscriptionCalendar(CalSession) wantsSession]
-[CalManagedSubscriptionCalendar(CalSession) activateSession]
-[CalManagedSubscriptionCalendar(CalSession) refreshSession]
-[CalManagedSubscriptionCalendar(CalSession) refreshSession:]
-[CalManagedSubscriptionCalendar(CalSession) session]
-[CalManagedCalDAVSubscribedCalendar(CalSession) wantsSession]
-[CalManagedCalDAVSubscribedCalendar(CalSession) activateSession]
-[CalManagedCalDAVSubscribedCalendar(CalSession) refreshSession]
-[CalManagedCalDAVSubscribedCalendar(CalSession) refreshSession:]
-[CalManagedCalDAVSubscribedCalendar(CalSession) session]
-[CalManagedSubscriptionInfo(CalSession) _activateSession]
-[CalManagedSubscriptionInfo(CalSession) _refreshSession]
-[CalManagedSubscriptionInfo(CalSession) _refreshSession:]
-[CalManagedSubscriptionInfo(CalSession) _session]
-[CalExchangeSession initWithSessionID:]
-[CalExchangeSession dealloc]
-[CalExchangeSession deactivate]
-[CalExchangeSession activate]
-[CalExchangeSession timeSinceLastSync]
___39-[CalExchangeSession timeSinceLastSync]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalExchangeSession operationQueue]
-[CalExchangeSession webServicesURL]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___36-[CalExchangeSession webServicesURL]_block_invoke
___copy_helper_block_61
___destroy_helper_block_62
-[CalExchangeSession mailModifiedEWSInvitation:]
-[CalExchangeSession synchronizeWithFlags:]
-[CalExchangeSession synchronizeDelegatesWithCompletion:]
-[CalExchangeSession processChangeRequests:]
-[CalExchangeSession persistErrorAndNotify]
-[CalExchangeSession persistError:forOperation:]
-[CalExchangeSession deletePersistedErrorAndNotify]
-[CalExchangeSession exchangeServiceBinding:didCancelAuthenticationChallenge:]
-[CalExchangeSession exchangeServiceBinding:didReceiveAuthenticationChallenge:]
-[CalExchangeSession itemIdForManagedObjectID:]
-[CalExchangeSession setItemId:forManagedObjectID:]
-[CalExchangeSession managedPrincipalInContext:]
-[CalExchangeSession systemNetworkDidChange]
-[CalExchangeSession debugInfo]
-[CalManagedExchangePrincipal(CalSession) wantsSession]
-[CalManagedExchangePrincipal(CalSession) activateSession]
-[CalManagedExchangePrincipal(CalSession) session]
-[CalExchangeCalendarSource freeBusyCache]
-[CalExchangeCalendarSource dealloc]
-[CalExchangeCalendarSource calendarUserAddressIsEquivalentToURL:]
-[CalExchangeCalendarSource host]
-[CalExchangeCalendarSource isDelegate]
-[CalExchangeCalendarSource meForSource]
-[CalExchangeCalendarSource sessionID]
-[CalExchangeSyncFolderItemsOperation initWithSession:folderId:]
-[CalExchangeSyncFolderItemsOperation debugTitle]
-[CalExchangeSyncFolderItemsOperation debugDescription]
+[CalExchangeSyncAccountOperation getFolderResponseShape]
-[CalExchangeSyncAccountOperation syncDelegate:binding:error:]
-[CalExchangeSyncAccountOperation debugTitle]
-[CalExchangeGetAttachmentOperation initWithSession:attachmentIDs:forCalendarItem:]
-[CalExchangeGetAttachmentOperation dealloc]
-[CalExchangeGetAttachmentOperation executeWithBinding:inSession:inContext:error:]
___82-[CalExchangeGetAttachmentOperation executeWithBinding:inSession:inContext:error:]_block_invoke
-[CalExchangeGetAttachmentOperation debugTitle]
-[CalExchangeGetAttachmentOperation debugDescription]
-[CalExchangeGetAttachmentOperation messageTracerName]
-[CalExchangeGetAttachmentOperation messageTracerUUID]
+[CalSQLCDChangeTracker trackContextChangesIn:storingAtURL:]
+[CalSQLCDChangeTracker trackChangesFromStoreAtURL:toURL:directlyMonitorSaves:]
+[CalSQLCDChangeTracker usingChangesAtURL:]
-[CalSQLCDChangeTracker syncSchemaEntityNameOf:]
-[CalSQLCDChangeTracker getAllChanges]
-[CalSQLCDChangeTracker openDatabaseAtURL:createIfMissing:]
-[CalSQLCDChangeTracker initUsingChangesAtURL:]
-[CalSQLCDChangeTracker _prepareStmt:text:]
-[CalSQLCDChangeTracker _finishStmt:]
-[CalSQLCDChangeTracker _initFromDB]
-[CalSQLCDChangeTracker _readGeneration]
-[CalSQLCDChangeTracker getGeneration]
-[CalSQLCDChangeTracker _incrementGeneration]
-[CalSQLCDChangeTracker _setGeneration:]
-[CalSQLCDChangeTracker clearProcessedChanges]
-[CalSQLCDChangeTracker clearAllStoredChanges]
-[CalSQLCDChangeTracker dealloc]
-[CalSQLCDChangeTracker _createTables]
-[CalSQLCDChangeTracker _prepareStatements]
-[CalSQLCDChangeTracker _finishStatements]
-[CalSQLCDChangeTracker _beginTransaction]
-[CalSQLCDChangeTracker _commitTransaction]
-[CalSQLCDChangeTracker _updateObjectIdentifier:withEntityName:asDeleted:]
-[CalSQLCDChangeTracker sourceURL]
-[CalSQLCDChangeTracker setSourceURL:]
-[CalSQLCDChangeTracker storageURL]
-[CalSQLCDChangeTracker setStorageURL:]
-[CalSQLCDChangeTracker persistentStoreCoordinator]
-[CalSQLCDChangeTracker setPersistentStoreCoordinator:]
-[CalExchangeDeleteItemOperation initWithSessionID:itemId:itemObjectID:itemName:itemType:shouldSendCancellation:]
-[CalExchangeDeleteItemOperation itemId]
-[CalExchangeDeleteItemOperation objectID]
-[CalExchangeDeleteItemOperation dealloc]
-[CalExchangeDeleteItemOperation deleteItemsWithIds:binding:inContext:error:]
-[CalExchangeDeleteItemOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeDeleteItemOperation createRevertOperationInContext:inSession:]
-[CalExchangeDeleteItemOperation shouldDeletePendingOperation:]
-[CalExchangeDeleteItemOperation errorDescription]
-[CalExchangeDeleteItemOperation debugTitle]
-[CalExchangeDeleteItemOperation debugDescription]
-[CalExchangeDeleteItemOperation encodeWithCoder:]
-[CalExchangeDeleteItemOperation initWithCoder:]
-[CalExchangeDeleteItemOperation messageTracerName]
-[CalExchangeDeleteItemOperation messageTracerUUID]
-[CalExchangeUpdateCalendarItemOperation initWithSessionID:eventID:changedValues:shouldSendInvitation:]
-[CalExchangeUpdateCalendarItemOperation objectID]
-[CalExchangeUpdateCalendarItemOperation dealloc]
-[CalExchangeUpdateCalendarItemOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeUpdateCalendarItemOperation createRevertOperationInContext:inSession:]
-[CalExchangeUpdateCalendarItemOperation shouldDeletePendingOperation:]
-[CalExchangeUpdateCalendarItemOperation encodeWithCoder:]
-[CalExchangeUpdateCalendarItemOperation initWithCoder:]
-[CalExchangeUpdateCalendarItemOperation debugTitle]
-[CalExchangeUpdateCalendarItemOperation debugDescription]
-[CalExchangeUpdateCalendarItemOperation messageTracerName]
-[CalExchangeUpdateCalendarItemOperation messageTracerUUID]
-[CalExchangeUpdateCalendarItemOperation eventID]
-[CalExchangeCreateTaskOperation initWithSessionID:taskID:]
-[CalExchangeCreateTaskOperation objectID]
-[CalExchangeCreateTaskOperation dealloc]
-[CalExchangeCreateTaskOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeCreateTaskOperation createRevertOperationInContext:inSession:]
-[CalExchangeCreateTaskOperation shouldDeletePendingOperation:]
-[CalExchangeCreateTaskOperation debugTitle]
-[CalExchangeCreateTaskOperation debugDescription]
-[CalExchangeCreateTaskOperation encodeWithCoder:]
-[CalExchangeCreateTaskOperation initWithCoder:]
-[CalExchangeCreateTaskOperation messageTracerName]
-[CalExchangeCreateTaskOperation messageTracerUUID]
-[CalExchangeCreateCalendarItemOperation initWithSessionID:eventID:shouldSendInvitation:]
-[CalExchangeCreateCalendarItemOperation objectID]
-[CalExchangeCreateCalendarItemOperation dealloc]
-[CalExchangeCreateCalendarItemOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeCreateCalendarItemOperation createRevertOperationInContext:inSession:]
-[CalExchangeCreateCalendarItemOperation shouldDeletePendingOperation:]
-[CalExchangeCreateCalendarItemOperation debugTitle]
-[CalExchangeCreateCalendarItemOperation debugDescription]
-[CalExchangeCreateCalendarItemOperation encodeWithCoder:]
-[CalExchangeCreateCalendarItemOperation initWithCoder:]
-[CalExchangeCreateCalendarItemOperation messageTracerName]
-[CalExchangeCreateCalendarItemOperation messageTracerUUID]
-[CalExchangeUpdateTaskOperation initWithSessionID:taskID:changedValues:]
-[CalExchangeUpdateTaskOperation objectID]
-[CalExchangeUpdateTaskOperation dealloc]
-[CalExchangeUpdateTaskOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeUpdateTaskOperation createRevertOperationInContext:inSession:]
-[CalExchangeUpdateTaskOperation shouldDeletePendingOperation:]
-[CalExchangeUpdateTaskOperation debugTitle]
-[CalExchangeUpdateTaskOperation debugDescription]
-[CalExchangeUpdateTaskOperation encodeWithCoder:]
-[CalExchangeUpdateTaskOperation initWithCoder:]
-[CalExchangeUpdateTaskOperation messageTracerName]
-[CalExchangeUpdateTaskOperation messageTracerUUID]
-[CalExchangeUpdateTaskOperation taskID]
-[CalOperationQueue initWithSessionID:testConnection:]
-[CalOperationQueue initWithSessionID:testConnection:sessionIDIsObjectID:]
-[CalOperationQueue invalidate]
-[CalOperationQueue dealloc]
-[CalOperationQueue _removeOperationInvokedByQueue:]
-[CalOperationQueue removeOperation:]
-[CalOperationQueue _revertOperationInvokedByQueue:]
___52-[CalOperationQueue _revertOperationInvokedByQueue:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalOperationQueue revertOperation:]
-[CalOperationQueue operations]
-[CalOperationQueue run]
-[CalOperationQueue isItemLocallyModifiedForObjectID:]
-[CalOperationQueue _notifyListenersThatOperationFinished:]
-[CalOperationQueue _calendarStoreResetExternallyInvokedByQueue:]
-[CalOperationQueue calendarStoreResetExternally:]
-[CalOperationQueue objectID]
-[CalOperationQueue sessionID]
-[CalOperationQueue setSessionID:]
___62-[CalPersistentOperationProducer managedObjectContextDidSave:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalPersistentOperationProducer _processInsertedManagedObjects:]
___65-[CalPersistentOperationProducer _processInsertedManagedObjects:]_block_invoke
-[CalPersistentOperationProducer _processInsertedAttendees:]
-[CalPersistentOperationProducer _processInsertedAttachment:]
-[CalPersistentOperationProducer _processInsertedCalendar:]
-[CalPersistentOperationProducer _processInsertedCalendarItem:]
-[CalPersistentOperationProducer _processInsertedRecurrenceException:]
-[CalPersistentOperationProducer _processUpdatedManagedObjects:]
-[CalPersistentOperationProducer _processUpdatedAttendee:]
-[CalPersistentOperationProducer _processUpdatedAttachment:]
-[CalPersistentOperationProducer _processUpdatedDefaultAlarmSet:]
-[CalPersistentOperationProducer _processUpdatedCalendar:]
-[CalPersistentOperationProducer _processUpdatedCalendarItem:]
-[CalPersistentOperationProducer _processDeletedManagedObjects:]
-[CalPersistentOperationProducer _processDeletedAttendees:]
-[CalPersistentOperationProducer _processDeletedAttachment:]
-[CalPersistentOperationProducer _processDeletedCalendar:]
-[CalPersistentOperationProducer _processDeletedCalendarItem:]
-[CalPersistentOperationProducer _archivePersistentOperations:inManagedObjectContext:]
-[CalPersistentOperationProducer _sessionIDForCalendar:]
-[CalPersistentOperationProducer _sessionIDForDefaultAlarmSet:]
-[CalPersistentOperationProducer _sessionIDForItem:]
-[CalPersistentOperationProducer _sessionIDForRecurrenceException:]
-[CalPersistentOperationProducer _sessionIDForAttachment:]
-[CalPersistentOperationProducer _additionalChangedValuesForObject:]
-[CalPersistentOperationProducer _changedValuesForCalendar:]
-[CalPersistentOperationProducer _changedValuesForDefaultAlarmSet:]
-[CalPersistentOperationProducer _changedValuesForItem:]
-[CalPersistentOperationProducer _changedValuesForDetachedEvent:comparedToMasterEvent:]
-[CalPersistentOperationProducer _archivableChangedValuesForObject:visitedObjects:]
-[CalPersistentOperationProducer _markInvitationSent:]
-[CalPersistentOperationProducer _hasChangesRequiringReschedule:]
___65-[CalPersistentOperationProducer _hasChangesRequiringReschedule:]_block_invoke
-[CalPersistentOperationProducer _markResponseSent:forEvent:]
-[CalPersistentOperation dealloc]
-[CalPersistentOperation encodeWithCoder:]
-[CalPersistentOperation initWithCoder:]
+[CalPersistentOperation archive:inContext:]
+[CalPersistentOperation dearchive:]
-[CalPersistentOperation managedObjectIDForURIRepresentation:]
-[CalPersistentOperation managedObjectIDsForURIRepresentations:]
-[CalPersistentOperation managedOperation]
-[CalPersistentOperation setManagedOperation:]
-[CalExchangePersistentOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangePersistentOperation executeInContext:error:]
+[CalExchangePersistentOperation addExtendedProperty:value:to:]
+[CalExchangePersistentOperation addSetItemFieldWithExtendedPropertyName:value:to:]
-[CalOperation executeInContext:error:]
-[CalOperation debugTitle]
-[CalOperation debugDescription]
-[CalOperation setSessionID:]
-[CalOperation sessionIDAsObjectID]
-[CalOperation setSessionIDAsObjectID:]
-[CalExchangeOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeAbstractWriteCalendarItemOperation updateOptionalAttendeesForCalendarItem:withEvent:]
-[CalExchangeAbstractWriteCalendarItemOperation updateRequiredAttendeesForCalendarItem:withEvent:]
-[CalExchangeAbstractWriteCalendarItemOperation updateResourcesForCalendarItem:withEvent:]
-[CalExchangeAbstractWriteCalendarItemOperation removeUninvitedAttendeesForEvent:]
-[CalExchangeAbstractWriteCalendarItemOperation _EWSDayFromCalDay:]
-[CalExchangeAbstractWriteCalendarItemOperation updateRecurrenceForCalendarItem:withEvent:]
-[CaliMIPOperation initWithCoder:]
-[CaliMIPOperation initWithManagedAttendees:]
+[CaliMIPOperation operationsWithManagedAttendees:]
-[CaliMIPOperation dealloc]
-[CaliMIPOperation attachmentForManagedEvent:withMethod:]
-[CaliMIPOperation attachmentOptions]
-[CaliMIPOperation encodeWithCoder:]
-[CaliMIPOperation executeInContext:error:]
-[CaliMIPOperation organizerDisplayNameForAddress:commonName:]
+[CaliMIPOperation managedAttendeeWillCauseiMIPScheduling:]
+[CaliMIPOperation managedCalendarForManagedEvent:]
+[CaliMIPOperation managedEventForManagedAttendee:]
-[CaliMIPOperation managedEventInContext:]
+[CaliMIPOperation iMIPSchedulingWillResultFromChangesToManagedEvent:]
+[CaliMIPOperation iMIPSchedulingWillResultFromChangesToManagedEvent:ignoreiMIPSuppression:]
+[CaliMIPOperation updateSequenceNumber]
-[CaliMIPOperation attachmentInContext:]
-[CaliMIPOperation attachmentName]
-[CaliMIPOperation emailBodyInContext:]
-[CaliMIPOperation emailRecipientsInContext:]
-[CaliMIPOperation emailSubjectInContext:]
+[CaliMIPOperation icsMethod]
-[CaliMIPOperation attendeeObjectIDs]
-[CalExchangeMoveItemOperation initWithSessionID:itemID:]
-[CalExchangeMoveItemOperation itemID]
-[CalExchangeMoveItemOperation dealloc]
-[CalExchangeMoveItemOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeMoveItemOperation createRevertOperationInContext:inSession:]
-[CalExchangeMoveItemOperation shouldDeletePendingOperation:]
-[CalExchangeMoveItemOperation debugTitle]
-[CalExchangeMoveItemOperation debugDescription]
-[CalExchangeMoveItemOperation encodeWithCoder:]
-[CalExchangeMoveItemOperation initWithCoder:]
-[CalExchangeMoveItemOperation messageTracerName]
-[CalExchangeMoveItemOperation messageTracerUUID]
-[CalExchangeUpdateFolderOperation initWithSessionID:calendarID:changedValues:]
-[CalExchangeUpdateFolderOperation calendarID]
-[CalExchangeUpdateFolderOperation dealloc]
-[CalExchangeUpdateFolderOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeUpdateFolderOperation createRevertOperationInContext:inSession:]
-[CalExchangeUpdateFolderOperation shouldDeletePendingOperation:]
-[CalExchangeUpdateFolderOperation debugTitle]
-[CalExchangeUpdateFolderOperation debugDescription]
-[CalExchangeUpdateFolderOperation encodeWithCoder:]
-[CalExchangeUpdateFolderOperation initWithCoder:]
-[CalExchangeUpdateFolderOperation messageTracerName]
-[CalExchangeUpdateFolderOperation messageTracerUUID]
-[CalExchangeDeleteFolderOperation initWithSessionID:folderId:folderObjectID:folderName:]
-[CalExchangeDeleteFolderOperation folderId]
-[CalExchangeDeleteFolderOperation dealloc]
-[CalExchangeDeleteFolderOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeDeleteFolderOperation createRevertOperationInContext:inSession:]
-[CalExchangeDeleteFolderOperation shouldDeletePendingOperation:]
-[CalExchangeDeleteFolderOperation debugTitle]
-[CalExchangeDeleteFolderOperation debugDescription]
-[CalExchangeDeleteFolderOperation encodeWithCoder:]
-[CalExchangeDeleteFolderOperation initWithCoder:]
-[CalExchangeDeleteFolderOperation messageTracerName]
-[CalExchangeDeleteFolderOperation messageTracerUUID]
-[CalExchangeCreateFolderOperation initWithSessionID:calendarID:]
-[CalExchangeCreateFolderOperation calendarID]
-[CalExchangeCreateFolderOperation dealloc]
-[CalExchangeCreateFolderOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeCreateFolderOperation createRevertOperationInContext:inSession:]
-[CalExchangeCreateFolderOperation shouldDeletePendingOperation:]
-[CalExchangeCreateFolderOperation debugTitle]
-[CalExchangeCreateFolderOperation debugDescription]
-[CalExchangeCreateFolderOperation encodeWithCoder:]
-[CalExchangeCreateFolderOperation initWithCoder:]
-[CalExchangeCreateFolderOperation messageTracerName]
-[CalExchangeCreateFolderOperation messageTracerUUID]
-[CalExchangeCreateAttachmentOperation initWithSessionID:attachmentID:itemObjectID:]
-[CalExchangeCreateAttachmentOperation attachmentID]
-[CalExchangeCreateAttachmentOperation dealloc]
-[CalExchangeCreateAttachmentOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeCreateAttachmentOperation createRevertOperationInContext:inSession:]
-[CalExchangeCreateAttachmentOperation shouldDeletePendingOperation:]
-[CalExchangeCreateAttachmentOperation debugTitle]
-[CalExchangeCreateAttachmentOperation debugDescription]
-[CalExchangeCreateAttachmentOperation encodeWithCoder:]
-[CalExchangeCreateAttachmentOperation initWithCoder:]
-[CalExchangeCreateAttachmentOperation messageTracerName]
-[CalExchangeCreateAttachmentOperation messageTracerUUID]
-[CalExchangeDeleteAttachmentOperation initWithSessionID:attachmentId:attachmentObjectID:itemObjectID:attachmentName:]
-[CalExchangeDeleteAttachmentOperation attachmentId]
-[CalExchangeDeleteAttachmentOperation dealloc]
-[CalExchangeDeleteAttachmentOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeDeleteAttachmentOperation createRevertOperationInContext:inSession:]
-[CalExchangeDeleteAttachmentOperation shouldDeletePendingOperation:]
-[CalExchangeDeleteAttachmentOperation debugTitle]
-[CalExchangeDeleteAttachmentOperation debugDescription]
-[CalExchangeDeleteAttachmentOperation encodeWithCoder:]
-[CalExchangeDeleteAttachmentOperation initWithCoder:]
-[CalExchangeDeleteAttachmentOperation messageTracerName]
-[CalExchangeDeleteAttachmentOperation messageTracerUUID]
-[CalExchangeGetItemOperation initWithSession:itemIds:inFolder:messageTracerUID:]
-[CalExchangeGetItemOperation initWithSession:itemIds:inFolder:]
-[CalExchangeGetItemOperation folderId]
-[CalExchangeGetItemOperation itemIds]
-[CalExchangeGetItemOperation dealloc]
-[CalExchangeGetItemOperation(Conversion) updateAlarmsForCalendarItem:inCalendar:withItem:]
+[CalExchangeGetItemOperation(Conversion) iCalendarDateFormatter]
___65+[CalExchangeGetItemOperation(Conversion) iCalendarDateFormatter]_block_invoke
+[CalExchangeGetItemOperation(Conversion) iCalendarDateTimeFormatter]
___69+[CalExchangeGetItemOperation(Conversion) iCalendarDateTimeFormatter]_block_invoke
-[CalExchangeGetItemOperation(Conversion) _dayFromEWSDayOfWeekType:]
-[CalExchangeGetItemOperation(Conversion) updateRecurrenceForManagedCalendarItem:withCalendarItem:]
+[CalExchangeGetTaskOperation responseShape]
-[CalExchangeGetTaskOperation createOrUpdateItems:inCalendar:]
-[CalExchangeGetTaskOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeGetTaskOperation(Conversion) updateTask:inCalendar:withTask:]
+[CalExchangeGetCalendarItemOperation responseShape]
-[CalExchangeGetCalendarItemOperation createOrUpdateItems:inCalendar:]
-[CalExchangeGetCalendarItemOperation shouldInsertCalendarItem:existsEventWithSameSharedUID:forPrincipal:]
-[CalExchangeGetCalendarItemOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeGetCalendarItemOperation debugTitle]
-[CalExchangeGetCalendarItemOperation debugDescription]
+[CalExchangeGetCalendarItemOperation(Conversion) iCalendarPartipationStatusForResponseType:]
-[CalExchangeGetCalendarItemOperation(Conversion) _updateAttachmentsForEvent:inCalendar:withCalendarItem:masterCalendarItem:]
-[CalExchangeGetCalendarItemOperation(Conversion) _updateAttendee:forEvent:name:address:responseType:role:type:]
-[CalExchangeGetCalendarItemOperation(Conversion) _updateAttendee:forEvent:withAttendee:role:type:]
-[CalExchangeGetCalendarItemOperation(Conversion) _updateAttendeesForEvent:inCalendar:withCalendarItem:]
-[CalExchangeGetCalendarItemOperation(Conversion) updateEvent:inCalendar:withCalendarItem:occurrences:masterCalendarItem:]
-[CalExchangeDeleteOccurrenceItemOperation initWithSessionID:itemId:eventID:itemName:shouldSendCancellation:]
-[CalExchangeDeleteOccurrenceItemOperation dealloc]
-[CalExchangeDeleteOccurrenceItemOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeDeleteOccurrenceItemOperation errorDescription]
-[CalFreeBusyOperationInfo setCancelled:]
-[CalFreeBusyOperationInfo callbackObject]
-[CalFreeBusyEventDetails description]
-[CalFreeBusyEventDetails title]
-[CalFreeBusyEventDetails uid]
-[CalFreeBusyCache initWithPrincipalID:]
-[CalFreeBusyCache isPrincipalConnected]
-[CalFreeBusyCache cleanUp]
-[CalFreeBusyCache dealloc]
-[CalFreeBusyCache _removeSpanFrom:to:fromTree:]
__freeBusySpansSortComparator
-[CalFreeBusyCache freeBusyForCUAddress:forEventSharedUid:inTimeRange:callbackTo:withSelector:]
-[CalFreeBusyCache knownFreeBusyForCUAddress:forEventSharedUid:inTimeRange:]
-[CalFreeBusyCache cancelCallbacksTo:]
-[CalFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]
-[CalFreeBusyCache principalID]
+[CalFreeBusyCacheManager cacheForPrincipalID:]
+[CalFreeBusyCacheManager cacheForPrincipalID:ofType:]
-[CalExchangeFreeBusyCache initWithPrincipalID:]
-[CalExchangeFreeBusyCache dealloc]
-[CalExchangeFreeBusyCache availabilityOperationFinished:]
-[CalExchangeFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___118-[CalExchangeFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]_block_invoke
___118-[CalExchangeFreeBusyCache freeBusyServerRequestForCUAddresses:forEventSharedUid:inTimeRange:callbackTo:withSelector:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_44
___destroy_helper_block_45
-[CalExchangeCreateResponseOperation initWithSessionID:type:folderId:]
-[CalExchangeCreateResponseOperation initWithSessionID:type:folderId:eventID:suppressNotification:]
-[CalExchangeCreateResponseOperation initWithSessionID:type:folderId:itemId:eventName:suppressNotification:]
-[CalExchangeCreateResponseOperation dealloc]
-[CalExchangeCreateResponseOperation eventID]
-[CalExchangeCreateResponseOperation folderId]
-[CalExchangeCreateResponseOperation itemId]
-[CalExchangeCreateResponseOperation type]
-[CalExchangeCreateResponseOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeCreateResponseOperation createRevertOperationInContext:inSession:]
-[CalExchangeCreateResponseOperation shouldDeletePendingOperation:]
-[CalExchangeCreateResponseOperation debugTitle]
-[CalExchangeCreateResponseOperation debugDescription]
-[CalExchangeCreateResponseOperation encodeWithCoder:]
-[CalExchangeCreateResponseOperation initWithCoder:]
-[CalExchangeCreateResponseOperation messageTracerName]
-[CalExchangeCreateResponseOperation messageTracerUUID]
-[CalManagedExchangePrincipal(GetUserAvailability) getUserAvailabilityForEventID:addresses:timeRange:reply:]
-[CalExchangeGetUserAvailabilityOperation initWithMaskedSharedUID:addresses:timeRange:]
-[CalExchangeGetUserAvailabilityOperation dealloc]
-[CalExchangeGetUserAvailabilityOperation executeSynchronouslyWithPrincipal:withError:]
-[CalExchangeGetUserAvailabilityOperation _processResponse:]
-[CalExchangeGetUserAvailabilityOperation emailToFreeBusySpans]
-[CalExchangeGetUserAvailabilityOperation emailToEventDetailsArray]
+[CalExchangeGetUserAvailabilityOperation(Private) _UTCSerializableTimeZone]
+[CalExchangeGetUserAvailabilityOperation(Private) _busySpan:startComponents:endComponents:inCalendar:]
+[CalExchangeGetUserAvailabilityOperation(Private) _busySpan:forDate:startsInMinutes:endsInMinutes:inCalendar:]
+[CalExchangeGetUserAvailabilityOperation(Private) _calFreeBusyFromEWSFreeBusy:]
+[CalExchangeGetUserAvailabilityOperation(Private) _calFreeBusyFromMergedFreeBusy:]
-[CALComment initWithComment:address:timeStamp:]
-[CALComment setCommentString:]
-[CALComment commentString]
-[CALComment setAddress:]
-[CALComment address]
-[CALComment setTimeStamp:]
-[CALComment timeStamp]
-[CalRemoteCalendarSource isSubscription]
-[CalRemoteCalendarSource isDelegate]
-[CalRemoteCalendarSource _calendar]
-[CalRemoteCalendarSource isEditableForReply]
-[CalRemoteCalendarSource isMarkedImmutableSharees]
+[CalDelegateUserInfo supportsSecureCoding]
-[CalDelegateUserInfo initWithCoder:]
-[CalDelegateUserInfo encodeWithCoder:]
-[CalDelegateUserInfo _setValuesWithCalManagedPrincipal:]
-[CalDelegateUserInfo initWithCalManagedCalDAVPrincipal:]
-[CalDelegateUserInfo initWithCalManagedExchangePrincipal:]
+[CalDelegateUserInfo delegatesForCalManagedCalDAVPrincipal:]
-[CalDelegateUserInfo copyWithZone:]
-[CalDelegateUserInfo setAllowWrite:]
-[CalDelegateUserInfo caseInsensitiveCompare:]
+[CalDelegateUserInfo makeDisplayNamesUnique:]
-[CalDelegateUserInfo description]
+[CalDelegateUserInfo matchingDelegate:inArray:]
-[CalDelegateUserInfo displayString]
-[CalDelegateUserInfo preferredUserAddress]
-[CalDelegateUserInfo managedObjectID]
-[CalDelegateUserInfo calendarsPermission]
-[CalDelegateUserInfo tasksPermission]
-[CalDelegateUserInfo alarmsEnabled]
-[CalDelegateUserInfo setAlarmsEnabled:]
-[CalManagedEvent(iTIP) _sendCalDAViTIP:]
-[CalManagedEvent(iTIP) _sendEmailiTIP:partstat:]
-[CalManagedEvent(iTIP) sendiTIP:]
-[CalManagedEvent(iTIP) sendiTIP:withInfo:]
-[CalManagedEvent(iTIP) _committedRecurrenceID]
-[CalManagedEvent(iTIP) sendITIPCancelExtraAttendees]
-[CalManagedEvent(iTIP) sendITIPCancelExtraAttendeesInExceptions]
+[CalExchangeGetEffectiveRightsOperation setPermission:withEffectiveRights:]
+[CalExchangeGetEffectiveRightsOperation responseShape]
-[CalExchangeGetEffectiveRightsOperation initWithSession:calendarObjectID:]
-[CalExchangeGetEffectiveRightsOperation dealloc]
-[CalExchangeGetEffectiveRightsOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeSyncDeletedItemsFolderOperation initWithSession:folderId:]
-[CalExchangeSyncDeletedItemsFolderOperation folderId]
-[CalExchangeSyncDeletedItemsFolderOperation dealloc]
-[CalExchangeSyncDeletedItemsFolderOperation executeWithBinding:inSession:inContext:error:]
-[CalExchangeSyncDeletedItemsFolderOperation debugTitle]
-[CalExchangeSyncDeletedItemsFolderOperation debugDescription]
-[CalExchangeGetDeclinedCalendarItemOperation shouldInsertCalendarItem:existsEventWithSameSharedUID:forPrincipal:]
-[CalExchangeGetDeclinedCalendarItemOperation _isDeclinedByMe:forCalendarItem:forPrincipal:]
-[CalExchangeGetDeclinedCalendarItemOperation debugTitle]
+[CalDAVPrincipalPropertySearchOperation submitSearchForPrincipal:forStrings:ofType:withReply:]
-[CalDAVPrincipalPropertySearchOperation initWithSession:forStrings:ofTypes:]
-[CalDAVExpandGroupOperation initWithAccountInfoProvider:groupIdentifier:]
-[CalDAVExpandGroupOperation dealloc]
+[CalDAVExpandGroupOperation fake404]
-[CalDAVExpandGroupOperation expandCDGroup:]
-[CalDAVExpandGroupOperation getGroupMembersSynchronously]
-[CalDAVExpandGroupOperation groupIdentifier]
-[CalDAVExpandGroupOperation setGroupIdentifier:]
-[CalDAVExpandGroupOperation groupMembers]
-[CalDAVExpandGroupOperation accountInfoProvider]
___copy_helper_block_
___destroy_helper_block_
-[CalDAVPrincipalResult description]
-[CalDAVPrincipalResult setEmailAddresses:]
-[CalDAVPrincipalResult cuAddresses]
-[CalDAVPrincipalResult setCuAddresses:]
-[CalDAVPrincipalResult overrideBaseURL]
+[CalGroupMembersCache sharedController]
+[CalGroupMembersCache allocWithZone:]
-[CalGroupMembersCache init]
-[CalGroupMembersCache copyWithZone:]
-[CalGroupMembersCache retain]
-[CalGroupMembersCache retainCount]
-[CalGroupMembersCache release]
-[CalGroupMembersCache autorelease]
-[CalGroupMembersCache membersOfGroupWithPrincipalAddress:onHost:]
-[CalGroupMembersCache setMembers:ofGroupWithPrincipalAddress:onHost:]
-[CalGroupMembersCache clearAll]
-[CalManagedLocation(iCalendarTranslation) _importiCalendarStructuredLocation:]
-[CalManagedLocation(iCalendarTranslation) importiCalendarProperty:inComponent:fromDocument:inCalendar:]
-[CalManagedLocation(iCalendarTranslation) _iCalendarElementWithOptions:]
-[CalManagedLocation(iCalendarTranslation) _ICSStructuredLocation]
-[CalManagedAlarm(iCalendarTranslation) importAlarm:inItemWithTravel:]
-[CalManagedDefaultAlarmSet(iCalendarTranslation) icsStringForDefaultAlarmsAllDay:]
-[CalManagedAttachment(iCalendarTranslation) _importiCalendarProperty:inComponent:fromDocument:inCalendar:accumulatedAttachmentFilenames:]
-[CalManagedAttachment(iCalendarTranslation) importiCalendarProperty:inComponent:fromDocument:inCalendar:]
-[CalManagedAttachment(iCalendarTranslation) _iCalendarElementWithOptions:]
-[CalManagedComment(iCalendarTranslation) importiCalendarProperty:inComponent:fromDocument:inCalendar:]
-[CalManagedComment(iCalendarTranslation) _iCalendarElementWithOptions:]
-[CalManagedNode(iCalendarTranslation) _iCalendarDocumentForCalendars:calendarID:name:description:color:options:]
-[CalManagedNode(iCalendarTranslation) iCalendarDocumentWithOptions:]
-[CalManagedNode(iCalendarTranslation) iCalendarDocumentWithID:name:description:color:options:]
-[CalManagedCalendar(iCalendarTranslation) iCalendarDocumentWithID:name:description:color:options:]
-[CalManagedGroup(iCalendarTranslation) iCalendarDocumentWithID:name:description:color:options:]
-[CalManagedCalendarItem(iCalendarTranslation) _updateAfterStartDateWithComponent:]
-[CalManagedCalendarItem(iCalendarTranslation) _importiCalendarComponent:occurrences:fromDocument:inCalendar:options:omitSyncRecord:]
___133-[CalManagedCalendarItem(iCalendarTranslation) _importiCalendarComponent:occurrences:fromDocument:inCalendar:options:omitSyncRecord:]_block_invoke
-[CalManagedCalendarItem(iCalendarTranslation) _preprocessAttachmentsFromComponent:]
-[CalManagedCalendarItem(iCalendarTranslation) _importAttachmentsFromComponent:fromDocument:inCalendar:]
-[CalManagedCalendarItem(iCalendarTranslation) _removeDuplicateAttachments:]
-[CalManagedCalendarItem(iCalendarTranslation) _truncateToMaxNumberOfAttachmentsIfNecessary:]
-[CalManagedCalendarItem(iCalendarTranslation) _importNonManagedAttachment:fromComponent:fromDocument:inCalendar:withOldAttachments:]
-[CalManagedCalendarItem(iCalendarTranslation) _importNonManagedAttachmentsFromComponent:fromDocument:inCalendar:]
___110-[CalManagedCalendarItem(iCalendarTranslation) importManagedAttachmentsFromComponent:fromDocument:inCalendar:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalManagedCalendarItem(iCalendarTranslation) importiCalendarComponent:occurrences:fromDocument:inCalendar:options:deletionBlock:]
-[CalManagedEvent(iCalendarTranslation) _invalidInstances:_duplicateExceptions:]
-[CalManagedEvent(iCalendarTranslation) _zeroTimeIfUndefinedInComponents:]
-[CalManagedEvent(iCalendarTranslation) _updateAfterStartDateWithComponent:]
___124-[CalManagedEvent(iCalendarTranslation) importiCalendarComponent:occurrences:fromDocument:inCalendar:options:deletionBlock:]_block_invoke
-[CalManagedEvent(iCalendarTranslation) eventsFromICSDocumentHelper:]
-[CalManagedEvent(iCalendarTranslation) alarmsFromICSEventHelper:]
-[CalManagedTask(iCalendarTranslation) importiCalendarComponent:occurrences:fromDocument:inCalendar:options:]
-[CalDAVOccurrenceChange allChanges]
-[CalDAVOccurrenceChange changeTypeOnProperty:]
-[CalDAVOccurrenceChange dateTimeChanged]
-[CalDAVOccurrenceChange startTimeChanged]
-[CalDAVOccurrenceChange endTimeChanged]
-[CalDAVOccurrenceChange timeZoneChanged]
-[CalDAVOccurrenceChange locationChanged]
-[CalDAVOccurrenceChange urlChanged]
-[CalDAVOccurrenceChange summaryChanged]
-[CalDAVOccurrenceChange attendeesChanged]
-[CalDAVOccurrenceChange descriptionChanged]
-[CalDAVOccurrenceChange statusChanged]
-[CalDAVOccurrenceChange recurrenceChanged]
-[CalDAVOccurrenceChange allDayChanged]
-[CalDAVOccurrenceChange recurrenceID]
+[CalDAVScheduleChangesProperty debugStringForType:]
-[CalDAVScheduleChangesProperty isCancel]
-[CalDAVScheduleChangesProperty isReply]
-[CalDAVScheduleChangesProperty isUpdate]
-[CalDAVScheduleChangesProperty allChanges]
-[CalDAVScheduleChangesProperty changeForOccurrence:]
-[CalDAVScheduleChangesProperty dateStamp]
-[CalDAVScheduleChangesProperty attendeeAddress]
-[CalDAVAddressToPrincipalOperation initWithAddresses:forAccountInfoProvider:]
-[CalDAVAddressToPrincipalOperation dealloc]
+[CalDAVAddressToPrincipalOperation _accountSupportsCUASetSearch:]
+[CalDAVAddressToPrincipalOperation searchTaskForAddresses:withMappings:withMainAccountInfoProvider:]
-[CalDAVAddressToPrincipalOperation getPrincipalsSynchronously]
+[CalDAVAddressToPrincipalOperation checkHostForPrincipal:matchesBaseURL:inOperation:goodMatchBlock:noMatchBlock:]
___114+[CalDAVAddressToPrincipalOperation checkHostForPrincipal:matchesBaseURL:inOperation:goodMatchBlock:noMatchBlock:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVAddressToPrincipalOperation addresses]
-[CalDAVAddressToPrincipalOperation setAddresses:]
-[CalDAVAddressToPrincipalOperation discoveredPrincipals]
-[CalDAVAddressToPrincipalOperation setDiscoveredPrincipals:]
-[CalDAVAddressToPrincipalOperation taskManager]
-[CalDAVAddressToPrincipalOperation setTaskManager:]
-[CalDelegateFoldersPermissions initWithCalendarPermission:taskPermission:]
-[CalDelegateFoldersPermissions calendarPermission]
-[CalDelegateFoldersPermissions setCalendarPermission:]
-[CalDelegateFoldersPermissions taskPermission]
-[CalDelegateFoldersPermissions setTaskPermission:]
+[CalExhangeGetDelegeteFolderPermissionsOperation executeWithAccount:withDelegate:withError:]
+[CalExhangeGetDelegeteFolderPermissionsOperation permissionFromEWSPermission:]
+[CalExhangeGetDelegeteFolderPermissionsOperation permissionFromEWSCalendarPermission:]
+[CalExhangeGetDelegeteFolderPermissionsOperation delegateUserPermissionForCalendarPermission:]
+[CalExhangeGetDelegeteFolderPermissionsOperation permissionForPrincipal:fromPermissions:withBinding:]
+[CalExchangeTestConnectionOperation testConnectionOperationWithAccountInfoProvider:]
-[CalExchangeTestConnectionOperation initWithBasicAccountInfoProvider:]
-[CalExchangeTestConnectionOperation accountInfoProvider]
___47+[CalDAVNotificationHandler process:principal:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalDAVNotificationHandler findMessageWithFilename:inMessages:]
+[CalDateLocalization rebuildFormatters]
+[CalDateLocalization rebuildWeekendDays]
+[CalDateLocalization shouldUseHourMinutesWithoutAMPMForHours]
+[CalDateLocalization formatKeyForHourString]
+[CalDateLocalization intervalStringFromDate:toDate:withFormat:options:]
-[CalTaskManager taskRequestModal:]
-[CalTaskManager taskEndModal:]
-[CalTaskManager _startModal:]
-[CalTaskManager _reactivateHeldTasks]
___copy_helper_block_
___destroy_helper_block_
-[CalTaskManager _scheduleStartModal:]
___38-[CalTaskManager _scheduleStartModal:]_block_invoke
___copy_helper_block_166
___destroy_helper_block_167
-[CalTaskManager workRunLoop]
-[NSColor(CALModelAdditions) hexString]
+[CALColorModel legacyPreLionColorToColorName]
+[CALColorModel symbolicColorForNewCalendarWithExistingSymbolicNames:]
+[CALColorModel displayColorForSymbolicName:]
___45+[CALColorModel displayColorForSymbolicName:]_block_invoke
+[CALColorModel facebookCalendarColor]
-[CalCalDAVContainerSyncTaskGroupWrapper setLocalETag:forItemWithRelativeURI:inFolderWithID:]
-[CalCalDAVContainerSyncTaskGroupWrapper containerInfoSyncTask:retrievedAddedOrModifiedContainers:removedContainerURLs:]
-[CalCalDAVContainerSyncTaskGroupWrapper containerInfoSyncTask:completedWithNewSyncToken:error:]
-[CalCalDAVContainerSyncTaskGroupWrapper copyLocalChecksumsForFolderWithURL:checksumVersion:]
-[CalCalDAVContainerSyncTaskGroupWrapper _stringForMismatchType:]
-[CalCalDAVContainerSyncTaskGroupWrapper reportMismatchedETag:forURL:inFolderWithURL:cTag:syncToken:mismatchType:]
-[CalCalDAVContainerSyncTaskGroupWrapper _messageTraceMismatch:]
-[CalCalDAVContainerSyncTaskGroupWrapper reportMismatchedChecksum:forURL:inFolderWithURL:checksumVersion:eTag:]
-[CalCalDAVContainerSyncTaskGroupWrapper _messageTraceSignatureForServerURL:]
-[CalCalDAVContainerSyncTaskGroupWrapper mismatches]
-[CalCalDAVContainerSyncTaskGroupWrapper setMismatches:]
-[CalCalDAVContainerSyncTaskGroupWrapper addedOrModifiedContainers]
-[CalCalDAVContainerSyncTaskGroupWrapper setAddedOrModifiedContainers:]
-[CalCalDAVContainerSyncTaskGroupWrapper removedURLs]
-[CalCalDAVContainerSyncTaskGroupWrapper setRemovedURLs:]
-[CalCalDAVContainerSyncMismatch dealloc]
-[CalCalDAVContainerSyncMismatch url]
-[CalCalDAVContainerSyncMismatch setUrl:]
-[CalCalDAVContainerSyncMismatch serverETag]
-[CalCalDAVContainerSyncMismatch setServerETag:]
-[CalCalDAVContainerSyncMismatch folderURL]
-[CalCalDAVContainerSyncMismatch setFolderURL:]
-[CalCalDAVContainerSyncMismatch cTag]
-[CalCalDAVContainerSyncMismatch setCTag:]
-[CalCalDAVContainerSyncMismatch syncToken]
-[CalCalDAVContainerSyncMismatch setSyncToken:]
-[CalCalDAVContainerSyncMismatch mismatchType]
-[CalCalDAVContainerSyncMismatch setMismatchType:]
-[CalCalDAVSynchronousTaskGroup completed]
-[CalCalDAVSynchronousTaskGroup taskGroup]
-[CalCalDAVSynchronousTaskGroup setTaskGroup:]
-[CalCalDAVTaskManager coreDAVTaskRequestModal:]
-[CalCalDAVTaskManager coreDAVTaskEndModal:]
-[CoreDAVTask(CalCoreDAVTaskExtension) finishWithError:]
-[CoreDAVTask(CalCoreDAVTaskExtension) cancelTaskWithReason:underlyingError:]
-[CalDAVKerberosPrincipals description]
-[CalDAVKerberosPrincipals dealloc]
-[CalDAVKerberosPrincipals clientPrincipal]
-[CalDAVKerberosPrincipals setClientPrincipal:]
-[CalDAVKerberosPrincipals servicePrincipal]
-[CalDAVKerberosPrincipals setServicePrincipal:]
+[CalDAVKerberosHelper credentialCacheDidChange:]
+[CalDAVKerberosHelper principalsForHost:user:password:]
___56+[CalDAVKerberosHelper principalsForHost:user:password:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalDAVKerberosHelper credentialForHost:user:password:]
+[CaliCalendarAnonymizer sharedAnonymizedStrings]
___49+[CaliCalendarAnonymizer sharedAnonymizedStrings]_block_invoke
+[CaliCalendarAnonymizer sharedAnonymizedStringsCount]
___54+[CaliCalendarAnonymizer sharedAnonymizedStringsCount]_block_invoke
+[CaliCalendarAnonymizer sharedAnonymizedDomainName]
___52+[CaliCalendarAnonymizer sharedAnonymizedDomainName]_block_invoke
_anonString_block_invoke
_anonSummary_block_invoke_2
_anonDescription_block_invoke_3
_anonUID_block_invoke_4
_anonURNUID_block_invoke_5
_anonName_block_invoke_6
_anonEmail_block_invoke_7
_anonLocation_block_invoke_8
_anonWebURL_block_invoke_9
+[CaliCalendarAnonymizer anonymizedString:withAnonymizer:]
+[CaliCalendarAnonymizer anonymizedString:]
+[CaliCalendarAnonymizer anonymizedSummary:]
+[CaliCalendarAnonymizer anonymizedDescription:]
+[CaliCalendarAnonymizer anonymizedUID:]
+[CaliCalendarAnonymizer anonymizedURNUID:]
+[CaliCalendarAnonymizer anonymizedEmailCommonName:]
+[CaliCalendarAnonymizer anonymizedEmail:]
+[CaliCalendarAnonymizer anonymizedLocation:]
+[CaliCalendarAnonymizer anonymizedWebURL:]
+[CaliCalendarAnonymizer anonymizedEmailURL:]
+[CaliCalendarAnonymizer dump]
+[CalDAVBasicAccountInfoProvider initialize]
-[CalDAVBasicAccountInfoProvider init]
-[CalDAVBasicAccountInfoProvider initWithUser:password:principalURL:accountID:parentAccountID:acAccountID:objectID:]
-[CalDAVBasicAccountInfoProvider setFullPrincipalAddress:]
-[CalDAVBasicAccountInfoProvider promptUserForNewCoreDAVPasswordWithCompletionBlock:]
-[CalDAVBasicAccountInfoProvider handleShouldUseCredentialStorage]
-[CalDAVBasicAccountInfoProvider handleTrustChallenge:]
-[CalDAVBasicAccountInfoProvider handleCertificateError:]
-[CalDAVBasicAccountInfoProvider oauthInfoProvider]
-[CalDAVBasicAccountInfoProvider oauthToken]
-[CalDAVBasicAccountInfoProvider oauth2Token]
-[CalDAVBasicAccountInfoProvider clientTokenRequestedByServer]
-[CalDAVBasicAccountInfoProvider clientToken]
-[CalDAVBasicAccountInfoProvider noteHomeSetOnDifferentHost:]
-[CalDAVBasicAccountInfoProvider notePrincipalPathChange:]
-[CalDAVBasicAccountInfoProvider shouldCompressRequests]
-[CalDAVBasicAccountInfoProvider coreDAVLogLevel]
-[CalDAVBasicAccountInfoProvider coreDAVOutputLevel]
-[CalDAVBasicAccountInfoProvider coreDAVLogDiagnosticMessage:atLevel:]
-[CalDAVBasicAccountInfoProvider shouldLogTransmittedData]
-[CalDAVBasicAccountInfoProvider coreDAVLogTransmittedDataPartial:]
-[CalDAVBasicAccountInfoProvider coreDAVLogRequestBody:]
-[CalDAVBasicAccountInfoProvider coreDAVLogResponseBody:]
-[CalDAVBasicAccountInfoProvider coreDAVTransmittedDataFinished]
-[CalDAVBasicAccountInfoProvider principalPath]
-[CalDAVBasicAccountInfoProvider setPrincipalPath:]
-[CalDAVBasicAccountInfoProvider serverComplianceClasses]
-[CalDAVBasicAccountInfoProvider setShouldFailAllTasks:]
-[CalDAVBasicAccountInfoProvider objectID]
-[CalDAVBasicAccountInfoProvider acAccountID]
-[CalDAVBasicAccountInfoProvider parentAccountID]
-[CalDAVBasicAccountInfoProvider setParentAccountID:]
-[CalDAVBasicAccountInfoProvider cachedClientToken]
-[CalDAVBasicAccountInfoProvider setCachedClientToken:]
+[CALFTPPublishOperation canHandleURL:]
-[CALFTPPublishOperation dealloc]
-[CALFTPPublishOperation publishData:automatic:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___48-[CALFTPPublishOperation publishData:automatic:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___48-[CALFTPPublishOperation publishData:automatic:]_block_invoke28
___copy_helper_block_31
___destroy_helper_block_32
-[CALFTPPublishOperation unpublishDataWithAutomatic:]
___53-[CALFTPPublishOperation unpublishDataWithAutomatic:]_block_invoke
___copy_helper_block_42
___destroy_helper_block_43
___53-[CALFTPPublishOperation unpublishDataWithAutomatic:]_block_invoke45
___copy_helper_block_46
___destroy_helper_block_47
-[CALFTPPublishOperation ftpOperationDidFinish:]
-[CALFTPPublishOperation abortOperation]
-[CALFTPPublishOperation ftpOperation]
-[CALFTPPublishOperation setFtpOperation:]
-[CalDAVTaskManagerOperation dealloc]
-[CalDAVTaskManagerOperation init]
-[CalDAVTaskManagerOperation taskManager]
-[CalDAVTaskManagerOperation setTaskManager:]
-[CalDAVTaskManagerOperation error]
-[CalDAVTaskManagerOperation setError:]
-[CalFTPDeleteOperation initWithURL:user:password:data:]
-[CalFTPDeleteOperation initWithURL:user:password:]
-[CalFTPDeleteOperation setProperties]
-[CalFTPOperation init]
-[CalFTPOperation initWithURL:user:password:]
-[CalFTPOperation dealloc]
-[CalFTPOperation description]
-[CalFTPOperation start]
-[CalFTPOperation cancel]
-[CalFTPOperation finishWithError:]
-[CalFTPOperation url]
-[CalFTPOperation setUrl:]
-[CalFTPOperation user]
-[CalFTPOperation setUser:]
-[CalFTPOperation password]
-[CalFTPOperation setPassword:]
-[CalFTPOperation progressBlock]
-[CalFTPOperation setProgressBlock:]
-[CalFTPOperation completionBlock]
-[CalFTPOperation setCompletionBlock:]
-[CalFTPOperation error]
-[CalFTPOperation setError:]
-[CalFTPOperation isCancelled]
-[CalFTPOperation setIsCancelled:]
-[CalFTPOperation isFinished]
-[CalFTPOperation setIsFinished:]
-[CalFTPReadOperation initWithURL:user:password:]
-[CalFTPReadOperation dealloc]
-[CalFTPReadOperation description]
-[CalFTPReadOperation data]
-[CalFTPReadOperation tearDownStream]
-[CalFTPReadOperation start]
-[CalFTPReadOperation cancel]
-[CalFTPReadOperation setProperties]
-[CalFTPReadOperation readStream:receivedEventWithType:]
-[CalFTPReadOperation mutableData]
-[CalFTPReadOperation setMutableData:]
-[CalFTPReadOperation resourceSize]
-[CalFTPReadOperation setResourceSize:]
-[CalFTPReadOperation resourceSizeIsKnown]
-[CalFTPReadOperation setResourceSizeIsKnown:]
-[CalFTPReadOperation resourceSizeChecked]
-[CalFTPReadOperation setResourceSizeChecked:]
-[CalFTPWriteOperation initWithURL:user:password:]
-[CalFTPWriteOperation initWithURL:user:password:data:]
-[CalFTPWriteOperation dealloc]
-[CalFTPWriteOperation description]
-[CalFTPWriteOperation tearDownStream]
-[CalFTPWriteOperation start]
-[CalFTPWriteOperation cancel]
-[CalFTPWriteOperation setProperties]
-[CalFTPWriteOperation writeStream:receivedEventWithType:]
-[CalFTPWriteOperation data]
-[CalFTPWriteOperation setData:]
-[CalFTPWriteOperation numberOfBytesWritten]
-[CalFTPWriteOperation setNumberOfBytesWritten:]
-[CalFTPWriteOperation writeStream]
-[CalFTPWriteOperation setWriteStream:]
-[CalManagedAccount lookupAccountPluginID]
-[CalManagedAccount willSave]
-[CalManagedAccount _messageTraceableAccountName]
-[CalManagedAccount prefetchRelationshipsForDelete]
-[CalManagedAccount isRefreshable]
-[CalManagedAccount isEnabledForCurrentApp]
+[CalManagedAccount enabledForRemindersKeys]
___44+[CalManagedAccount enabledForRemindersKeys]_block_invoke
+[CalManagedAccount accountsNotMarkedForDeletionInContext:]
+[CalManagedAccount enabledAccountsForCalendarInContext:]
+[CalManagedAccount enabledAccountsForRemindersInContext:]
+[CalManagedAccount enabledAccountsInContext:]
-[CalManagedAccount compareUsingPrincipal:]
+[CalManagedAccount sortedEnabledAccountsInContext:]
-[CalManagedAccount password]
-[CalManagedAccount setPassword:]
-[CalManagedAccount grantedDelegates]
-[CalManagedAccount fetchRequestForInsertValidation]
-[CalManagedAccount fetchRequestForInsertValidationReturnsAccounts]
-[CalManagedAccount enclosingSources]
-[CalManagedAttachment awakeFromInsert]
-[CalManagedAttachment isAutoArchivedNumber]
-[CalManagedAttachment urlOnServer]
-[CalManagedAttachment setUrlOnServer:]
-[CalManagedAttachment attachmentIDOnServer]
-[CalManagedAttachment setAttachmentIDOnServer:]
+[CalManagedAttachment entityName]
+[CalManagedAttachment fetchRequestWithURL:inManagedObjectContext:]
+[CalManagedAttachment fetchRequestWithURL:inGroup:inManagedObjectContext:]
+[CalManagedAttachment addAttachmentPrefetchToCalendarItemFetch:]
-[CalManagedAttachment willRefresh:]
-[CalManagedAttachment url]
-[CalManagedAttachment setUrl:]
-[CalManagedAttachment pathOnDisk]
-[CalManagedAttachment urlOnDisk]
-[CalManagedAttachment setPathOnDisk:]
-[CalManagedAttachment filenameInCache]
-[CalManagedAttachment setFilenameInCache:]
+[CalManagedAttachment bestFilenameForAttachment:]
-[CalManagedAttachment filename]
-[CalManagedAttachment setFilename:]
-[CalManagedAttachment isLocalAttachment]
-[CalManagedAttachment isInDetachedEvent]
-[CalManagedAttachment willSave]
-[CalManagedAttachment dealloc]
+[CalManagedAttachment uniqueIdentifierForObject:]
-[CalManagedAttachment uniqueIdentifier]
-[CalManagedAttachment uniqueKeyForObject]
-[CalManagedAttachment enclosingSource]
-[CalManagedAttachment data]
-[CalManagedAttachment setData:]
+[CALAttachment(CreationFromManagedObject) attachmentFromManagedObject:]
-[CalManagedAttendee isOrganizer]
-[CalManagedAttendee contextForValidationError]
-[CalManagedAttendee attributesToApplyForMerge]
-[CalManagedAttendee attributesToCompareForMerge]
-[CalManagedAttendee hasMail]
-[CalManagedAttendee addressForCommonName]
-[CalManagedAttendee _attendeesComment]
-[CalManagedAttendee URL]
-[CalManagedAttendee name]
-[CalManagedAttendee isCurrentUserForScheduling]
-[CalManagedAttendee isCurrentUser]
-[CalManagedAttendee isCurrentUserForSharing]
+[CalManagedAttendee addAttendeeCommentPrefetchToCalendarItemFetch:]
-[CalManagedAttendee comment]
-[CalManagedAttendee enclosingSource]
-[CalManagedAttendee replyRequested]
-[CalManagedAttendee scheduleStatusString]
-[CalManagedBirthdayCalendar awakeFromInsert]
-[CalManagedBirthdayCalendar keepSyncRecordLocal]
-[CalManagedBirthdayCalendar isColorEditable]
-[CalManagedBirthdayCalendar supportsPublishing]
-[CalManagedBirthdayCalendar didSave]
-[CalManagedBirthdayCalendar validateForWrite:]
-[CalManagedBirthdayCalendar validateForInsert:]
-[CalManagedBirthdayCalendar validateForUpdate:]
-[CalManagedBirthdayCalendar defaultAlarmsWithIsAllDayEvent:]
-[CalManagedBirthdayCalendar defaultAlarmsWithIsAllDayEvent:fromServer:]
-[CalManagedBirthdayCalendar isFacebookBirthdayCalendar]
-[CalManagedBirthdayCalendar setSharees:]
-[CalManagedBirthdayCalendar allowsScheduling]
-[CaliMIPRequestOperation initWithCoder:]
+[CaliMIPRequestOperation operationsWithManagedAttendees:areNewRequests:]
-[CaliMIPRequestOperation encodeWithCoder:]
+[CaliMIPRequestOperation iMIPSchedulingWillResultFromChangesToManagedEvent:ignoreiMIPSuppression:]
+[CaliMIPRequestOperation managedEventHasChangeRequringiMIPReschedule:]
___71+[CaliMIPRequestOperation managedEventHasChangeRequringiMIPReschedule:]_block_invoke
-[CaliMIPRequestOperation attachmentInContext:]
-[CaliMIPRequestOperation attachmentName]
-[CaliMIPRequestOperation emailBodyInContext:]
-[CaliMIPRequestOperation emailRecipientsInContext:]
-[CaliMIPRequestOperation emailSubjectInContext:]
+[CaliMIPRequestOperation icsMethod]
-[CaliMIPRequestOperation isNewRequest]
-[CaliMIPRequestOperation setIsNewRequest:]
-[CalManagedCalDAVAccount password]
-[CalManagedCalDAVAccount setPassword:]
-[CalManagedCalDAVAccount clearETags]
-[CalManagedCalDAVAccount fetchRequestForInsertValidationReturnsAccounts]
+[CalManagedCalDAVAccount accountExistsWithHost:andPrincipalPath:inManagedObjectContext:]
-[CalManagedCalDAVCalendar dualTypeCollectionAbleToBeSplit]
-[CalManagedCalDAVCalendar isFamilyCalendar]
-[CalManagedCalDAVCalendar setIsFamilyCalendar:]
-[CalManagedCalDAVCalendar isColorEditable]
-[CalManagedCalDAVCalendar setIsColorEditable:]
-[CalManagedCalDAVCalendar keepSyncRecordLocal]
-[CalManagedCalDAVCalendar subscriptionOrPublishURL]
-[CalManagedCalDAVCalendar nodesInNamespace]
-[CalManagedCalDAVCalendar clearCalendarTags]
-[CalManagedCalDAVCalendar clearETags]
-[CalManagedCalDAVCalendar eligibleForDefaultSchedulingCalendar]
-[CalManagedCalDAVCalendar setOrder:]
-[CalManagedCalDAVCalendar sharedOwnerAddresses]
-[CalManagedCalDAVCalendar defaultOrganizerEmailForNewItems]
-[CalManagedCalDAVCalendar allowsScheduling]
-[CalManagedCalDAVCalendar _setDefaultSchedulingCalendarToSelf]
-[CalManagedCalDAVCalendar serverPath]
-[CalManagedCalDAVCalendar keepEventsOnSplit]
-[CalManagedCalDAVCalendar setKeepEventsOnSplit:]
-[CalManagedCalDAVCalendar keepRemindersOnSplit]
-[CalManagedCalDAVCalendar setKeepRemindersOnSplit:]
-[CalManagedCalDAVPrincipal dropBoxPathString]
+[CalManagedCalDAVPrincipal fetchRequestWithPrincipalURL:isDelegate:inManagedObjectContext:]
+[CalManagedCalDAVPrincipal principalWithUID:inContext:]
+[CalManagedCalDAVPrincipal fetchRequestForExistingPrincipalURL:login:providerID:context:]
+[CalManagedCalDAVPrincipal _predicateForExistingServerURL:]
+[CalManagedCalDAVPrincipal _predicateForExistingLogin:]
+[CalManagedCalDAVPrincipal predicateForExistingPrincipalPath:]
+[CalManagedCalDAVPrincipal freeBusyCacheClass]
-[CalManagedCalDAVPrincipal supportsUnbind]
-[CalManagedCalDAVPrincipal setSupportsUnbind:]
-[CalManagedCalDAVPrincipal isColorEditable]
-[CalManagedCalDAVPrincipal principalURLString]
-[CalManagedCalDAVPrincipal hasSubscriptionCalendarWithID:orURL:]
-[CalManagedCalDAVPrincipal clearCTagsAndSyncTokens]
-[CalManagedCalDAVPrincipal supportsAttendeeComments]
-[CalManagedCalDAVPrincipal supportsDropBoxAttachments]
-[CalManagedCalDAVPrincipal supportsManagedAttachments]
-[CalManagedCalDAVPrincipal clearETags]
-[CalManagedCalDAVPrincipal supportsSharingScheduling]
+[CalManagedCalDAVSubscribedCalendar entityName]
-[CalManagedCalDAVSubscribedCalendar lastOperationError]
-[CalManagedCalDAVSubscribedCalendar isSubscribed]
-[CalManagedCalDAVSubscribedCalendar isSubscribedHolidayCalendar]
-[CalManagedCalDAVSubscribedCalendar allowsScheduling]
-[CalManagedCalendar updateShareeDerivedProperties]
-[CalManagedCalendar cachedHasSharees]
-[CalManagedCalendar isFamilyCalendar]
-[CalManagedCalendar prefetchRelationshipsForDelete]
-[CalManagedCalendar _containsEntityName:]
-[CalManagedCalendar containsEvents]
-[CalManagedCalendar containsTasks]
-[CalManagedCalendar shouldDisplayAsReminderCalendar]
-[CalManagedCalendar contextForValidationError]
-[CalManagedCalendar subscriptionOrPublishURL]
-[CalManagedCalendar isLocal]
-[CalManagedCalendar isMigrateable]
-[CalManagedCalendar isColorEditable]
-[CalManagedCalendar isAddressMe:]
-[CalManagedCalendar isOwnerAddress:]
-[CalManagedCalendar isOwnerMe]
-[CalManagedCalendar hasAddressForMe]
-[CalManagedCalendar attributesToCompareForMerge]
-[CalManagedCalendar relationshipsToCompareForMerge]
-[CalManagedCalendar defaultAlarmsWithIsAllDayEvent:]
-[CalManagedCalendar defaultAlarmsWithIsAllDayEvent:fromServer:]
+[CalManagedCalendar enableChangeRequestNotifications]
-[CalManagedCalendar isFacebookBirthdayCalendar]
-[CalManagedCalendar isSubscribedHolidayCalendar]
-[CalManagedCalendar shouldShowInPrimaryAccountsShowDelegates:]
-[CalManagedCalendar bestDefaultSymbolicColor]
-[CalManagedCalendar bestDefaultSymbolicColorWithExistingNodes:]
-[CalManagedCalendar sharedOwnerAddresses]
-[CalManagedCalendar setPublishURL:]
-[CalManagedCalendar defaultOrganizerEmailForNewItems]
-[CalManagedCalendar ignoreAlarms]
-[CalManagedCalendar setIgnoreAlarms:]
-[CalManagedCalendar defaultAlarmsForAllDayEvents]
___50-[CalManagedCalendar defaultAlarmsForAllDayEvents]_block_invoke
-[CalManagedCalendar defaultAlarmsForTimedEvents]
___49-[CalManagedCalendar defaultAlarmsForTimedEvents]_block_invoke
-[CalManagedCalendar allowsScheduling]
-[CalManagedCalendar isDefaultSchedulingCalendar]
-[CalManagedCalendar isDistinguishedExchangeCalendar]
-[CalManagedCalendar serverPath]
-[CalManagedCalendar enclosingSource]
-[IssueCounter count]
-[IssueCounter setCount:]
-[CalManagedCalendar(ICSImport) fixAndReportIssuesInNewlyImportedItem:]
-[CalManagedCalendar(ICSImport) _componentIsDangerousAlarm:]
-[CalManagedCalendar(ICSImport) _containsDangerousAlarms:]
-[CalManagedCalendar(ICSImport) _cleanComponent:]
-[CalManagedCalendar(ICSImport) calendarsToCheckForDuplicatedUIDS]
-[CalManagedCalendar(ICSImport) moveEventsAndMastersWithDuplicatedUIDSFromOtherCalendars:sharedUIDS:]
-[CalManagedCalendar(ICSImport) handleDuplicatedUIDSFromThisCalendar:context:]
-[CalManagedCalendar(ICSImport) _importCleanedDocument:importOptionsForInsert:importOptionsForUpdate:sharedUIDsToImport:objectIDsImported:progressBlock:abortForIssueBlock:]
___172-[CalManagedCalendar(ICSImport) _importCleanedDocument:importOptionsForInsert:importOptionsForUpdate:sharedUIDsToImport:objectIDsImported:progressBlock:abortForIssueBlock:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___172-[CalManagedCalendar(ICSImport) _importCleanedDocument:importOptionsForInsert:importOptionsForUpdate:sharedUIDsToImport:objectIDsImported:progressBlock:abortForIssueBlock:]_block_invoke661
___copy_helper_block_662
___destroy_helper_block_663
-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]
-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke_2
___copy_helper_block_670
___destroy_helper_block_671
___copy_helper_block_674
___destroy_helper_block_675
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke678
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke_2679
___copy_helper_block_680
___destroy_helper_block_681
___copy_helper_block_683
___destroy_helper_block_684
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke686
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke_2687
___copy_helper_block_688
___destroy_helper_block_689
___copy_helper_block_691
___destroy_helper_block_692
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke695
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke_2696
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke_3
___230-[CalManagedCalendar(ICSImport) importICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:shouldSaveOnSuccess:synchronousFinishBlock:]_block_invoke_4
___copy_helper_block_700
___destroy_helper_block_701
___copy_helper_block_703
___destroy_helper_block_704
___copy_helper_block_706
___destroy_helper_block_707
-[CalManagedCalendar(ICSImport) blockingImportICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:progressBlock:abortForIssueBlock:finishBlock:]
-[CalManagedCalendar(ICSImport) asyncImportICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]
___192-[CalManagedCalendar(ICSImport) asyncImportICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke
___192-[CalManagedCalendar(ICSImport) asyncImportICSDocument:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke_2
___copy_helper_block_741
___destroy_helper_block_742
___copy_helper_block_744
___destroy_helper_block_745
-[CalManagedCalendar(ICSImport) asyncImportFiles:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]
___186-[CalManagedCalendar(ICSImport) asyncImportFiles:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke
___186-[CalManagedCalendar(ICSImport) asyncImportFiles:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke_2
___copy_helper_block_749
___destroy_helper_block_750
___186-[CalManagedCalendar(ICSImport) asyncImportFiles:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke752
___186-[CalManagedCalendar(ICSImport) asyncImportFiles:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke_2755
___copy_helper_block_756
___destroy_helper_block_757
___copy_helper_block_759
___destroy_helper_block_760
___186-[CalManagedCalendar(ICSImport) asyncImportFiles:importOptionsForInsert:importOptionsForUpdate:processEvents:processReminders:callbackQueue:progressBlock:abortForIssueBlock:finishBlock:]_block_invoke763
___copy_helper_block_770
___destroy_helper_block_771
___copy_helper_block_776
___destroy_helper_block_777
+[CalManagedCalendarItem recognizedICSProperties]
___49+[CalManagedCalendarItem recognizedICSProperties]_block_invoke
+[CalManagedCalendarItem recognizedICSPropertyParameterMap]
___59+[CalManagedCalendarItem recognizedICSPropertyParameterMap]_block_invoke
+[CalManagedCalendarItem fetchRequestWithSharedUID:inManagedObjectContext:]
+[CalManagedCalendarItem masterItemWithLocalUID:inCalendar:]
+[CalManagedCalendarItem masterItemWithSharedUID:inCalendar:]
+[CalManagedCalendarItem batchCalendarItemsWithSharedUIDs:inCalendar:inContext:]
+[CalManagedCalendarItem batchCalendarItemsWithSharedUIDsHelper:inCalendar:inContext:]
+[CalManagedCalendarItem calendarItemsWithFilenames:inCalendar:inManagedObjectContext:]
+[CalManagedCalendarItem calendarItemsWithSharedUID:inCalendar:inManagedObjectContext:]
-[CalManagedCalendarItem contextForValidationError]
-[CalManagedCalendarItem refreshPath]
-[CalManagedCalendarItem _updateAlarmDerivedPropertiesForSave]
-[CalManagedCalendarItem updateAlarmDerivedProperties]
-[CalManagedCalendarItem refreshObjects:]
-[CalManagedCalendarItem computeChecksum]
-[CalManagedCalendarItem refreshRelationships]
-[CalManagedCalendarItem isExchangeCompatible]
-[CalManagedCalendarItem _makeExchangeCompatible]
-[CalManagedCalendarItem makeExchangeCompatible]
-[CalManagedCalendarItem shouldWarnUserOnMoveToExchangeCalendar:]
-[CalManagedCalendarItem attributesToCompareForMerge]
-[CalManagedCalendarItem relationshipsToCompareForMerge]
-[CalManagedCalendarItem clearETags]
-[CalManagedCalendarItem defaultAlarmsBasedOnItemAndPreferences]
-[CalManagedCalendarItem defaultAlarmsBasedOnItemAndPreferencesFromServer:]
+[CalManagedCalendarItem _ruleForRuleString:]
___45+[CalManagedCalendarItem _ruleForRuleString:]_block_invoke
-[CalManagedCalendarItem hasOccurrenceInRangeFromDate:toDate:]
+[CalManagedCalendarItem _datesByExpandingFastPathRecurrenceRule:fromDate:toDate:duration:timeZoneString:recurrenceStartDate:isAllDay:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___135+[CalManagedCalendarItem _datesByExpandingFastPathRecurrenceRule:fromDate:toDate:duration:timeZoneString:recurrenceStartDate:isAllDay:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalManagedCalendarItem _formBirthdayFromBirthDate:calendar:]
+[CalManagedCalendarItem _datesByExpandingLunarBirthdayFromDate:toDate:duration:timeZoneString:recurrenceStartDate:isAllDay:lunarCalendarString:]
+[CalManagedCalendarItem _adjustTimeZoneString:andRecurrenceDate:forAllDay:]
+[CalManagedCalendarItem _datesByExpandingNonFastPathRecurrenceRule:fromDate:toDate:duration:timeZoneString:recurrenceStartDate:isAllDay:]
+[CalManagedCalendarItem _isLunarBirthdayRecurrenceRule:lunarCalendarString:]
+[CalManagedCalendarItem datesByExpandingRecurrenceRuleString:fromDate:toDate:duration:timeZoneString:recurrenceStartDate:isAllDay:]
+[CalManagedCalendarItem datesByExpandingRecurrenceRuleString:fromDate:toDate:duration:timeZoneString:recurrenceStartDate:isAllDay:lunarCalendarString:]
-[CalManagedCalendarItem alarmLogHelper:]
-[CalManagedCalendarItem derivedAlarmsHelperForDefaultAlarmReferences:existingDefaultAlarms:explicitlyFromServer:processChanges:]
-[CalManagedCalendarItem undeleteDefaultAlarmsHelper:]
___54-[CalManagedCalendarItem undeleteDefaultAlarmsHelper:]_block_invoke
-[CalManagedCalendarItem customAlarmCount]
-[CalManagedCalendarItem earliestOccurrenceDateBetweenStartDate:endDate:withOffSet:]
-[CalManagedCalendarItem earliestAlarmTriggerDateBetweenStartDate:endDate:]
-[CalManagedCalendarItem creationDate]
-[CalManagedCalendarItem setCreationDate:]
-[CalManagedCalendarItem masterItem]
-[CalManagedCalendarItem priorityNumber]
-[CalManagedCalendarItem setPriorityNumber:]
-[CalManagedCalendarItem calendarItemPermissionNumber]
-[CalManagedCalendarItem setCalendarItemPermissionNumber:]
-[CalManagedCalendarItem attachmentSet]
-[CalManagedCalendarItem participantForMe]
-[CalManagedCalendarItem cachedHasAttendee]
-[CalManagedCalendarItem cachedHasAttachment]
-[CalManagedCalendarItem cachedHasAlarm]
-[CalManagedCalendarItem cachedIsCalendarOwnerInvitedAttendee]
-[CalManagedCalendarItem cachedIsCurrentUserInvitedAttendee]
-[CalManagedCalendarItem isReminder]
-[CalManagedCalendarItem scheduleAgentString]
-[CalManagedCalendarItem setScheduleAgentString:]
-[CalManagedCalendarItem organizerEmail]
-[CalManagedCalendarItem setOrganizerEmail:]
-[CalManagedCalendarItem defaultAlarmWasDeleted]
-[CalManagedCalendarItem setDefaultAlarmWasDeleted:]
-[CalManagedCalendarItem attachmentWithFileName:]
-[CalManagedCalendarItem updateAttachmentDerivedDataProcessChanges:]
-[CalManagedCalendarItem attachmentsLocation]
-[CalManagedCalendarItem enclosingSource]
-[CalManagedCalendarItem(CalendarSourceIPI) entityClass]
-[CalManagedCalendarItem(CalendarSourceIPI) occurrenceIDFromCommittedValues]
-[CalManagedCalendarItem(CalendarSourceIPI) updateWithEntity:alarms:inCalendar:]
-[CalManagedCalendarItem(CalendarSourceIPI) _updateWithEntity:alarms:omitSyncRecord:inCalendar:processChanges:]
+[CalManagedCalendarItem(PathConversionSupport) calendarItemUIDFromCalendarItemPath:]
-[CalManagedCalendarUserAddress willRefresh:]
-[CalManagedCalendarUserAddress enclosingSource]
+[CalManagedComment entityName]
-[CalManagedComment willRefresh:]
-[CalManagedComment address]
-[CalManagedComment setAddress:]
-[CalManagedComment uniqueKeyForObject]
-[CalManagedComment(CalendarSourceIPI) updateWithEntity:]
+[CalManagedDeleteDropBoxChangeRequest insertDeleteDropBoxRequestForDropBoxUri:forLocalUID:sharedUID:sourceUID:inManagedObjectContext:]
-[CalManagedDiff willRefresh:]
+[CalManagedDownloadDropBoxFileChangeRequest insertDownloadDropBoxFileRequestForFileName:withEtag:forLocalUID:forSharedUID:fromSource:inManagedObjectContext:]
+[CalManagedDropBoxFileOpChangeRequest insertUploadDropBoxFileRequestForFileName:forLocalUID:forSharedUID:fromSource:inManagedObjectContext:]
+[CalManagedDropBoxFileOpChangeRequest insertDeleteDropBoxFileRequestForFileName:forLocalUID:forSharedUID:fromSource:inManagedObjectContext:]
-[CalManagedEvent changesWillResultIniMIPScheduling]
+[CalManagedEvent recognizedICSProperties]
___42+[CalManagedEvent recognizedICSProperties]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalManagedEvent recognizedICSPropertyParameterMap]
___52+[CalManagedEvent recognizedICSPropertyParameterMap]_block_invoke
___copy_helper_block_21
___destroy_helper_block_22
+[CalManagedEvent fetchRequestWithLocalUID:occurrence:inManagedObjectContext:]
+[CalManagedEvent fetchRequestWithSharedUID:occurrence:inManagedObjectContext:]
+[CalManagedEvent fetchRequestWithSharedUID:occurrence:calendars:inManagedObjectContext:]
-[CalManagedEvent attendeesExcludingOrganizer]
___46-[CalManagedEvent attendeesExcludingOrganizer]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
___copy_helper_block_142
___destroy_helper_block_143
-[CalManagedEvent updateAttendeeDerivedPropertiesInCalendar:myAttendee:]
-[CalManagedEvent updateAttendeeDerivedPropertiesInCalendar:processPendingChanges:myAttendee:]
-[CalManagedEvent newestInvitation]
-[CalManagedEvent _commonDetachmentTests]
-[CalManagedEvent shouldShowSeparateInvite]
-[CalManagedEvent isSignificantlyDetached]
-[CalManagedEvent isSignificantlyDetachedIgnoringParticipation]
-[CalManagedEvent allAlarms]
-[CalManagedEvent _detachForOccurrence:]
-[CalManagedEvent detachForOccurrence:]
-[CalManagedEvent detachedEventWithOccurrence:]
-[CalManagedEvent occurrencesFromDate:toDate:]
-[CalManagedEvent hasOccurrenceInRangeFromDate:toDate:]
-[CalManagedEvent hasOccurrenceInRangeFromDate:toDate:withExcludingOption:]
-[CalManagedEvent occurrencesBinnedByDayForEvents:inCalendar:startDate:endDate:]
-[CalManagedEvent occurrencesToScanForConflicts]
-[CalManagedEvent conflictsForOccurrences:]
___43-[CalManagedEvent conflictsForOccurrences:]_block_invoke
-[CalManagedEvent addVirtualRequestMessage]
-[CalManagedEvent refreshRelationships]
-[CalManagedEvent isOrganizerOwner]
-[CalManagedEvent isAnInvitation]
-[CalManagedEvent hasInvitedAttendee]
-[CalManagedEvent hasOccurrenceOnOrAfter:]
-[CalManagedEvent hasOccurrenceAfter:]
-[CalManagedEvent _makeExchangeCompatible]
-[CalManagedEvent isExchangeCompatible]
-[CalManagedEvent _isDate:betweenStart:andEnd:]
-[CalManagedEvent isOverlappingAdjacentOccurrenceForStartDate:endDate:originalStartDate:]
-[CalManagedEvent hasOccurrencesThatOverlap]
-[CalManagedEvent isOverlappingAlarmForStartDate:endDate:newDuration:]
-[CalManagedEvent hasAlarmWithDuration:thatOverlapsOccWithStartDate:andEndDate:]
-[CalManagedEvent attributesToCompareForMerge]
-[CalManagedEvent relationshipsToCompareForMerge]
-[CalManagedEvent travelRouteType]
-[CalManagedEvent expandAndTranslateEventsFromDate:toDate:translateBlock:sortSelector:]
-[CalManagedEvent agentScanDropboxOperation]
___44-[CalManagedEvent agentScanDropboxOperation]_block_invoke
___copy_helper_block_779
___destroy_helper_block_780
-[CalManagedEvent queueScanDropboxOperation]
-[CalManagedEvent _fetchManagedAttachmentsWithSource:]
-[CalManagedEvent masterItem]
-[CalManagedEvent isEvent]
-[CalManagedEvent masterEventOccurrence]
-[CalManagedEvent startDateUnadjustedFromUTC]
-[CalManagedEvent setStartDateUnadjustedFromUTC:]
-[CalManagedEvent endDateUnadjustedFromUTC]
-[CalManagedEvent setEndDateUnadjustedFromUTC:]
-[CalManagedEvent statusString]
-[CalManagedEvent setStatusString:]
-[CalManagedEvent availabilityEnum]
-[CalManagedEvent setAvailabilityEnum:]
-[CalManagedEvent organizerName]
-[CalManagedEvent setOrganizerName:]
-[CalManagedEvent organizerURL]
-[CalManagedEvent setOrganizerURL:]
-[CalManagedEvent organizerEmail]
-[CalManagedEvent setOrganizerEmail:]
-[CalManagedEvent organizedByMe]
-[CalManagedEvent participantForMe]
-[CalManagedEvent participantsStatus]
-[CalManagedEvent recurrenceDateUnadjustedFromUTC]
-[CalManagedEvent ekStructuredLocation]
-[CalManagedEvent ekStructuredStartLocation]
-[CalManagedEvent setEkStructuredLocation:]
___43-[CalManagedEvent setEkStructuredLocation:]_block_invoke
___copy_helper_block_863
___destroy_helper_block_864
-[CalManagedEvent setEkStructuredStartLocation:]
___48-[CalManagedEvent setEkStructuredStartLocation:]_block_invoke
___copy_helper_block_871
___destroy_helper_block_872
-[CalManagedEvent privacyLevelString]
-[CalManagedEvent setPrivacyLevelString:]
-[CalManagedEvent responseComment]
-[CalManagedEvent scheduleAgentString]
-[CalManagedEvent setScheduleAgentString:]
-[CalManagedEvent setResponseComment:]
-[CalManagedEvent notificationBoxMessageSet]
-[CalManagedEvent cachedHasAttendee]
-[CalManagedEvent cachedIsCalendarOwnerInvitedAttendee]
-[CalManagedEvent cachedIsCurrentUserInvitedAttendee]
-[CalManagedEvent sliceParentID]
-[CalManagedEvent lunarCalendarString]
-[CalManagedEvent birthdayTitle]
-[CalManagedEvent isYearlessBirthday]
-[CalManagedEvent nameForBirthday]
-[CalManagedEvent dontSendNotificationForChanges]
-[CalManagedEvent setDontSendNotificationForChanges:]
-[CalManagedEvent(CalendarSourceIPI) _updateWithEntity:alarms:omitSyncRecord:inCalendar:]
-[CalManagedEvent(CalendarSourceIPI) updateWithEntity:alarms:inCalendar:processChanges:]
-[CalManagedEvent(CalendarSourceIPI) legacyDateType]
___copy_helper_block_1555
___destroy_helper_block_1556
___copy_helper_block_1562
___destroy_helper_block_1563
+[NSDate(MidnightHelpers) midnightsInCalendar:fromStart:toEnd:]
+[CalManagedExchangeAccount entityName]
-[CalManagedExchangeAccount awakeFromInsert]
-[CalManagedExchangeAccount existingCredentialForUseExternalURL:]
-[CalManagedExchangeAccount setPassword:]
-[CalManagedExchangeAccount setPassword:persistence:]
-[CalManagedExchangeAccount setExternalURL:]
-[CalManagedExchangeAccount fetchRequestForInsertValidation]
+[CalManagedExchangeAccount fetchRequestForExistingURL:externalURL:login:context:]
-[CalManagedExchangeCalendar keepSyncRecordLocal]
-[CalManagedExchangeCalendar isColorEditable]
-[CalManagedExchangeCalendar isAffectingAvailability]
-[CalManagedExchangeCalendar nodesInNamespace]
-[CalManagedExchangeCalendar validateForInsert:]
-[CalManagedExchangeCalendar deleteItemsWithIds:]
-[CalManagedExchangeCalendar deleteItemsWithoutIds:]
+[CalManagedExchangeCalendar enableChangeRequestNotifications]
-[CalManagedExchangeCalendar fixAndReportIssuesInNewlyImportedItem:]
-[CalManagedExchangeCalendar setSharees:]
-[CalManagedExchangeCalendar isDistinguishedExchangeCalendar]
-[CalManagedExchangeCalendar isDefaultSchedulingCalendar]
-[CalManagedExchangeCalendar serverPath]
-[CalManagedExchangePrincipal awakeFromInsert]
+[CalManagedExchangePrincipal fetchRequestWithServerURL:isDelegate:inManagedObjectContext:]
-[CalManagedExchangePrincipal fetchRequestForInsertValidation]
-[CalManagedExchangePrincipal isCalendarServerPrivateEventsSupported]
-[CalManagedExchangePrincipal isPrivateCommentsSupported]
-[CalManagedExchangePrincipal isAutoScheduleSupported]
-[CalManagedExchangePrincipal isColorEditable]
-[CalManagedExchangePrincipal setSupportsDefaultAlarms:]
+[CalManagedExchangePrincipal freeBusyCacheClass]
+[CalManagedExchangePrincipal fetchRequestForEmailAddress:context:]
+[CalManagedExpandGroupChangeRequest insertExpandGroupRequestForGroupIdentifier:withExceptionDate:forLocalUID:sharedUID:sourceUID:inManagedObjectContext:]
-[CalManagedGroup supportsUnbind]
-[CalManagedGroup dropBoxPathString]
-[CalManagedGroup serverURL]
+[CalManagedGroup entityName]
-[CalManagedGroup prefetchRelationshipsForDelete]
-[CalManagedGroup isColorEditable]
-[CalManagedGroup reminderCalendars]
-[CalManagedGroup providerIdentifier]
-[CalManagedGroup typeString]
-[CalManagedGroup isEnabledForEvents]
-[CalManagedGroup isEnabledForReminders]
-[CalManagedGroup ownerAddresses]
-[CalManagedGroup supportsAttendeeComments]
-[CalManagedGroup supportsDropBoxAttachments]
-[CalManagedGroup supportsFreebusy]
-[CalManagedGroup supportsManagedAttachments]
-[CalManagedGroup supportsPrivateEvents]
-[CalManagedGroup supportsSharingScheduling]
-[CalManagedGroup enclosingSource]
-[NSMutableArray(NSMutableArray_CalGroup_Internal) removeNonTaskCalendars]
-[CalVirtualSource isWritable]
-[CalVirtualSource supportsUnbind]
-[CalVirtualSource dropBoxPathString]
-[CalVirtualSource serverURL]
-[CalVirtualSource dealloc]
-[CalVirtualSource copyWithZone:]
-[CalVirtualSource providerIdentifier]
-[CalVirtualSource isNew]
-[CalVirtualSource ownerAddresses]
-[CalVirtualSource supportsDropBoxAttachments]
-[CalVirtualSource supportsAttendeeComments]
-[CalVirtualSource supportsFreebusy]
-[CalVirtualSource supportsManagedAttachments]
-[CalVirtualSource supportsPrivateEvents]
-[CalVirtualSource supportsSharingScheduling]
-[CalVirtualSource canBeConvertedToFullObject]
-[CalVirtualSource isPartialObject]
-[CalVirtualSource isPropertyUnavailable:]
-[CalVirtualSource preFrozenRelationshipObjects]
+[CalVirtualSource propertiesUnavailableForPartialObjects]
+[CalManagedIMAPCalendar entityName]
-[CalManagedIMAPCalendar awakeFromInsert]
-[CalManagedIMAPCalendar keepSyncRecordLocal]
-[CalManagedIMAPCalendar type]
-[CalManagedIMAPCalendar relativePath]
-[CalManagedIMAPCalendar isEventContainer]
-[CalManagedIMAPCalendar nodesInNamespace]
-[CalManagedIMAPCalendar isWritable]
-[CalManagedIMAPCalendar validateForWrite:]
-[CalManagedIMAPCalendar validateForInsert:]
-[CalManagedIMAPCalendar validateForUpdate:]
-[CalManagedIMAPCalendar defaultAlarmsWithIsAllDayEvent:]
-[CalManagedIMAPCalendar defaultAlarmsWithIsAllDayEvent:fromServer:]
-[CalManagedIMAPCalendar shouldShowInPrimaryAccounts]
-[CalManagedIMAPCalendar sharees]
-[CalManagedIMAPCalendar setSharees:]
-[CalManagedIMAPCalendar allowsScheduling]
+[CalManagedIMAPGroup entityName]
+[CalManagedIMAPGroup pathExtension]
-[CalManagedIMAPGroup awakeFromInsert]
-[CalManagedIMAPGroup isRemote]
-[CalManagedIMAPGroup type]
-[CalManagedLocalCalendar isWritable]
-[CalManagedLocalCalendar supportsPublishing]
-[CalManagedLocalCalendar isMigrateable]
+[CalManagedLocalCalendar enableChangeRequestNotifications]
-[CalManagedLocalCalendar validateForWrite:]
-[CalManagedLocalCalendar validateForInsert:]
-[CalManagedLocalCalendar validateForUpdate:]
-[CalManagedLocalCalendar didSave]
-[CalManagedLocalCalendar defaultAlarmsWithIsAllDayEvent:]
-[CalManagedLocalCalendar defaultAlarmsWithIsAllDayEvent:fromServer:]
-[CalManagedLocalCalendar nodesForOrdering]
___copy_helper_block_
___destroy_helper_block_
-[CalManagedLocalCalendar setSharees:]
-[CalManagedLocalCalendar publishURL]
+[CalManagedLocalGroup entityName]
+[CalManagedLocalGroup pathExtension]
-[CalManagedLocalGroup supportsPublishing]
-[CalManagedLocalGroup willSave]
-[CalManagedLocalGroup type]
-[CalManagedLocalGroup properties]
-[CalManagedLocalGroup ownerAddresses]
+[CalManagedMessage _messagesForPrincipals:forClass:context:]
+[CalManagedMessage _messagesForCalendars:forClass:context:]
-[CalManagedMessage isOccurrenceIDInMessage:]
-[CalManagedMessage hasError]
___39-[CalManagedMessage invitationChildren]_block_invoke
-[CalManagedMessage respondsToOK]
-[CalManagedMessage _representsCancelledEvent]
-[CalManagedMessage actionTypes]
-[CalManagedMessage respondsToActionType:]
-[CalManagedMessage numberAttendeesNotMe]
-[CalManagedMessage senderNameFromAddressBook]
-[CalManagedMessage _nextOoccuranceDate]
-[CalManagedMessage descriptionString]
-[CalManagedMessage descriptionStringForNotificationCenter:]
-[CalManagedMessage isSharedCalendarType]
+[CalManagedMessage _calendarShouldNotShowNOBOsNeedingReplies:]
+[CalManagedMessage _futureEventsNeedingNOBOsNeedingRepliesForPrincipal:]
+[CalManagedMessage _createMessagesForFutureEvents:forPrincipal:]
-[CalManagedMessage hasOneSender]
-[CalManagedMessage senderThatIsNotMe]
-[CalManagedMessage fetchSenderImageWithDiameter:andCompletionBlock:]
___69-[CalManagedMessage fetchSenderImageWithDiameter:andCompletionBlock:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___69-[CalManagedMessage fetchSenderImageWithDiameter:andCompletionBlock:]_block_invoke654
___copy_helper_block_655
___destroy_helper_block_656
-[CalManagedMessage messageTypeNumber]
-[CalManagedMessage isIntentionallyDetached]
-[CalManagedMessage setIsIntentionallyDetached:]
-[CalManagedMessage notify]
-[CalManagedMessage setNotify:]
-[CalManagedMessage(SharedCalendarInviteNotifications) isVTODOOnlySharedCalendar]
-[CalManagedMessage(SharedCalendarInviteNotifications) calendarForSharedInvite]
-[CalManagedMessage(SharedCalendarInviteNotifications) acceptSharingInvite]
+[CalManagedMessageChangeRequest insertDeleteNotificationChangeRequestForServerFile:principal:inContext:]
+[CalManagedMoveEntityChangeRequest insertMoveEntityRequestForLocalUID:sharedUID:sourceUID:destinationUID:inManagedObjectContext:]
___130+[CalManagedMoveEntityChangeRequest insertMoveEntityRequestForLocalUID:sharedUID:sourceUID:destinationUID:inManagedObjectContext:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalManagedNode pathExtension]
-[CalManagedNode isSharedToMe]
-[CalManagedNode isSharedByMe]
-[CalManagedNode order]
-[CalManagedNode setOrder:]
-[CalManagedNode isEventContainer]
-[CalManagedNode isRefreshable]
-[CalManagedNode isRenameable]
-[CalManagedNode isColorEditable]
-[CalManagedNode isTaskContainer]
-[CalManagedNode supportsAttendeeSearch]
-[CalManagedNode supportsCalDAVPublish]
-[CalManagedNode subscriptionOrPublishURL]
-[CalManagedNode checked]
-[CalManagedNode setChecked:]
-[CalManagedNode keepSyncRecordLocal]
-[CalManagedNode compare:]
-[CalManagedNode _isTitleInUse:nodes:]
-[CalManagedNode isTitleInUse:]
-[CalManagedNode titleWithPrefix:]
-[CalManagedNode nodesInNamespace]
-[CalManagedNode updateOrderToFirstOrder]
-[CalManagedNode updateOrderToOrder:]
-[CalManagedNode updateOrderToFirstOrderWithNodesForOrdering:]
-[CalManagedNode updateOrderToLastOrderWithNodesForOrdering:]
-[CalManagedNode updateOrderToOrder:withNodesForOrdering:]
-[CalManagedNode _updateOrderToOrder:shouldUseFirstOrder:shouldUseLastOrder:nodesForOrdering:]
-[CalManagedNode nodesForOrdering]
-[CalManagedNode type]
-[CalManagedNode lastOperationError]
+[CalManagedPersistentOperation insertOperationWithData:inManagedObjectContext:]
-[CalManagedPersistentOperation _nextSequenceNumber]
+[CalManagedPrincipal fetchRequestForICalDelegatesWithUID:inManagedObjectContext:]
+[CalManagedPrincipal fetchRequestForDelegatesWithAccount:inManagedObjectContext:]
+[CalManagedPrincipal fetchPrincipalWithObjectID:prefetchedRelationshipKeyPaths:inContext:]
-[CalManagedPrincipal serverURL]
-[CalManagedPrincipal isCalendarServerPrivateEventsSupported]
-[CalManagedPrincipal isPrivateCommentsSupported]
-[CalManagedPrincipal isAutoScheduleSupported]
+[CalManagedPrincipal freeBusyCacheClass]
-[CalManagedPrincipal supportsFreebusy]
-[CalManagedPrincipal supportsPrivateEvents]
-[CalManagedPrincipal _setOverrideBaseURL:]
-[CalManagedPrincipal setOverrideBaseURL:]
-[CalManagedPrincipal stripPathAndSetOverrideBaseURL:]
-[CalManagedPrincipal validateForWrite:]
-[CalManagedPrincipal validateForUpdate:]
-[CalManagedPrincipal fetchRequestForInsertValidation]
-[CalManagedPrincipal validateForInsert:]
-[CalManagedPrincipal providerIdentifier]
-[CalManagedPrincipal ownerAddresses]
-[CalManagedPrincipal displayOrder]
+[CalManagedPublication URLForPublicationWithBaseURL:user:filename:]
-[CalManagedPublication publicationURL]
-[CalManagedPublication setPublicationURL:]
-[CalManagedPublication filename]
-[CalManagedPublication setUser:password:]
-[CalManagedPublication user]
-[CalManagedPublication password]
-[CalManagedPublication subscriptionURL]
-[CalManagedPublication webpageURL]
-[CalManagedPublication setNeedsPublish:]
-[CalManagedPublication didSave]
___32-[CalManagedPublication didSave]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalManagedPublication willRefresh:]
-[CalManagedPublication properties]
-[CalManagedPublication iCalendarDocument]
-[CalManagedPublication publish]
___32-[CalManagedPublication publish]_block_invoke
___copy_helper_block_194
___destroy_helper_block_195
-[CalManagedPublication lastOperationError]
-[CalManagedPublication status]
-[CalManagedPublication publisher]
+[CalManagedRecurrenceException entityName]
+[CalManagedRecurrenceException addExceptionPrefetchToCalendarItemFetch:]
-[CalManagedRecurrenceException occurrenceIndex]
-[CalManagedRecurrenceException committedExtraAttendees]
-[CalManagedRecurrenceException uniqueKeyForObject]
-[CalManagedRecurrenceException enclosingSource]
+[CalManagedRemoteCalendar entityName]
-[CalManagedRemoteCalendar isRefreshable]
-[CalManagedRemoteCalendar isWritable]
-[CalManagedRemoteCalendar isEditableForReply]
-[CalManagedRemoteCalendar setIsEditableForReply:]
-[CalManagedRemoteCalendar displayTitle]
-[CalManagedRemoteCalendar isAffectingAvailability]
-[CalManagedRemoteCalendar _calendarOwnerAddressIsEquivalentToURL:]
-[CalManagedRemoteCalendar hasAddressForMe]
-[CalManagedRemoteCalendar defaultOrganizerEmailForNewItems]
+[CalManagedScheduleChangeRequest calculateRecipientsForInvitationReply:meAddress:organizer:]
+[CalManagedScheduleChangeRequest calculateRecipientsForScheduleEvent:meAddress:organizer:]
+[CalManagedScheduleChangeRequest calculateRecipientsForCancelDocument:]
+[CalManagedScheduleChangeRequest insertScheduleChangeRequestWithEvent:document:method:]
+[CalManagedScheduleChangeRequest insertScheduleChangeRequestWithEvent:document:]
+[CalManagedScheduleChangeRequest insertScheduleChangeRequestWithEvent:method:]
+[CalManagedSetDropBoxAclChangeRequest insertSetDropBoxAclRequestWithAcl:forLocalUID:forSharedUID:fromSource:inManagedObjectContext:]
+[CalManagedSharedCalendarInvitationResponseChangeRequest insertSharedCalendarInvitationResponse:toInvitation:principalUID:calendarHomePath:inManagedObjectContext:]
-[CalManagedSubscriptionCalendar isRefreshable]
-[CalManagedSubscriptionCalendar isLocal]
-[CalManagedSubscriptionCalendar isHolidayCalendar]
-[CalManagedSubscriptionCalendar isMigrateable]
-[CalManagedSubscriptionCalendar lastOperationError]
-[CalManagedSubscriptionCalendar isSubscribedHolidayCalendar]
-[CalManagedSubscriptionCalendar setSharees:]
-[CalManagedSubscriptionCalendar allowsScheduling]
+[CalManagedSubscriptionCalendar hasSubscriptionCalendarWithSubscriptionID:subscriptionURL:inContext:]
+[CalManagedSubscriptionCalendar subscriptionCalendarWithSubscriptionID:subscriptionURL:inContext:]
+[CalManagedSubscriptionCalendarChangeRequest insertSubscriptionCalendarChangeRequestWithType:sourceUID:uri:inManagedObjectContext:]
+[CalManagedSubscriptionGroup entityName]
+[CalManagedSubscriptionGroup pathExtension]
-[CalManagedSubscriptionGroup type]
-[CalManagedSubscriptionGroup properties]
-[CalManagedSubscriptionInfo isHolidayCalendar]
-[CalManagedSubscriptionInfo willRefresh:]
-[CalManagedSubscriptionInfo displayableURL]
-[CalManagedSubscriptionInfo browsableURL]
-[CalManagedSubscriptionInfo user]
-[CalManagedSubscriptionInfo refreshIntervalIfAutoRefreshed]
-[CalManagedSubscriptionInfo setRefreshIntervalIfAutoRefreshed:]
-[CalManagedSubscriptionInfo enclosingSource]
+[CalManagedTask recognizedICSProperties]
___41+[CalManagedTask recognizedICSProperties]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalManagedTask setOrder:]
-[CalManagedTask _makeExchangeCompatible]
-[CalManagedTask isExchangeCompatible]
-[CalManagedTask attributesToCompareForMerge]
-[CalManagedTask updateAlarmDerivedProperties]
-[CalManagedTask defaultAlarmsBasedOnItemAndPreferences]
-[CalManagedTask hasOccurrenceInRangeFromDate:toDate:]
-[CalManagedTask earliestOccurrenceDateBetweenStartDate:endDate:withOffSet:]
-[CalManagedTask cachedHasLocationAlarm]
-[CalManagedTask(CalendarSourceIPI) updateWithEntity:inCalendar:]
+[CalManagedObject entityName]
-[CalManagedObject _withZeroStaleness:]
-[CalManagedObject refreshPropertiesWithZeroStaleness:]
___55-[CalManagedObject refreshPropertiesWithZeroStaleness:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalManagedObject refreshRelationshipsWithZeroStaleness:]
___58-[CalManagedObject refreshRelationshipsWithZeroStaleness:]_block_invoke
___copy_helper_block_68
___destroy_helper_block_69
-[CalManagedObject prefetchRelationshipsForDelete]
-[CalManagedObject contextForValidationError]
-[CalManagedObject attributesToCompareForMerge]
-[CalManagedObject relationshipsToCompareForMerge]
-[CalManagedObject attributesToApplyForMerge]
-[CalManagedObject applyAttributesFromObject:]
-[CalManagedObject uniqueKeyForObject]
-[CalManagedObject isValidManagedObject]
-[CalManagedObject fallbackToCommittedValueForKey:]
-[CalManagedObject enclosingSource]
-[CalManagedObject enclosingSources]
-[CalManagedObject canBeConvertedToFullObject]
-[CalManagedObject isFrozen]
-[CalManagedObject isNew]
-[CalManagedObject isPartialObject]
-[CalManagedObject isPropertyUnavailable:]
-[CalManagedObject managedObjectID]
-[CalManagedObject preFrozenRelationshipObjects]
+[CalManagedObject propertiesUnavailableForPartialObjects]
+[CalManagedObjectContext managedObjectContextWithOriginatorId:]
+[CalManagedObjectContext isCalendarAgent]
-[CalManagedObjectContext initWithPersistentStoreCoordinator:]
-[CalManagedObjectContext existingObjectsWithIDStrings:]
-[CalManagedObjectContext _associateWithIdentifier:secondaryIdentifier:]
-[CalManagedObjectContext _associateChildContext:withIdentifier:secondaryIdentifier:]
-[CalManagedObjectContext associateWithIdentifier:secondaryIdentifier:]
-[CalManagedObjectContext attachChildContextForIdentifier:secondaryIdentifier:]
___79-[CalManagedObjectContext attachChildContextForIdentifier:secondaryIdentifier:]_block_invoke
___79-[CalManagedObjectContext attachChildContextForIdentifier:secondaryIdentifier:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_225
___destroy_helper_block_226
-[CalManagedObjectContext associatedAndSecondaryIdentifiers]
-[CalManagedObjectContext isContextForMigration]
+[CalManagedObjectContext quickFetchWithBlock:]
___47+[CalManagedObjectContext quickFetchWithBlock:]_block_invoke
___copy_helper_block_294
___destroy_helper_block_295
+[CalManagedObjectContext quickFetchWithBlock:allowedStaleness:]
___64+[CalManagedObjectContext quickFetchWithBlock:allowedStaleness:]_block_invoke
___copy_helper_block_299
___destroy_helper_block_300
+[CalManagedObjectContext _userInfoForLog:]
+[CalManagedObjectContext logDetailedValidationError:]
-[CalManagedObjectContext logDetailedValidationError:]
-[CalManagedObjectContext originatorId]
-[CalManagedObjectContext setOriginatorId:]
-[CalManagedObjectContext writeChangesToCalDAVServer]
-[NSManagedObjectContext(DetailedValidationErrorLogging) logDetailedValidationError:]
+[CalValidationError validationErrorForObject:withLocalizedDescriptions:]
-[CalValidationError description]
+[CalManagedObjectModel initialize]
-[CalDAVCalendarSource initWithSession:calendar:]
-[CalDAVCalendarSource dealloc]
-[CalDAVCalendarSource _setupCapabilitiesForSession:calendar:]
-[CalDAVCalendarSource processResourcesFromServer:inManagedObjectContext:]
-[CalDAVCalendarSource processResourcesFromServer:failedResources:inManagedObjectContext:]
-[CalDAVCalendarSource operation:processResources:inManagedObjectContext:]
-[CalDAVCalendarSource operation:deleteResourcesWithFilenames:]
-[CalDAVCalendarSource processGetData:inManagedObjectContext:]
-[CalDAVCalendarSource hasCapability:]
-[CalDAVCalendarSource objectID]
-[CalDAVCalendarSource path]
-[CalDAVCalendarSource capabilities]
-[CalDAVCalendarSource uid]
-[CalDAVCalendarSource session]
+[CalPersistentStoreCoordinator _clearPSCForUnitTests]
-[CalPersistentStoreCoordinator dealloc]
___copy_helper_block_
___destroy_helper_block_
-[CalPersistentStoreCoordinator _flushMetaDataChangeToDisk]
-[CalPersistentStoreCoordinator setCreationDateForPersistentStore:]
-[CalPersistentStoreCoordinator setUpgradedEtagsForPersistentStore:]
-[CalPersistentStoreCoordinator removePersistentStore:]
-[CalPersistentStoreCoordinator _removeBackupCacheFiles]
-[CalPersistentStoreCoordinator restorePersistentStore:]
-[CalPersistentStoreCoordinator restorePersistentStoreInBatches:error:]
-[CalPersistentStoreCoordinator restorePersistentStoreViaTemp:]
-[CalPersistentStoreCoordinator isForMigration]
-[CalPersistentStoreCoordinator setIsForMigration:]
-[CalPersistenceMonitor unregisterListeners]
-[CalPersistenceMonitor dealloc]
-[CalPersistenceMonitor finalize]
+[NSPredicate(CalendarSupport) alarmPredicateWithCalendars:]
+[NSPredicate(CalendarSupport) nodePredicateWithUID:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithLocalUIDs:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithObjectIDs:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithLocalUID:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithSharedUIDs:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithSharedUIDs:calendar:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithSharedUIDs:calendars:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithSharedUID:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithSharedUID:calendar:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithLocalUID:calendar:]
+[NSPredicate(CalendarSupport) calendarItemPredicateWithFilenames:calendar:]
+[NSPredicate(CalendarSupport) eventPredicateWithLocalUID:occurrence:]
+[NSPredicate(CalendarSupport) eventPredicateWithSharedUIDs:]
+[NSPredicate(CalendarSupport) eventPredicateWithSharedUID:occurrence:]
+[NSPredicate(CalendarSupport) eventPredicateWithSharedUID:occurrences:]
+[NSPredicate(CalendarSupport) eventPredicateWithAlarm:calendars:]
+[NSPredicate(CalendarSupport) eventPredicateWithAttendee:calendars:]
+[NSPredicate(CalendarSupport) eventPredicateWithCalendars:]
+[NSPredicate(CalendarSupport) eventPredicateWithStartDate:endDate:calendars:]
+[NSPredicate(CalendarSupport) eventPredicateWithStartDate:endDate:sharedUID:calendars:]
+[NSPredicate(CalendarSupport) eventPredicateWithSearchTerm:property:calendars:]
+[NSPredicate(CalendarSupport) eventPredicateWithURL:calendar:]
+[NSPredicate(CalendarSupport) taskPredicateWithAlarm:calendars:]
+[NSPredicate(CalendarSupport) taskPredicateWithSearchTerm:property:calendars:]
+[NSPredicate(CalendarSupport) taskPredicateWithCalendars:]
+[NSPredicate(CalendarSupport) calendarPredicateWithGroups:]
___copy_helper_block_
___destroy_helper_block_
-[CalEventOccurrence isEqualToOccurrence:]
-[CalEventOccurrence compare:]
-[CalEventOccurrence compareTimeEndingRecently:]
-[CalEventOccurrence _entityKeyForKey:]
-[CalEventOccurrence _entityValueForValue:]
-[CalEventOccurrence _entityPropertyForChangedKey:]
-[CalEventOccurrence commitEditing]
-[CalEventOccurrence commitEditingWithDelegate:]
-[CalEventOccurrence commitWithDelegate:]
-[CalEventOccurrence commitWithDelegate:commitWholeRecurrence:]
-[CalEventOccurrence deleteWithDelegate:]
-[CalEventOccurrence discardEditing]
-[CalEventOccurrence associatedWithChildContext]
-[CalEventOccurrence setLocation:]
-[CalEventOccurrence setIsAllDay:]
-[CalEventOccurrence repository]
-[CalEventOccurrence setUrl:]
-[CalEventOccurrence isDetachedEntity]
-[CalEventOccurrence hasDetachedOccurrences]
-[CalEventOccurrence ableToMoveToCalendar:]
-[CalEventOccurrence supportsAttachments]
-[CalEventOccurrence removePropertyForKey:]
-[CalEventOccurrence committedPropertyForKey:]
-[CalEventOccurrence recurrenceDate]
-[CalEventOccurrence setRecurrenceDate:]
-[CalEventOccurrence needsRebin]
-[CalEventOccurrence setNeedsRebin:]
-[CalEventOccurrenceCache initWithStartDate:duration:calendars:inManagedObjectContext:isMainWindowCache:]
-[CalEventOccurrenceCache setStartDate:endDate:]
-[CalEventOccurrenceCache calendarStoreReset:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___50-[CalEventOccurrenceCache requestRange:fromReset:]_block_invoke242
___copy_helper_block_
___destroy_helper_block_
___50-[CalEventOccurrenceCache requestRange:fromReset:]_block_invoke276
___copy_helper_block_337
___destroy_helper_block_338
___copy_helper_block_340
___destroy_helper_block_341
-[CalEventOccurrenceCache rebinForTimeZoneString:]
-[CalEventOccurrenceCache everFilledCache]
+[CalEventOccurrenceCache fetchForEventsBetweenStartDate:endDate:usingTimeZone:localUIDs:excludingLocalUIDs:inCalendars:managedObjectContext:]
+[CalEventOccurrenceCache eventsBetweenStartDate:endDate:usingTimeZone:localUIDs:excludingLocalUIDs:inCalendars:prefetchAttendees:managedObjectContext:]
+[CalEventOccurrenceCache eventsBetweenStartDate:endDate:localUIDs:excludingLocalUIDs:inCalendars:prefetchAttendees:managedObjectContext:]
+[CalEventOccurrenceCache occurrencesBetweenStartDate:endDate:onCalendars:prefetchAttendees:inManagedObjectContext:sortWithSelector:]
-[CalEventOccurrenceCache _setOfIdentifiersToReplaceForIdentifiers:]
___copy_helper_block_472
___destroy_helper_block_473
___57-[CalEventOccurrenceCache managedObjectContextDidChange:]_block_invoke484
___copy_helper_block_489
___destroy_helper_block_490
___57-[CalEventOccurrenceCache managedObjectContextDidChange:]_block_invoke495
___copy_helper_block_496
___destroy_helper_block_497
___copy_helper_block_499
___destroy_helper_block_500
___57-[CalEventOccurrenceCache managedObjectContextDidChange:]_block_invoke503
___copy_helper_block_504
___destroy_helper_block_505
-[CalEventOccurrenceCache description]
-[CalEventOccurrenceCache dealloc]
-[CalEventOccurrenceCache finalize]
+[CalEventOccurrenceCache setWeeksNotPrunedBehindDirectionOfRangeChange:]
-[CalEventOccurrenceCache lowWaterWeeksBuffer]
+[CalEventOccurrenceCache setLowWaterWeeksBuffer:]
-[CalEventOccurrenceCache highWaterWeeksBuffer]
+[CalEventOccurrenceCache setHighWaterWeeksBuffer:]
-[CalEventOccurrenceCache foregroundResetCompleted]
-[CalEventOccurrenceCache setForegroundResetCompleted:]
-[CalEventOccurrenceCache isMainWindowCache]
-[CalEventOccurrenceCache setIsMainWindowCache:]
+[CalAlertChangeMonitor initialize]
___35+[CalAlertChangeMonitor initialize]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalAlertChangeMonitor completelyDisableAlertsInThisProcess]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_53
___destroy_helper_block_54
-[CalAlertChangeMonitor _managedTask:matchesWidgetPredicateForDate:]
___54-[CalAlertChangeMonitor performFindAndScheduleAlarms:]_block_invoke
___copy_helper_block_192
___destroy_helper_block_193
___47-[CalAlertChangeMonitor performScheduleAlarms:]_block_invoke
___copy_helper_block_199
___destroy_helper_block_200
___48-[CalAlertChangeMonitor performDeliverMessages:]_block_invoke
___copy_helper_block_202
___destroy_helper_block_203
-[CalAlertChangeMonitor performBookmarkResolution:]
___51-[CalAlertChangeMonitor performBookmarkResolution:]_block_invoke
___copy_helper_block_205
___destroy_helper_block_206
___45-[CalAlertChangeMonitor performDeleteAlarms:]_block_invoke
___copy_helper_block_208
___destroy_helper_block_209
___47-[CalAlertChangeMonitor performDeleteMessages:]_block_invoke
___copy_helper_block_211
___destroy_helper_block_212
-[CalAlertChangeMonitor performStartRemindersNotificationCenterWidget]
___70-[CalAlertChangeMonitor performStartRemindersNotificationCenterWidget]_block_invoke
+[CalSpotlight mdQueryStringForIndexSearchElement:]
+[CalSpotlight managedCalendarItemsMatchingMDQueryString:calendars:context:]
+[CalSpotlight newCalMDQueryForMDQueryString:calendars:]
+[CalSpotlight managedCalendarItemResultsForQuery:context:]
+[CalSpotlight managedCalendarItemResultsForQuery:startIndex:context:]
+[CalSpotlight managedCalendarItemResultsForCalMDQuery:startIndex:endIndex:context:]
-[CalMDQuery dealloc]
-[CalMDQuery query]
-[CalMDQuery setQuery:]
-[CalMDQuery scope]
-[CalMDQuery setScope:]
+[NSString(CalendarStoreMDQuerySupport) mdEventQueryStringWithSearchString:property:]
+[NSString(CalendarStoreMDQuerySupport) mdTaskQueryStringWithSearchString:property:]
+[CalManagedStore calendarChangesFile]
+[CalManagedStore restoreSubscriptionInfoWithDictionary:inManagedObjectContext:]
+[CalManagedStore restorePublicationWithDictionary:inManagedObjectContext:]
+[CalManagedStore _throwContextSaveExceptionWithError:]
+[CalManagedStore restoreDefaultAlarmSetAtPath:inManagedObjectContext:]
+[CalManagedStore _deleteCalendarAtPath:]
+[CalManagedStore _notifyOnImportTotalCalendars:completedCalendars:partialCalendarTotalItems:completedItems:]
+[CalManagedStore restoreCalendarAtPath:calendarKeysForDupeDeletion:inGroup:inManagedObjectContext:inBatches:]
___110+[CalManagedStore restoreCalendarAtPath:calendarKeysForDupeDeletion:inGroup:inManagedObjectContext:inBatches:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalManagedStore restoreCalendarAtPath:calendarKeysForDupeDeletion:inGroup:progress:total:inManagedObjectContext:inBatches:]
+[CalManagedStore _enabledWeightForAccount:]
+[CalManagedStore _handleDuplicateAccounts:forInsertedAccount:existingAccounts:context:path:]
+[CalManagedStore restoreCalDAVPrincipalAtPath:accounts:progress:total:inManagedObjectContext:inBatches:]
+[CalManagedStore restoreExchangePrincipalAtPath:accounts:progress:total:inManagedObjectContext:]
+[CalManagedStore restoreIMAPAtPath:progress:total:inManagedObjectContext:]
+[CalManagedStore hasTruthFiles]
+[CalManagedStore restorePersistentStoreInPSC:error:]
+[CalManagedStore contextWithPSC:]
+[CalManagedStore restorePersistentStoreInPSC:inBatches:error:]
+[CalManagedStore(CalendarSourceIPI) entitiesFromManagedCalendarItems:]
+[CalManagedStore(CalendarSourceIPI) _nonRecurringPredicateFloating:useTravelTime:forReminders:]
+[CalManagedStore(CalendarSourceIPI) _recurringPredicateFloating:useTravelTime:forReminders:]
+[CalManagedStore(CalendarSourceIPI) _predicateHelperForStartDate:endDate:calendars:exceptUID:forReminders:useTravelTime:]
+[CalManagedStore(CalendarSourceIPI) predicateForAlarmsWithAbsoluteTriggerInRange:endDate:orRelativeTriggerLargerThan:includingLocationBased:]
+[CalManagedStore(CalendarSourceIPI) eventsBetweenStartDate:endDate:calendars:exceptUID:excludeDetached:includeTravelTime:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) alarmsWithTriggersBetweenStartDate:endDate:calendars:includeLocationBased:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) eventsWithAlarmsBetweenStartDate:endDate:calendars:includeLocationBased:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) tasksWithAlarmsBetweenStartDate:endDate:calendars:includeLocationBased:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) fetchEntitiesWithPrefetchedAlarmsForEntityName:inCalendars:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) fetchEntitiesWithPrefetchedAlarmsForEntityName:withPredicate:inCalendars:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) managedCalendarItemsMatchingSearchElement:calendars:inManagedObjectContext:]
+[CalManagedStore(CalendarSourceIPI) _unquarantineFileIfNecessary:]
+[CalManagedStore(TruthFile) masterForTruthFile:occurrenceDate:inContext:]
+[CalManagedStore(TruthFile) masterForTruthFile:occurrenceCALDate:inContext:]
-[CalTruthFileOperation finalize]
-[CalTruthFileStore finalize]
-[CalTruthFileStore dealloc]
+[CalTruthFileStore _disableForUnitTesting]
+[CalTruthFileStore _enableForUnitTesting]
___copy_helper_block_
___destroy_helper_block_
-[CalDAVChangeRequestsConsumer dealloc]
___copy_helper_block_
___destroy_helper_block_
+[CalDAVChangeRequestsConsumer _iCalendarExportOptionsForCalendar:]
+[CalDAVChangeRequestsConsumer _iCalendarWriteToServerOptionsForCalendar:]
-[CalDAVChangeRequestsConsumer makeEntityRemoveOperation:forSource:]
-[CalDAVChangeRequestsConsumer makeEventScheduleOperation:forSource:forSession:]
-[CalDAVChangeRequestsConsumer makeAddCalendarOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeRemoveCalendarOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeSplitCalendarItemTypesOperation:forSession:forSource:]
-[CalDAVChangeRequestsConsumer makeRemovePropertyCalendarOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeSetPropertyCalendarOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeSetPropertyCalendarHomeOperation:forSession:]
-[CalDAVChangeRequestsConsumer createOrUpdateShareeOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeChangeAffectingAvailabilityCalendarOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeChangePublishStatusOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeDeleteDropBoxOperation:forSource:]
-[CalDAVChangeRequestsConsumer makeUploadDropBoxFile:forSource:]
-[CalDAVChangeRequestsConsumer makeDownloadDropBoxFile:forSource:]
-[CalDAVChangeRequestsConsumer makeDeleteDropBoxFile:forSource:]
-[CalDAVChangeRequestsConsumer makeDeleteInboxFileOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeDeleteNotificationCollectionFileOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeExpandGroupOperation:forSession:]
-[CalDAVChangeRequestsConsumer makeMoveEntityOperation:forSession:source:]
-[CalDAVChangeRequestsConsumer makeSharedCalendarInvitationResponseOperation:forSession:]
-[CalDAVChangeRequestsConsumer _logErrorForNilEntityWithChangeRequest:source:calendar:item:]
-[CalDAVChangeRequestsConsumer managedObjectContextDidSave:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertChangeCalendarDescriptionRequestInManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertChangeFreeBusyCalendarRequestInManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertChangeCalendarPublishStateInManagedObjectContext:]
-[CalManagedCalDAVCalendar(ChangeRequestProducer) insertSplitDualTypeRequestInManagedObjectContext:]
-[CalManagedSubscriptionInfo(ChangeRequestProducer) processForType:inManagedObjectContext:]
-[CalManagedDefaultAlarmSet(ChangeRequestProducer) processUpdatedInManagedObjectContext:]
-[CalManagedDefaultAlarmSet(ChangeRequestProducer) insertChangeCalendarDefaultAlarmRequestAllDay:forCalendar:inManagedObjectContext:]
-[CalManagedDefaultAlarmSet(ChangeRequestProducer) insertChangeCalendarHomeDefaultAlarmRequestAllDay:forPrincipal:inManagedObjectContext:]
-[CalDAVChangeRequestsProducer dealloc]
___copy_helper_block_
___destroy_helper_block_
-[CalChangeMonitor threadChangeTracker]
-[CalChangeMonitor changeTracker]
+[CalChangeMonitor initialize]
-[CalChangeMonitor init]
-[CalChangeMonitor dealloc]
-[CalChangeMonitor forceSyncByAppNotification:]
___47-[CalChangeMonitor forceSyncByAppNotification:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalChangeMonitor invalideTimeOnMainThread]
-[CalChangeMonitor scheduleTimerOnMainThread:]
-[CalChangeMonitor disableSyncingAndChangeTracking]
-[CalChangeMonitor _syncingWithOtherClients]
-[CalChangeMonitor trackingEnabled]
-[CalChangeMonitor syncEnabled]
-[CalChangeMonitor databaseReset]
-[CalChangeMonitor setDatabaseReset:]
+[CalChangeMonitor defaultMonitor]
-[CalChangeMonitor syncToolPath]
-[CalChangeMonitor cancelSyncing]
-[CalChangeMonitor beginningDatabaseReset]
-[CalChangeMonitor beginningDatabaseReset:]
-[CalChangeMonitor beginningDatabaseMigration]
-[CalChangeMonitor _doSyncProcessDied:]
-[CalChangeMonitor launchSyncWithArgs:shouldDelay:]
___51-[CalChangeMonitor launchSyncWithArgs:shouldDelay:]_block_invoke
___copy_helper_block_163
___destroy_helper_block_164
___51-[CalChangeMonitor launchSyncWithArgs:shouldDelay:]_block_invoke166
___copy_helper_block_192
___destroy_helper_block_193
-[CalChangeMonitor periodicSync]
-[CalChangeMonitor _agentSyncWithArgs:shouldDelay:]
___51-[CalChangeMonitor _agentSyncWithArgs:shouldDelay:]_block_invoke
___copy_helper_block_202
___destroy_helper_block_203
-[CalChangeMonitor doSlowSync]
-[CalChangeMonitor setiCalSyncRefreshMode]
-[CalChangeMonitor finishedDatabaseReset]
-[CalChangeMonitor finishedDatabaseMigration:]
-[CalChangeMonitor syncArgs]
-[CalChangeMonitor syncNowWithRefresh:]
-[CalChangeMonitor checkAgainstCommittedValues:]
-[CalChangeMonitor changeIsOfInterest:trueUpdates:]
-[CalChangeMonitor managedObjectContextWillSave:]
-[CalChangeMonitor managedObjectContextDidSave:]
___48-[CalChangeMonitor managedObjectContextDidSave:]_block_invoke
___copy_helper_block_324
___destroy_helper_block_325
-[CalChangeMonitor syncTask]
-[CalChangeMonitor setSyncTask:]
-[CalChangeMonitor calendarCacheURL]
-[CalDAVOperationQueue initWithSessionID:]
-[CalDAVOperationQueue insertOperation:]
-[CalDAVOperationQueue reorderFailedOperation:]
-[CalDAVOperationQueue removeOperation:]
-[CalDAVOperationQueue removeAllOperations]
-[CalDAVOperationQueue removeOperation:removeEntities:]
-[CalDAVOperationQueue tryOperationAgain:]
-[CalDAVOperationQueue removeAndRevertOperation:]
-[CalDAVOperationQueue removeOperationAndRefresh:]
-[CalDAVOperationQueue operations]
-[CalDAVOperationQueue failedOperations]
-[CalDAVOperationQueue _addBackFailedOperations]
-[CalDAVOperationQueue kick]
-[CalDAVOperationQueue isPendingRetry]
-[CalDAVOperationQueue removeFromQueue:]
-[CalDAVOperationQueue removeDependentOperationsFromQueue:]
-[CalDAVOperationQueue transferDependencyGraphOfOperation:toOperation:]
-[CalDAVOperationQueue hasPendingOperationFor:]
-[CalDAVOperationQueue threadSafeQueueDescription]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation initWithChangeRequest:forSession:]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation dealloc]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation performOperation]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation useCoreDAV]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation _originalManagedMessageInNewContext]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation taskGroup:didFinishWithError:]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation taskGroup]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation setTaskGroup:]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation invitation]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation setInvitation:]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation calendarHomeURL]
-[CalDAVSharedCalendarInvitationResponseQueueableOperation setCalendarHomeURL:]
-[CalDAVDeleteEntityQueueableOperation initWithChangeRequest:calendarURL:fromSource:]
-[CalDAVDeleteEntityQueueableOperation dealloc]
-[CalDAVDeleteEntityQueueableOperation readableDescription]
-[CalDAVDeleteEntityQueueableOperation performOperation:]
-[CalDAVDeleteEntityQueueableOperation deleteTask:completedWithError:]
-[CalDAVDeleteEntityQueueableOperation enqueue]
-[CalDAVDeleteEntityQueueableOperation eTag]
-[CalDAVDeleteEntityQueueableOperation setETag:]
-[CalDAVDeleteEntityQueueableOperation scheduleTag]
-[CalDAVDeleteEntityQueueableOperation setScheduleTag:]
-[CalDAVEntityQueueableOperation initWithChangeRequest:andSession:]
-[CalDAVEntityQueueableOperation initWithChangeRequest:andSource:]
-[CalDAVEntityQueueableOperation forceEntityToServer]
-[CalDAVEntityQueueableOperation forceEntityFromServer]
-[CalDAVEntityQueueableOperation forceEntityFromServerAndClearEventFromQueue:]
-[CalDAVEntityQueueableOperation forceEntityFromServerAndClearEventFromQueue:withContext:]
-[CalDAVEntityQueueableOperation getTask:data:error:]
-[CalDAVEntityQueueableOperation _cleanUpOperationAfterForceWithContext:]
-[CalDAVEntityQueueableOperation extraUserInfoForRebuiltError]
-[CalDAVEntityQueueableOperation setError:]
-[CalDAVEntityQueueableOperation setError:withResponseStatus:forItem:]
-[CalDAVEntityQueueableOperation queueAttachmentOperations:event:]
-[CalDAVEntityQueueableOperation calendarTitle]
-[CalDAVEntityQueueableOperation principalTitle]
-[CalDAVEntityQueueableOperation entitySharedUID]
-[CalDAVEntityQueueableOperation(Private) performOperation:]
-[CalDAVEntityQueueableOperation(Private) updateAttachmentUrlIfDirectory:context:event:]
-[CalDAVPersistentQueueableOperation initWithChangeRequest:andSession:]
-[CalDAVPersistentQueueableOperation changeRequestID]
-[CalDAVPersistentQueueableOperation changeRequest]
-[CalDAVPersistentQueueableOperation associatedChangeRequestInContext:]
-[CalDAVPersistentQueueableOperation extraUserInfoForRebuiltError]
-[CalDAVQueueableOperation initWithSessionID:]
-[CalDAVQueueableOperation copyWithZone:]
-[CalDAVQueueableOperation _updateAccountInfoProviderIfNecessary]
___copy_helper_block_
___destroy_helper_block_
-[CalDAVQueueableOperation performOperation]
-[CalDAVQueueableOperation associatedChangeRequestInContext:]
-[CalDAVQueueableOperation sessionID]
-[CalDAVQueueableOperation session]
-[CalDAVQueueableOperation extraUserInfoForRebuiltError]
-[CalDAVQueueableOperation rebuildError:]
-[CalDAVQueueableOperation isTransientError:]
-[CalDAVQueueableOperation retryTimerFired:]
-[CalDAVQueueableOperation scheduleRetry:]
___42-[CalDAVQueueableOperation scheduleRetry:]_block_invoke
___copy_helper_block_128
___destroy_helper_block_129
-[CalDAVQueueableOperation scheduleRetryMainThread:]
-[CalDAVQueueableOperation suppressErrorDialog]
-[CalDAVQueueableOperation setError:]
-[CalDAVQueueableOperation removeAssociatedEntities]
-[CalDAVQueueableOperation readableDescription]
-[CalDAVQueueableOperation isPendingRetry]
-[CalDAVQueueableOperation maxRetries]
-[CalDAVQueueableOperation handleRemovalCleanup]
-[CalDAVQueueableOperation _shouldCoalesceWithOperations:]
-[CalDAVQueueableOperation accountInfoProvider]
-[CalDAVQueueableOperation setAccountInfoProvider:]
-[CalDAVRevertEntityQueueableOperation initWithPreviousOperation:]
-[CalDAVRevertEntityQueueableOperation dealloc]
-[CalDAVRevertEntityQueueableOperation readableDescription]
-[CalDAVRevertEntityQueueableOperation performOperation]
-[CalDAVRevertEntityQueueableOperation getTask:data:error:]
-[CalDAVRevertEntityQueueableOperation enqueue]
-[CalDAVRevertEntityQueueableOperation entityLocalUID]
-[CalDAVRevertEntityQueueableOperation entitySharedUID]
-[CalDAVRevertEntityQueueableOperation serverFilename]
-[CalDAVWriteEntityQueueableOperation initWithChangeRequest:eTag:scheduleTag:icsData:overwrite:objectID:calendarURL:fromSource:]
-[CalDAVWriteEntityQueueableOperation readableDescription]
-[CalDAVWriteEntityQueueableOperation _clearTagsForItem:delete:]
-[CalDAVWriteEntityQueueableOperation _canFilterOutTimezonesWithCalendar:]
-[CalDAVWriteEntityQueueableOperation _permanentErrorForStatus:]
-[CalDAVWriteEntityQueueableOperation removeAssociatedEntities]
-[CalDAVWriteEntityQueueableOperation calendarURL]
-[CalDAVWriteEntityQueueableOperation _updateInFlightTagsInContext:]
-[CalDAVWriteEntityQueueableOperation eTag]
-[CalDAVWriteEntityQueueableOperation setETag:]
-[CalDAVWriteEntityQueueableOperation scheduleTag]
-[CalDAVWriteEntityQueueableOperation setScheduleTag:]
-[CalDAVWriteEntityQueueableOperation forceSerializeTimezones]
-[CalDAVWriteEntityQueueableOperation setForceSerializeTimezones:]
-[CalDAVDeleteDropBoxFileQueueableOperation initWithChangeRequest:attachmentName:entity:fromSource:]
-[CalDAVDeleteDropBoxFileQueueableOperation dealloc]
-[CalDAVDeleteDropBoxFileQueueableOperation masterEntity]
-[CalDAVDeleteDropBoxFileQueueableOperation performOperation]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___61-[CalDAVDeleteDropBoxFileQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalEventOccurrenceCacheData description]
___copy_helper_block_
___destroy_helper_block_
-[CalEventOccurrenceCacheData rebinAllWithTimeZoneString:]
-[CalEventOccurrenceCacheData _validateIsCompletelyEmpty]
-[CalEventOccurrenceCacheData setTimeZoneString:]
-[CalEventOccurrenceCacheData setCalendarObjectIDs:]
-[CalEventOccurrenceCacheData setBinnedDates:]
-[CalDAVDeleteDropBoxQueueableOperation initWithChangeRequest:dropBoxUri:fromSource:]
-[CalDAVDeleteDropBoxQueueableOperation dealloc]
-[CalDAVDeleteDropBoxQueueableOperation performOperation]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___57-[CalDAVDeleteDropBoxQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVDeleteInboxFileQueueableOperation initWithChangeRequest:inboxPath:filename:forSession:]
-[CalDAVDeleteInboxFileQueueableOperation handleRemovalCleanup]
-[CalDAVDownloadDropBoxFileQueueableOperation initWithChangeRequest:attachmentName:etag:entity:dropBoxURL:fromSource:]
-[CalDAVDownloadDropBoxFileQueueableOperation dealloc]
-[CalDAVDownloadDropBoxFileQueueableOperation masterEntity]
-[CalDAVDownloadDropBoxFileQueueableOperation extraUserInfoForRebuiltError]
-[CalDAVDownloadDropBoxFileQueueableOperation setQuarantineProperties]
-[CalDAVDownloadDropBoxFileQueueableOperation _managedAttachmentByFilename:inContext:]
-[CalDAVDownloadDropBoxFileQueueableOperation _processFileWithContentType:etag:]
-[CalDAVDownloadDropBoxFileQueueableOperation _handleDownloadResponseHeaders:url:error:]
-[CalDAVDownloadDropBoxFileQueueableOperation _addURLToTry:]
-[CalDAVDownloadDropBoxFileQueueableOperation _popNextURLToTry]
-[CalDAVDownloadDropBoxFileQueueableOperation _doFetchAtNextURL]
___64-[CalDAVDownloadDropBoxFileQueueableOperation _doFetchAtNextURL]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVDownloadDropBoxFileQueueableOperation performOperation]
-[CalDAVDownloadDropBoxFileQueueableOperation destFileHandle]
-[CalDAVDownloadDropBoxFileQueueableOperation setDestFileHandle:]
+[CalDAVRemovePropertyQueueableOperation initialize]
-[CalDAVRemovePropertyQueueableOperation initWithChangeRequest:session:URI:property:]
-[CalDAVRemovePropertyQueueableOperation dealloc]
-[CalDAVRemovePropertyQueueableOperation performOperation]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___58-[CalDAVRemovePropertyQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVRemovePropertyQueueableOperation url]
-[CalDAVRemovePropertyQueueableOperation setUrl:]
-[CalDAVRemovePropertyQueueableOperation propertyToRemove]
-[CalDAVRemovePropertyQueueableOperation setPropertyToRemove:]
-[CalDAVScanResponse dealloc]
-[CalDAVScanResponse initWithFileURL:etag:]
-[CalDAVScanResponse fileURL]
-[CalDAVScanResponse setFileURL:]
-[CalDAVScanResponse etag]
-[CalDAVScanResponse setEtag:]
-[CalDAVScanDropBoxQueueableOperation initWithEvent:]
-[CalDAVScanDropBoxQueueableOperation dealloc]
-[CalDAVScanDropBoxQueueableOperation _cachedETagForFilename:sharedUID:]
-[CalDAVScanDropBoxQueueableOperation removeUnreferencedAttachmentsWithContents:inManagedObjectContext:]
___104-[CalDAVScanDropBoxQueueableOperation removeUnreferencedAttachmentsWithContents:inManagedObjectContext:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVScanDropBoxQueueableOperation shouldIgnoreErrorForEvent:]
-[CalDAVScanDropBoxQueueableOperation updateAttachmentsWithResponses:freeBytes:]
___80-[CalDAVScanDropBoxQueueableOperation updateAttachmentsWithResponses:freeBytes:]_block_invoke
___copy_helper_block_135
___destroy_helper_block_136
-[CalDAVScanDropBoxQueueableOperation _dieWithError:]
-[CalDAVScanDropBoxQueueableOperation scanDropBoxOnAlternateServer:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___68-[CalDAVScanDropBoxQueueableOperation scanDropBoxOnAlternateServer:]_block_invoke
___copy_helper_block_217
___destroy_helper_block_218
-[CalDAVScanDropBoxQueueableOperation _updateDropboxBaseURLIfURLOnDifferentHost:]
-[CalDAVScanDropBoxQueueableOperation handleResultsOfDropBoxURLLookup:]
-[CalDAVScanDropBoxQueueableOperation performOperation]
___55-[CalDAVScanDropBoxQueueableOperation performOperation]_block_invoke
___copy_helper_block_288
___destroy_helper_block_289
-[CalDAVUploadDropBoxFileQueueableOperation initWithChangeRequest:attachmentName:entity:fromSource:]
-[CalDAVUploadDropBoxFileQueueableOperation dealloc]
-[CalDAVUploadDropBoxFileQueueableOperation _managedItem]
-[CalDAVUploadDropBoxFileQueueableOperation _buildCustomErrorFromError:withStatusCode:dataLength:]
-[CalDAVUploadDropBoxFileQueueableOperation _cacheEtag:filename:]
-[CalDAVUploadDropBoxFileQueueableOperation _serverURLForPath:]
-[CalDAVUploadDropBoxFileQueueableOperation _updateAttachments]
___63-[CalDAVUploadDropBoxFileQueueableOperation _updateAttachments]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVUploadDropBoxFileQueueableOperation _fileNamesToUpload]
-[CalDAVUploadDropBoxFileQueueableOperation _addDetailsForAttachmentWithFilename:]
-[CalDAVUploadDropBoxFileQueueableOperation taskGroup:didFinishWithError:]
___74-[CalDAVUploadDropBoxFileQueueableOperation taskGroup:didFinishWithError:]_block_invoke
___copy_helper_block_293
___destroy_helper_block_294
-[CalDAVUploadDropBoxFileQueueableOperation performOperation]
-[CalDAVUploadDropBoxFileQueueableOperation abortOperation]
-[CalDAVUploadDropBoxFileQueueableOperation readableDescription]
-[CalDAVUploadDropBoxFileQueueableOperation dropBoxPath]
-[CalDAVUploadDropBoxFileQueueableOperation setDropBoxPath:]
-[CalDAVUploadDropBoxFileQueueableOperation attachmentName]
-[CalDAVUploadDropBoxFileQueueableOperation setAttachmentName:]
-[CalDAVUploadDropBoxFileQueueableOperation masterEntity]
-[CalDAVUploadDropBoxFileQueueableOperation setMasterEntity:]
-[CalDAVUploadDropBoxFileQueueableOperation attendeePrincipalURLs]
-[CalDAVUploadDropBoxFileQueueableOperation setAttendeePrincipalURLs:]
-[CalDAVUploadDropBoxFileQueueableOperation attachments]
-[CalDAVUploadDropBoxFileQueueableOperation setAttachments:]
-[CalDAVUploadDropBoxFileQueueableOperation contentTypes]
-[CalDAVUploadDropBoxFileQueueableOperation setContentTypes:]
-[CalDAVAddCalendarQueueableOperation initWithChangeRequest:session:isAffectingAvailability:isAutoscheduleSupported:]
+[CalDAVAddCalendarQueueableOperation mkcalendarPropertiesWithDisplayName:color:symbolicColorName:order:notes:timeZone:shouldSetTransparency:isAffectingAvailability:isAutoscheduleSupported:fallbackProperties:]
___copy_helper_block_
___destroy_helper_block_
-[CalDAVAddCalendarQueueableOperation _createReadFreeBusyACE]
-[CalDAVAddCalendarQueueableOperation _updateACL]
___49-[CalDAVAddCalendarQueueableOperation _updateACL]_block_invoke
-[CalDAVAddCalendarQueueableOperation _updateFreeBusySet]
___57-[CalDAVAddCalendarQueueableOperation _updateFreeBusySet]_block_invoke
___copy_helper_block_173
___destroy_helper_block_174
-[CalDAVAddCalendarQueueableOperation taskGroup:didFinishWithError:]
-[CalDAVAddCalendarQueueableOperation fallbackProperties]
-[CalDAVAddCalendarQueueableOperation setFallbackProperties:]
-[CalDAVAddCalendarQueueableOperation inboxURI]
-[CalDAVAddSubscriptionCalendarQueueableOperation initWithChangeRequest:andSession:]
+[CalDAVAddSubscriptionCalendarQueueableOperation subscribedCalendarPropertiesWithDisplayName:color:symbolicColorName:order:notes:subscriptionURLString:refreshInterval:hasAlarmFilter:hasAttachmentFilter:hasTaskFilter:locationCode:languageCode:isAutoProvisioned:fallbackProperties:]
-[CalDAVAddSubscriptionCalendarQueueableOperation dealloc]
-[CalDAVAddSubscriptionCalendarQueueableOperation performOperation]
___67-[CalDAVAddSubscriptionCalendarQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVAddSubscriptionCalendarQueueableOperation calendarURL]
-[CalDAVAddSubscriptionCalendarQueueableOperation setCalendarURL:]
-[CalDAVAddSubscriptionCalendarQueueableOperation propertiesToSet]
-[CalDAVAddSubscriptionCalendarQueueableOperation setPropertiesToSet:]
-[CalDAVAddSubscriptionCalendarQueueableOperation fallbackProperties]
-[CalDAVAddSubscriptionCalendarQueueableOperation setFallbackProperties:]
-[CalDAVChangeCalendarAffectsAvailabilityQueueableOperation initWithChangeRequest:session:URI:value:inboxURI:]
-[CalDAVChangeCalendarAffectsAvailabilityQueueableOperation performOperation]
-[CalDAVChangeCalendarAffectsAvailabilityQueueableOperation taskGroup:didFinishWithError:]
-[CalDAVChangeCalendarAffectsAvailabilityQueueableOperation dealloc]
-[CalDAVMoveEntityQueueableOperation initWithChangeRequest:forSession:source:eTag:scheduleTag:icsData:objectID:]
-[CalDAVMoveEntityQueueableOperation dealloc]
-[CalDAVMoveEntityQueueableOperation changeRequest]
-[CalDAVMoveEntityQueueableOperation calendarItemForChangeRequest:]
-[CalDAVMoveEntityQueueableOperation calendarItemForChangeRequest:inContext:]
-[CalDAVMoveEntityQueueableOperation performOperation]
___54-[CalDAVMoveEntityQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVMoveEntityQueueableOperation moveTaskCompletedWithTaskGroup:]
-[CalDAVMoveEntityQueueableOperation propFindTask:parsedResponses:error:]
-[CalDAVMoveEntityQueueableOperation finishMoveWithEtag:scheduleTag:]
-[CalDAVMoveEntityQueueableOperation forceEntityFromServerAndClearEventFromQueue:]
-[CalDAVMoveEntityQueueableOperation forceEntityToServer]
-[CalDAVMoveEntityQueueableOperation readableDescription]
-[CalDAVMoveEntityQueueableOperation configureOperationDependencies]
-[CalDAVMoveEntityQueueableOperation finishOperation]
-[CalDAVMoveEntityQueueableOperation _updateInFlightTagsInContext:]
-[CalDAVMoveEntityQueueableOperation etag]
-[CalDAVMoveEntityQueueableOperation setEtag:]
-[CalDAVMoveEntityQueueableOperation scheduleTag]
-[CalDAVMoveEntityQueueableOperation setScheduleTag:]
-[CalDAVMoveEntityQueueableOperation filename]
-[CalDAVMoveEntityQueueableOperation setFilename:]
-[CalDAVMoveEntityQueueableOperation sourceCalendarUID]
-[CalDAVMoveEntityQueueableOperation setSourceCalendarUID:]
-[CalDAVMoveEntityQueueableOperation destinationCalendarUID]
-[CalDAVMoveEntityQueueableOperation setDestinationCalendarUID:]
-[CalDAVRemoveCalendarQueueableOperation initWithChangeRequest:session:URI:inboxURI:]
-[CalDAVRemoveCalendarQueueableOperation setError:]
-[CalDAVRemoveCalendarQueueableOperation updateFreeBusySet]
-[CalDAVRemoveCalendarQueueableOperation taskGroup:didFinishWithError:]
-[CalDAVRemoveCalendarQueueableOperation inboxURI]
-[CalDAVScheduleEventQueueableOperation initWithChangeRequest:entity:meAddress:recipients:scheduleData:outboxPath:fromSource:session:etag:serverFilename:]
-[CalDAVScheduleEventQueueableOperation readableDescription]
-[CalDAVScheduleEventQueueableOperation dealloc]
-[CalDAVScheduleEventQueueableOperation performOperation]
-[CalDAVScheduleEventQueueableOperation _checkHeadETag:]
-[CalDAVScheduleEventQueueableOperation _sendMessageForInvalidAttendees:]
-[CalDAVScheduleEventQueueableOperation _setErrorWithFakeStatus:]
-[CalDAVScheduleEventQueueableOperation task:didFinishWithError:]
-[CalDAVScheduleEventQueueableOperation performSchedule]
-[CalDAVScheduleEventQueueableOperation configureOperationDependencies]
-[CalDAVSetPropertyQueueableOperation initWithChangeRequest:session:URI:property:value:valueType:]
-[CalDAVSetPropertyQueueableOperation readableDescription]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_
___destroy_helper_block_
-[CalDAVSetPropertyQueueableOperation resolveError:forAccountInfoProvider:]
-[CalDAVAccountRefreshQueueableOperation initWithSession:takePowerAssertion:]
-[CalDAVAccountRefreshQueueableOperation finalize]
-[CalDAVAccountRefreshQueueableOperation readableDescription]
___70-[CalDAVAccountRefreshQueueableOperation refreshWithExceptionHandling]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVAccountRefreshQueueableOperation refreshHadChanges]
-[CalDAVAccountRefreshQueueableOperation suppressErrorDialog]
-[CalDAVAccountRefreshQueueableOperation shouldTakePowerAssertion]
-[CalDAVAccountRefreshQueueableOperation setShouldTakePowerAssertion:]
-[CalDAVAccountRefreshQueueableOperation notifyOnChanges]
-[CalDAVAccountRefreshQueueableOperation setNotifyOnChanges:]
-[CalDAVAccountRefreshQueueableOperation fromFullRefresh]
___58-[CalDAVAccountRefreshQueueableOperation(Private) refresh]_block_invoke
___copy_helper_block_266
___destroy_helper_block_267
___58-[CalDAVAccountRefreshQueueableOperation(Private) refresh]_block_invoke280
-[CalDAVAccountRefreshQueueableOperation(Private) rectifyPrincipalPathForPrincipal:inManagedObjectContext:error:]
___113-[CalDAVAccountRefreshQueueableOperation(Private) rectifyPrincipalPathForPrincipal:inManagedObjectContext:error:]_block_invoke
___copy_helper_block_299
___destroy_helper_block_300
___113-[CalDAVAccountRefreshQueueableOperation(Private) rectifyPrincipalPathForPrincipal:inManagedObjectContext:error:]_block_invoke303
___copy_helper_block_341
___destroy_helper_block_342
-[CalDAVAccountRefreshQueueableOperation(Private) updatePrincipal:newPrincipalPath:]
-[CalDAVAccountRefreshQueueableOperation(Private) _propPatchWithNoErrorHandlingStringValue:nameSpace:name:accountInfoProvider:url:]
-[CalDAVAccountRefreshQueueableOperation(Private) _refreshCalendarsForPrincipalCoreDAV:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) _syncReportForPrincipalCoreDAV:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) _regularRefreshCalendarsForPrincipalCoreDAV:isDeepRefresh:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) updatePrincipal:forCalendarHome:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) updateInboxForPrincipal:forInboxContainer:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) updateOutboxForPrincipal:forOutboxContainer:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) updateNotificationsForPrincipal:forNotificationContainer:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) updateAndRefreshCalendarsForPrincipal:forCalendarContainers:inboxURL:inboxContainer:isDeepRefresh:deleteMissingCalendars:error:]
___178-[CalDAVAccountRefreshQueueableOperation(Private) updateAndRefreshCalendarsForPrincipal:forCalendarContainers:inboxURL:inboxContainer:isDeepRefresh:deleteMissingCalendars:error:]_block_invoke
___copy_helper_block_755
___destroy_helper_block_756
___178-[CalDAVAccountRefreshQueueableOperation(Private) updateAndRefreshCalendarsForPrincipal:forCalendarContainers:inboxURL:inboxContainer:isDeepRefresh:deleteMissingCalendars:error:]_block_invoke1096
___copy_helper_block_1123
___destroy_helper_block_1124
-[CalDAVAccountRefreshQueueableOperation(Private) deleteRemovedCalendarsForPrincipal:withURLs:error:]
-[CalDAVAccountRefreshQueueableOperation(Private) _shouldCoalesceWithOperations:]
-[CalDAVAccountRefreshQueueableOperation(Private) _isSameTypeOfRefreshAs:]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation initWithChangeRequest:notificationCollectionPath:filename:forSession:]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation dealloc]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation performOperation]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___76-[CalDAVDeleteNotificationCollectionFileQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVDeleteNotificationCollectionFileQueueableOperation handleRemovalCleanup]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation filename]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation setFilename:]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation notificationCollectionPath]
-[CalDAVDeleteNotificationCollectionFileQueueableOperation setNotificationCollectionPath:]
-[CalDAVExpandGroupQueueableOperation initWithChangeRequest:forSession:]
-[CalDAVExpandGroupQueueableOperation dealloc]
-[CalDAVExpandGroupQueueableOperation performOperation]
-[CalDAVExpandGroupQueueableOperation readableDescription]
-[CalDAVExpandGroupQueueableOperation groupIdentifier]
-[CalDAVExpandGroupQueueableOperation setGroupIdentifier:]
-[CalDAVRefreshDelegateListQueueableOperation readableDescription]
___copy_helper_block_
___destroy_helper_block_
-[CalDAVRefreshDelegateListQueueableOperation serverSupportsDelegates]
-[CalDAVETagCache(Private) _initWithDirectory:]
+[CalDAVETagCache newCacheControllerAtDirectory:]
+[CalDAVETagCache newCacheControllerForPrincipalUID:calendarUID:]
+[CalDAVETagCache localPrincipalPathForUID:]
+[CalDAVETagCache newCacheControllerForPrincipalInboxWithUID:]
+[CalDAVETagCache newCacheControllerForPrincipalNotificationCollectionWithUID:]
-[CalDAVETagCache cTag]
-[CalDAVETagCache etagForFilename:]
-[CalDAVETagCache scheduleTagForFilename:]
-[CalDAVETagCache filenameForUID:]
-[CalDAVETagCache allFilenames]
-[CalDAVETagCache deleteFile]
-[CalDAVETagCache init]
-[CalDAVETagCache dealloc]
-[CalDAVETagCache cacheFilename]
+[CalDAVOfficeHour supportsSecureCoding]
+[CalDAVOfficeHour getOfficeHoursForPrincipalObjectIDString:andCompletionBlock:]
+[CalDAVOfficeHour setOfficeHoursForPrincipalObjectIDString:officeHours:]
-[CalDAVOfficeHour encodeWithCoder:]
-[CalDAVOfficeHour initWithCoder:]
-[CalDAVOfficeHour dealloc]
-[CalDAVOfficeHour description]
+[CalDAVOfficeHour officeHoursFromData:]
+[CalDAVOfficeHour officeHoursFromICS:]
+[CalDAVOfficeHour dataFromOfficeHours:]
+[CalDAVOfficeHour icsFromOfficeHours:]
-[CalDAVOfficeHour enabled]
-[CalDAVOfficeHour setEnabled:]
-[CalDAVOfficeHour weekday]
-[CalDAVOfficeHour setWeekday:]
-[CalDAVOfficeHour startDate]
-[CalDAVOfficeHour setStartDate:]
-[CalDAVOfficeHour endDate]
-[CalDAVOfficeHour setEndDate:]
-[CALKeychain guessLoginPasswordForThisURL:login:password:]
-[CALKeychain newDictionaryForURL:realm:backupDictionaries:]
-[CALKeychain _computeOtherPossibleLookupPathsForPath:]
-[CALKeychain newDictionaryForGenericPasswordWithAccount:service:]
-[CALKeychain saveKeychainInformationsForURL:realm:andPassword:]
-[CALKeychain deleteKeychainInformationsForURL:]
-[CALKeychain loadOldKeychainForURL:]
-[CALKeychain guessLoginPasswordForURL:login:password:]
-[CALKeychain guessPasswordForURL:]
-[CALKeychain modifyKeychainInformationsForQuery:password:]
-[CALKeychain deleteKeychainItemForNSURLCredential:protectionSpace:]
+[CALKeychain urlForKeychainWithScheme:login:host:path:port:]
+[CALKeychain oldURLForKeychainWithScheme:login:host:principalPath:port:]
-[CalManagedCalendarItem(MigrateToServer) migrateMatchType]
+[CalManagedCalendarItem(MigrateToServer) _icsStringForDateTime:floating:]
-[CalManagedCalendarItem(MigrateToServer) migrateCanonicalForm]
-[CalManagedCalendarItem(MigrateToServer) _uidKeyWithPhantomDetails]
-[CalManagedCalendarItem(MigrateToServer) isScheduledEventWithKnownBadUID]
-[CalManagedCalendarItem(MigrateToServer) _uploadAttachmentsInContext:]
-[CalManagedCalendarItem(MigrateToServer) _addOrganizerScheduleAgentClient]
-[ICSDocument(MungeUID) _mungeUIDsWithDictionary:]
-[ICSDocument(MungeUID) _addOrganizerScheduleAgentClient]
-[CalDAVMigrateToServerQueueableOperation initWithSession:previousMigrateDelay:]
-[CalDAVMigrateToServerQueueableOperation _preconditionErrorBackoffTime:]
-[CalDAVMigrateToServerQueueableOperation performOperation]
___59-[CalDAVMigrateToServerQueueableOperation performOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVMigrateToServerQueueableOperation _finalize]
-[CalDAVMigrateToServerQueueableOperation migrateOperationDone:]
-[CalDAVMigrateToServerQueueableOperation retryTimerFired:]
-[CalDAVMigrateToServerQueueableOperation suppressErrorDialog]
-[CalDAVMigrateToServerQueueableOperation dealloc]
-[CalDAVMigrateToServerQueueableOperation _setupBackgroundThread]
-[CalDAVMigrateToServerQueueableOperation migrate]
___50-[CalDAVMigrateToServerQueueableOperation migrate]_block_invoke
___copy_helper_block_345
___destroy_helper_block_346
-[CalDAVMigrateToServerQueueableOperation _finishWithError:state:]
___66-[CalDAVMigrateToServerQueueableOperation _finishWithError:state:]_block_invoke
___copy_helper_block_372
___destroy_helper_block_373
-[CalDAVMigrateToServerQueueableOperation _resetBulkMax]
-[CalDAVMigrateToServerQueueableOperation bumpPreviousDelay]
-[CalDAVMigrateToServerQueueableOperation _checkThread]
-[CalDAVMigrateToServerQueueableOperation managedPrincipal]
-[CalDAVMigrateToServerQueueableOperation accountID]
-[CalDAVMigrateToServerQueueableOperation _localSubscribedCalendar:matchesRemoteCalendar:]
-[CalDAVMigrateToServerQueueableOperation _determineRemoteCalendarsForLocalCalendars:includeSubscribed:tasks:]
-[CalDAVMigrateToServerQueueableOperation _determineAndSetCurrentRemoteCalendar]
-[CalDAVMigrateToServerQueueableOperation _determineAndSetCurrentRemoteSubscribedCalendar]
+[CalDAVMigrateToServerQueueableOperation plansForEventsOrTasksInCalendar:toCalendar:tasksOnly:]
___96+[CalDAVMigrateToServerQueueableOperation plansForEventsOrTasksInCalendar:toCalendar:tasksOnly:]_block_invoke
+[CalDAVMigrateToServerQueueableOperation plansForTasksInCalendar:toCalendar:]
+[CalDAVMigrateToServerQueueableOperation plansForEventsInCalendar:toCalendar:]
-[CalDAVMigrateToServerQueueableOperation _faultOutPostProcessedToIndex:]
___73-[CalDAVMigrateToServerQueueableOperation _faultOutPostProcessedToIndex:]_block_invoke
___copy_helper_block_469
___destroy_helper_block_470
-[CalDAVMigrateToServerQueueableOperation _markPlanAsFailed:]
-[CalDAVMigrateToServerQueueableOperation _storeAndUpdateFailedPlansWithUIDs:]
-[CalDAVMigrateToServerQueueableOperation _storeAndUpdateFailedPlansWithFilenames:]
-[CalDAVMigrateToServerQueueableOperation _storeAndUpdatePlansWithETags:filenames:]
-[CalDAVMigrateToServerQueueableOperation _getFailGroupWithError:]
-[CalDAVMigrateToServerQueueableOperation _cleanupMarkedCalendarsAfterSuccessfulMigrationWithError:]
___100-[CalDAVMigrateToServerQueueableOperation _cleanupMarkedCalendarsAfterSuccessfulMigrationWithError:]_block_invoke
___copy_helper_block_531
___destroy_helper_block_532
___100-[CalDAVMigrateToServerQueueableOperation _cleanupMarkedCalendarsAfterSuccessfulMigrationWithError:]_block_invoke538
___copy_helper_block_570
___destroy_helper_block_571
-[CalDAVMigrateToServerQueueableOperation _makeCommonHeaders]
-[CalDAVMigrateToServerQueueableOperation _updateStagedCtag:]
-[CalDAVMigrateToServerQueueableOperation _isBulkStateUnknown]
-[CalDAVMigrateToServerQueueableOperation _setBulkUnknownToUnsupported]
-[CalDAVMigrateToServerQueueableOperation _bulkSimpleSupported]
-[CalDAVMigrateToServerQueueableOperation _bulkCrudSupported]
-[CalDAVMigrateToServerQueueableOperation _expandedItemsFromItems:]
-[CalDAVMigrateToServerQueueableOperation _documentFromPlans:]
-[CalDAVMigrateToServerQueueableOperation _populateEtags:filenames:]
-[CalDAVMigrateToServerQueueableOperation _createNewRemoteCalendar]
___67-[CalDAVMigrateToServerQueueableOperation _createNewRemoteCalendar]_block_invoke
___copy_helper_block_655
___destroy_helper_block_656
-[CalDAVMigrateToServerQueueableOperation _createNewRemoteSubscribedCalendar]
___77-[CalDAVMigrateToServerQueueableOperation _createNewRemoteSubscribedCalendar]_block_invoke
___copy_helper_block_720
___destroy_helper_block_721
-[CalDAVMigrateToServerQueueableOperation _fetchCalendarProperties]
___67-[CalDAVMigrateToServerQueueableOperation _fetchCalendarProperties]_block_invoke
___copy_helper_block_734
___destroy_helper_block_735
-[CalDAVMigrateToServerQueueableOperation _putOneItem:path:extraHeaders:]
___73-[CalDAVMigrateToServerQueueableOperation _putOneItem:path:extraHeaders:]_block_invoke
___copy_helper_block_746
___destroy_helper_block_747
___73-[CalDAVMigrateToServerQueueableOperation _putOneItem:path:extraHeaders:]_block_invoke752
___copy_helper_block_755
___destroy_helper_block_756
-[CalDAVMigrateToServerQueueableOperation _postData:extraHeaders:]
___66-[CalDAVMigrateToServerQueueableOperation _postData:extraHeaders:]_block_invoke
___copy_helper_block_763
___destroy_helper_block_764
___66-[CalDAVMigrateToServerQueueableOperation _postData:extraHeaders:]_block_invoke766
___copy_helper_block_767
___destroy_helper_block_768
-[CalDAVMigrateToServerQueueableOperation _postCRUD]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___52-[CalDAVMigrateToServerQueueableOperation _postCRUD]_block_invoke
___52-[CalDAVMigrateToServerQueueableOperation _postCRUD]_block_invoke_2
___copy_helper_block_816
___destroy_helper_block_817
___52-[CalDAVMigrateToServerQueueableOperation _postCRUD]_block_invoke819
___copy_helper_block_820
___destroy_helper_block_821
___52-[CalDAVMigrateToServerQueueableOperation _postCRUD]_block_invoke823
___copy_helper_block_824
___destroy_helper_block_825
___52-[CalDAVMigrateToServerQueueableOperation _postCRUD]_block_invoke827
___copy_helper_block_828
___destroy_helper_block_829
___copy_helper_block_841
___destroy_helper_block_842
-[CalDAVMigrateToServerQueueableOperation _uploadNewItems]
-[CalDAVMigrateToServerQueueableOperation _deleteObsoleteItems]
___63-[CalDAVMigrateToServerQueueableOperation _deleteObsoleteItems]_block_invoke
___copy_helper_block_867
___destroy_helper_block_868
-[CalDAVMigrateToServerQueueableOperation _modifyExistingItems]
-[CalDAVMigrateToServerQueueableOperation _handleLocalCalendar]
-[CalDAVMigrateToServerQueueableOperation _populatePlansForLocalCalendar]
-[CalDAVMigrateToServerQueueableOperation _makeRemoteCalendars]
-[CalDAVMigrateToServerQueueableOperation _processNewCalendar]
-[CalDAVMigrateToServerQueueableOperation mkcalendarComplete:]
-[CalDAVMigrateToServerQueueableOperation calendarPropertiesComplete:]
-[CalDAVMigrateToServerQueueableOperation putComplete:]
-[CalDAVMigrateToServerQueueableOperation postComplete:]
-[CalDAVMigrateToServerQueueableOperation _postProcessDeletionAndContinue]
-[CalDAVMigrateToServerQueueableOperation deleteComplete:]
-[CalDAVMigrateToServerQueueableOperation state]
-[CalDAVMigrateToServerQueueableOperation setState:]
-[CalDAVMigrateToServerQueueableOperation context]
-[CalDAVMigrateToServerQueueableOperation setContext:]
-[CalDAVMigrateToServerQueueableOperation unprocessedCalendars]
-[CalDAVMigrateToServerQueueableOperation setUnprocessedCalendars:]
-[CalDAVMigrateToServerQueueableOperation calendarsToCreate]
-[CalDAVMigrateToServerQueueableOperation setCalendarsToCreate:]
-[CalDAVMigrateToServerQueueableOperation currentCalendarDetails]
-[CalDAVMigrateToServerQueueableOperation setCurrentCalendarDetails:]
-[CalDAVMigrateToServerQueueableOperation currentRemoteCalendar]
-[CalDAVMigrateToServerQueueableOperation setCurrentRemoteCalendar:]
-[CalDAVMigrateToServerQueueableOperation currentStagedRemoteCTag]
-[CalDAVMigrateToServerQueueableOperation setCurrentStagedRemoteCTag:]
-[CalDAVMigrateToServerQueueableOperation unprocessedNewPlans]
-[CalDAVMigrateToServerQueueableOperation setUnprocessedNewPlans:]
-[CalDAVMigrateToServerQueueableOperation unprocessedUpdatePlans]
-[CalDAVMigrateToServerQueueableOperation setUnprocessedUpdatePlans:]
-[CalDAVMigrateToServerQueueableOperation unprocessedUpdateDeleteUIDPlans]
-[CalDAVMigrateToServerQueueableOperation setUnprocessedUpdateDeleteUIDPlans:]
-[CalDAVMigrateToServerQueueableOperation inProgressPlans]
-[CalDAVMigrateToServerQueueableOperation setInProgressPlans:]
-[CalDAVMigrateToServerQueueableOperation plansToPostProcess]
-[CalDAVMigrateToServerQueueableOperation setPlansToPostProcess:]
-[CalDAVMigrateToServerQueueableOperation plansToMoveLocal]
-[CalDAVMigrateToServerQueueableOperation setPlansToMoveLocal:]
-[CalDAVMigrateToServerQueueableOperation bulkUploadTaskGroup]
-[CalDAVMigrateToServerQueueableOperation setBulkUploadTaskGroup:]
-[LocalCalendarDetails dealloc]
-[LocalCalendarDetails localCalendar]
-[LocalCalendarDetails setLocalCalendar:]
-[LocalCalendarDetails targetsVTODO]
-[LocalCalendarDetails setTargetsVTODO:]
-[CalendarItemMigratePlan dealloc]
-[CalendarItemMigratePlan faultOutItemsInContext:]
-[CalendarItemMigratePlan type]
-[CalendarItemMigratePlan setType:]
-[CalendarItemMigratePlan localItem]
-[CalendarItemMigratePlan setLocalItem:]
-[CalendarItemMigratePlan remoteItem]
-[CalendarItemMigratePlan setRemoteItem:]
-[CalendarItemMigratePlan remoteCalendar]
-[CalendarItemMigratePlan setRemoteCalendar:]
-[CalendarItemMigratePlan updatedETag]
-[CalendarItemMigratePlan setUpdatedETag:]
-[CalendarItemMigratePlan updatedFilename]
-[CalendarItemMigratePlan setUpdatedFilename:]
-[CalDAVBulkSimpleTask copyDefaultParserForContentType:]
+[CalManagedMigrationGroup pathExtension]
-[CalManagedMigrationGroup type]
-[CalManagedMigrationGroup properties]
-[CalManagedCalDAVPrincipal(EtagMigration) migrateETags:]
-[CalManagedCalDAVCalendar(EtagMigration) migrateETags:]
-[CalPersistentStoreCoordinator(EtagMigration) migrateETags]
-[CalDAVClientInfoSentry description]
-[CalDAVClientInfoSentry setHostToPluginIDCache:]
-[CalDAVClientInfoSentry setPluginIDToTransmissionCheckResultCache:]
+[CalManagedCalendarHomeChangeRequest entityName]
+[CalManagedCalendarHomeChangeRequest insertCalendarHomeChangeRequestWithType:principalUID:uri:inManagedObjectContext:]
+[CalManagedDefaultAlarmSet _enableForUnitTests]
+[CalManagedDefaultAlarmSet _disableForUnitTests]
-[CalManagedDefaultAlarmSet isDefaultAlarmPreferenceNone:]
-[CalManagedDefaultAlarmSet enclosingSource]
+[EKProtocolParticipant_Shared doesParticipantURL:andEmail:matchParticipantURL:andEmail:]
-[CalAbstractCDChangeTracker substituteOtherObjectFor:]
-[CalAbstractCDChangeTracker processChangeObjects:into:ignoreOmitSyncRecord:]
-[CalAbstractCDChangeTracker processChangeObjects:into:]
-[CalAbstractCDChangeTracker makePListCompliant:]
-[CalAbstractCDChangeTracker storeMods:andDeletes:]
-[CalAbstractCDChangeTracker removeDeleted:fromMods:]
-[CalAbstractCDChangeTracker changesFromNotification:adds:mods:deletes:]
-[CalAbstractCDChangeTracker handleContextSave:adds:mods:deletes:]
-[CalAbstractCDChangeTracker storeChanges:]
-[CalAbstractCDChangeTracker clearAllStoredChanges]
-[CalAbstractCDChangeTracker clearProcessedChanges]
-[CalAbstractCDChangeTracker getAllChanges]
-[CalAbstractCDChangeTracker modsForEntity:]
-[CalAbstractCDChangeTracker deletesForEntity:]
-[CalAbstractCDChangeTracker getModifiedUIDsForEntity:modified:deleted:]
-[CalAbstractCDChangeTracker beginningSyncOfType:]
-[CalAbstractCDChangeTracker endedSyncWith:]
-[CalAbstractCDChangeTracker alarmSyncName:]
-[CalAbstractCDChangeTracker publicationSyncName:]
-[CalAbstractCDChangeTracker init]
-[CalAbstractCDChangeTracker dealloc]
-[CalAbstractCDChangeTracker syncSchemaEntityNameOf:]
+[CalManagedAlarm recognizedICSProperties]
___42+[CalManagedAlarm recognizedICSProperties]_block_invoke
+[CalManagedAlarm recognizedICSPropertyParameterMap]
___52+[CalManagedAlarm recognizedICSPropertyParameterMap]_block_invoke
-[CalManagedAlarm contextForValidationError]
-[CalManagedAlarm _updateAlarmDerivedPropertiesForSave]
-[CalManagedAlarm earliestTriggerDateBetweenStartDate:endDate:]
-[CalManagedAlarm isExchangeCompatible]
-[CalManagedAlarm makeExchangeCompatible]
-[CalManagedAlarm snoozeParent]
-[CalManagedAlarm humanReadableDescription]
-[CalManagedAlarm updateWithManagedObject:omitSyncRecord:]
-[CalManagedAlarm uniqueKeyForObject]
+[CalManagedAlarm proximityStringFromType:]
+[CalManagedAlarm generateSnoozeAlarmFromAlarm:onDate:inManagedObjectContext:]
-[CalManagedAlarm resolveBookmarkWithError:isSecurityScoped:]
+[CalManagedAlarm resolveBookmark:error:isSecurityScoped:]
-[CalManagedAlarm setActionString:]
___41-[CalManagedAlarm setStructuredLocation:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalManagedAlarm setSoundName:]
-[CalManagedAlarm isDefault]
-[CalManagedAlarm notRelativeToTravelTime]
-[CalManagedAlarm setNotRelativeToTravelTime:]
-[CalManagedAlarm enclosingSource]
-[CalDAVSetDefaultAlarmQueueableOperation initWithChangeRequest:session:URI:property:value:valueType:]
-[CalDAVSetDefaultAlarmQueueableOperation resolveError:forAccountInfoProvider:]
+[CalNotification removeObserver:]
+[CALScriptUtils hasPendingScript]
+[CALScriptUtils _realRunScript:]
+[CALScriptUtils runScript:]
+[CALScriptUtils runCompiledScript:error:]
+[CALScriptUtils infoForOSAError:fromComponentInstance:]
+[CALScriptUtils generateAppleEventForFunction:withStringArgs:]
+[CALScriptUtils createScriptDescFromPath:]
+[CALScriptUtils executeScript:withArgs:returnError:]
+[CALScriptUtils executeSubroutine:inScript:withArgs:returnError:]
+[CALScriptUtils _realExecuteSubroutine:]
+[CALScriptUtils executeSubroutine:inScript:withArgs:]
-[CalUserNotificationCenter deliverMessageNotification:]
-[CalUserNotificationCenter startRemindersNotificationCenterWidget]
-[CalUserNotificationCenter fireAlarmNotification:]
-[CalUserNotificationCenter monitorLocationForAlarm:]
-[CalUserNotificationCenter stopMonitoringLocations]
-[CalUserNotificationCenter setupLocationManagerForNewRegion]
___copy_helper_block_
___destroy_helper_block_
-[CalUserNotificationCenter isMonitored:]
-[CalUserNotificationCenter dealloc]
-[CalUserNotificationCenter locationManager]
-[CalUserNotificationCenter setLocationManager:]
-[CalUserMessageNotification initWithMessage:]
-[CalUserMessageNotification notification]
-[CalUserMessageNotification notificationWithImage:]
-[CalUserMessageNotification buttonAction]
-[CalUserMessageNotification buttonTitleForAction:]
-[CalUserMessageNotification dealloc]
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_25
___destroy_helper_block_26
-[CalUserNotificationCenterHelper dealloc]
___copy_helper_block_68
___destroy_helper_block_69
___copy_helper_block_183
___destroy_helper_block_184
-[CalUserNotificationCenterHelper resolveBookmarks:]
___copy_helper_block_223
___destroy_helper_block_224
___52-[CalUserNotificationCenterHelper _deliverMessages:]_block_invoke
___copy_helper_block_246
___destroy_helper_block_247
___copy_helper_block_270
___destroy_helper_block_271
___copy_helper_block_313
___destroy_helper_block_314
-[CalUserNotificationCenterHelper expireNotifications:]
___55-[CalUserNotificationCenterHelper expireNotifications:]_block_invoke
-[CalUserNotificationCenterHelper _shouldAlarmExpire:]
-[CalUserNotificationCenterHelper _calcSnoozeInterval:]
-[CalUserNotificationCenterHelper _validateAlarmOccurringDate:withRespectToEventDate:]
-[CalUserNotificationCenterHelper _calcDateWhenSnoozeAlarmOccurs:]
-[CalUserNotificationCenterHelper snoozeAlarm:]
___47-[CalUserNotificationCenterHelper snoozeAlarm:]_block_invoke
___copy_helper_block_371
___destroy_helper_block_372
-[CalUserNotificationCenterHelper dismissAlarm:]
-[CalUserNotificationCenterHelper dismissAlarm:withAckDate:]
-[CalUserNotificationCenterHelper _acknowledgeAlarm:originalAlarm:deleteAlarm:inContext:onDate:]
-[CalUserNotificationCenterHelper _sendMailAlarm:]
-[CalUserNotificationCenterHelper _executeProcAlarm:]
-[CalUserNotificationCenterHelper messageOK:]
___45-[CalUserNotificationCenterHelper messageOK:]_block_invoke
___copy_helper_block_566
___destroy_helper_block_567
-[CalUserNotificationCenterHelper messageAccept:]
___49-[CalUserNotificationCenterHelper messageAccept:]_block_invoke
___copy_helper_block_571
___destroy_helper_block_572
-[CalUserNotificationCenterHelper messageView:]
-[CalUserNotificationCenterHelper handleLocationChangeForRegion:type:]
___70-[CalUserNotificationCenterHelper handleLocationChangeForRegion:type:]_block_invoke
___copy_helper_block_601
___destroy_helper_block_602
-[CalUserNotificationCenterHelper _calendarIDs]
-[CalUserNotificationCenterHelper invitationNotificationsDisabledForiCalChanged:]
___81-[CalUserNotificationCenterHelper invitationNotificationsDisabledForiCalChanged:]_block_invoke
___copy_helper_block_766
___destroy_helper_block_767
-[CalUserNotificationCenterHelper sharedCalendarNotificationsDisabledForiCalChanged:]
___85-[CalUserNotificationCenterHelper sharedCalendarNotificationsDisabledForiCalChanged:]_block_invoke
___copy_helper_block_771
___destroy_helper_block_772
-[CalUserNotificationCenterListener userNotificationCenter:didActivateNotification:]
-[CalUserNotificationCenterListener userNotificationCenter:didSnoozeAlert:]
-[CalUserNotificationCenterListener userNotificationCenter:didExpireNotifications:]
-[CalUserNotificationCenterListener userNotificationCenter:didRemoveDeliveredNotifications:]
-[CalUserNotificationCenterListener userNotificationCenter:didDismissAlert:]
-[CalUserNotificationCenterListener dismissNotificationHelper:]
-[CalUserNotificationCenterListener locationManager:didEnterRegion:]
-[CalUserNotificationCenterListener locationManager:didExitRegion:]
-[CalUserNotificationCenterListener openURLForInfo:]
+[CalManagedCalDAVError entityName]
-[CalManagedCalDAVError copyScrubbedUserInfoForError:]
___54-[CalManagedCalDAVError copyScrubbedUserInfoForError:]_block_invoke
___54-[CalManagedCalDAVError copyScrubbedUserInfoForError:]_block_invoke_2
___54-[CalManagedCalDAVError copyScrubbedUserInfoForError:]_block_invoke_3
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_85
___destroy_helper_block_86
___56-[CalManagedCalDAVError copyUnscrubbedUserInfoForError:]_block_invoke_2
___copy_helper_block_102
___destroy_helper_block_103
___copy_helper_block_105
___destroy_helper_block_106
+[CalManagedError entityName]
-[CalManagedError setError:]
-[CalManagedError copyScrubbedUserInfoForError:]
___48-[CalManagedError copyScrubbedUserInfoForError:]_block_invoke
___48-[CalManagedError copyScrubbedUserInfoForError:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_56
___destroy_helper_block_57
___50-[CalManagedError copyUnscrubbedUserInfoForError:]_block_invoke
___50-[CalManagedError copyUnscrubbedUserInfoForError:]_block_invoke_2
___copy_helper_block_64
___destroy_helper_block_65
___copy_helper_block_67
___destroy_helper_block_68
-[CalManagedError isEqualToError:]
+[CalManagedExchangeError entityName]
-[CalManagedExchangeError copyScrubbedUserInfoForError:]
___56-[CalManagedExchangeError copyScrubbedUserInfoForError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[CalManagedPublicationError entityName]
+[CalManagedSubscriptionError entityName]
-[CalManagedSubscriptionError copyScrubbedUserInfoForError:]
___60-[CalManagedSubscriptionError copyScrubbedUserInfoForError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalManagedObject(CalAccountMonitor) _deleteAffectsPush]
-[CalManagedObject(CalAccountMonitor) _affectedObjectsForPush]
-[CalManagedObject(CalAccountMonitor) _affectedObjectsForRefresh]
-[CalManagedObject(CalAccountMonitor) _insertAffectsAccountSync]
-[CalManagedObject(CalAccountMonitor) _deleteAffectsAccountSync]
-[CalManagedObject(CalAccountMonitor) _insertAffectsDockTile]
-[CalManagedObject(CalAccountMonitor) _deleteAffectsDockTile]
-[CalManagedObject(CalAccountMonitor) _insertAffectsAccount]
-[CalManagedObject(CalAccountMonitor) _deleteAffectsAccount]
-[CalManagedObject(CalAccountMonitor) _affectedObjectsForAccount]
-[CalManagedObject(CalAccountMonitor) _deleteAffectsSource]
-[CalManagedObject(CalAccountMonitor) _affectedObjectForSource]
-[CalManagedObject(CalAccountMonitor) _changeShouldCauseReload:]
-[CalManagedAccount(CalAccountMonitor) _affectedObjectsForPush]
-[CalManagedAccount(CalAccountMonitor) _affectedObjectsForRefresh]
-[CalManagedAccount(CalAccountMonitor) _insertAffectsAccountSync]
-[CalManagedAccount(CalAccountMonitor) _deleteAffectsAccountSync]
-[CalManagedAccount(CalAccountMonitor) _insertAffectsDockTile]
-[CalManagedAccount(CalAccountMonitor) _deleteAffectsDockTile]
-[CalManagedAccount(CalAccountMonitor) _insertAffectsAccount]
-[CalManagedAccount(CalAccountMonitor) _deleteAffectsAccount]
-[CalManagedAccount(CalAccountMonitor) _affectedObjectsForAccount]
-[CalManagedAccount(CalAccountMonitor) _changeShouldCauseReload:]
-[CalManagedPrincipal(CalAccountMonitor) _insertAffectsAccountSync]
-[CalManagedPrincipal(CalAccountMonitor) _deleteAffectsAccountSync]
-[CalManagedPrincipal(CalAccountMonitor) _insertAffectsDockTile]
-[CalManagedPrincipal(CalAccountMonitor) _deleteAffectsDockTile]
-[CalManagedPrincipal(CalAccountMonitor) _insertAffectsAccount]
-[CalManagedPrincipal(CalAccountMonitor) _deleteAffectsAccount]
-[CalManagedCalDAVPrincipal(CalAccountMonitor) _deleteAffectsPush]
-[CalManagedCalDAVCalendar(CalAccountMonitor) _affectedObjectsForPush]
-[CalManagedCalDAVCalendar(CalAccountMonitor) _deleteAffectsSource]
-[CalManagedCalDAVCalendar(CalAccountMonitor) _affectedObjectForSource]
-[CalManagedSubscriptionInfo(CalAccountMonitor) _changeAffectsRefresh:]
-[CalManagedSubscriptionInfo(CalAccountMonitor) _affectedObjectsForRefresh]
-[CalManagedSubscriptionInfo(CalAccountMonitor) _insertAffectsAccount]
-[CalManagedSubscriptionInfo(CalAccountMonitor) _deleteAffectsAccount]
-[CalManagedSubscriptionInfo(CalAccountMonitor) _affectedObjectsForAccount]
___copy_helper_block_
___destroy_helper_block_
+[CalAccountMonitor completelyDisableAccountMonitorInThisProcess]
+[CalAccountMonitor noSubscriptionCalendarsInContext:]
+[CalAccountMonitor findAndRemoveEmptyLocalCalendarsInContext:]
-[CalExchangeBasicAccountInfoProvider initWithLogin:password:sessionID:]
-[CalExchangeBasicAccountInfoProvider dealloc]
-[CalExchangeBasicAccountInfoProvider exchangeServiceBinding:didCancelAuthenticationChallenge:]
-[CalExchangeBasicAccountInfoProvider exchangeServiceBinding:didReceiveAuthenticationChallenge:]
-[CalExchangeBasicAccountInfoProvider login]
-[CalExchangeBasicAccountInfoProvider setLogin:]
-[CalExchangeBasicAccountInfoProvider password]
-[CalExchangeBasicAccountInfoProvider setPassword:]
-[CalExchangeBasicAccountInfoProvider sessionID]
-[CalExchangeBasicAccountInfoProvider setSessionID:]
-[CalCalDAVAuthenticationTask accountInfoProvider]
-[CalMeCardListener init]
-[CalMeCardListener dealloc]
-[CalMeCardListener _notifyCalMeCardChanged]
-[CalMeCardListener currentCachedMeCard]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___40-[CalMeCardListener currentCachedMeCard]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___40-[CalMeCardListener currentCachedMeCard]_block_invoke34
___copy_helper_block_37
___destroy_helper_block_38
___40-[CalMeCardListener currentCachedMeCard]_block_invoke40
___copy_helper_block_45
___destroy_helper_block_46
-[CalMeCardListener _currentCachedMeCardUniqueID]
___49-[CalMeCardListener _currentCachedMeCardUniqueID]_block_invoke
___copy_helper_block_50
___destroy_helper_block_51
-[CalMeCardListener _updateInMemoryCacheAndNotifyWithCalMeCard:]
___64-[CalMeCardListener _updateInMemoryCacheAndNotifyWithCalMeCard:]_block_invoke
-[CalMeCardListener _updateCachesWithCalMeCard:]
___48-[CalMeCardListener _updateCachesWithCalMeCard:]_block_invoke
___copy_helper_block_62
___destroy_helper_block_63
-[CalMeCardListener _currentCalMeCardDerivedFromAB]
-[CalMeCardListener _scheduledEventManagedIDsInContext:]
-[CalMeCardListener _updateMyAttendeeForEventIDs:inManagedObjectContext:]
-[CalMeCardListener _runUpdateJobSynchronously]
___44-[CalMeCardListener _checkIfMeCardOutOfDate]_block_invoke
___copy_helper_block_174
___destroy_helper_block_175
___copy_helper_block_187
___destroy_helper_block_188
-[CalMeCardListener _addressBookChanged:]
___copy_helper_block_202
___destroy_helper_block_203
-[CalMeCardListener ensureMeCardCacheFileExists]
-[CalMeCardListener calMeCard]
-[CalMeCardListener setCalMeCard:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation initWithChangeRequest:session:URI:inboxURI:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation dealloc]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation managedPrincipal]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation performOperation]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation prepareOperation]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation saveDestinationCollectionURIOnChangeRequest]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation _saveManagedObjectContext]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation _finishWithError:state:]
+[CalDAVCalendarSplitDualTypeCalendarQueueableOperation queryTaskProperties]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation fetchEventsOrTodosFromRemoteSourceCollection]
___101-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation fetchEventsOrTodosFromRemoteSourceCollection]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___101-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation fetchEventsOrTodosFromRemoteSourceCollection]_block_invoke137
___copy_helper_block_140
___destroy_helper_block_141
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation postFetchStateSwitch]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation addNewDestinationCollectionFromSource]
___94-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation addNewDestinationCollectionFromSource]_block_invoke
___copy_helper_block_267
___destroy_helper_block_268
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation coreDAVQueryResponseItemsForTargetItems]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation moveTargetedItemsToDestinationCollection]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation calendarItemWithServerURL:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation calendarItemsWithServerURLs:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation calendarItemServerURLsFromCoreDAVResponses:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation performMultiMoveOperation:withPUTFallBack:]
___99-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation performMultiMoveOperation:withPUTFallBack:]_block_invoke
___copy_helper_block_366
___destroy_helper_block_367
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation removeOriginalCollection]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation mkCalendarComplete:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation queryEventTaskComplete:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation queryTodoTaskComplete:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation multiMoveTaskCompletedWithTaskGroup:didUseFallback:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation deleteTask:completedWithError:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation taskGroup:didFinishWithError:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation managedObjectContext]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setManagedObjectContext:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation state]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setState:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation sourceCalendar]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setSourceCalendar:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation destinationCalendar]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setDestinationCalendar:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation destinationCalendarURI]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setDestinationCalendarURI:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation sourceCalendarRemoteEventHrefs]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setSourceCalendarRemoteEventHrefs:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation sourceCalendarRemoteTodoHrefs]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setSourceCalendarRemoteTodoHrefs:]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation queryAndMoveIteration]
-[CalDAVCalendarSplitDualTypeCalendarQueueableOperation setQueryAndMoveIteration:]
+[CalManagedCalendarSplitDualTypeChangeRequest insertCalendarSplitDualTypeChangeRequestWithType:sourceUID:uri:principalUID:inboxURI:isPendingEventMultiMoves:isPendingTaskMultiMoves:inManagedObjectContext:]
+[CalCertificateErrorHandler handleCertificateAcceptForError:forNode:]
___70+[CalCertificateErrorHandler handleCertificateAcceptForError:forNode:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___70+[CalCertificateErrorHandler handleCertificateAcceptForError:forNode:]_block_invoke28
___copy_helper_block_31
___destroy_helper_block_32
+[CaliMIPSession sharedInstance]
___32+[CaliMIPSession sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CaliMIPSession dealloc]
-[CaliMIPSession activate]
-[CaliMIPSession deactivate]
-[CaliMIPSession deletePersistedErrorAndNotify]
-[CaliMIPSession persistErrorAndNotify]
-[CaliMIPSession processChangeRequests:]
-[CaliMIPSession synchronizeWithFlags:]
-[CaliMIPSession systemDidWake]
-[CaliMIPSession systemNetworkDidChange]
-[CaliMIPSession systemWillSleep]
-[CaliMIPSession timeSinceLastSync]
-[CaliMIPSession operationQueue]
-[CaliMIPSession setOperationQueue:]
-[CalUserNotificationCenterCache dealloc]
-[CalAccountsProvider dealloc]
-[CalAccountsProvider acAccountWithIdentifier:]
-[CalAccountsProvider oauthTokenForAccountWithIdentifier:tokenType:]
-[CalAccountsProvider renewAccountCredentialsForAccountWithIdentifier:withHandler:]
-[CalAccountsProvider iaAlistPluginForExchangeHost:]
-[CalAccountsProvider brandNameForHost:]
-[CalAccountsProvider _providerShortNameForProviderID:]
-[CalAccountsProvider titleForAccountWithHost:login:]
-[CalAccountsProvider googleTokenIfExistsForUsername:]
-[CalAccountsProvider generateGoogleTokenForUsername:]
-[CalAccountsProvider googleTokenIfExistsForUID:]
-[CalAccountsProvider generateGoogleTokenForUID:]
-[CalAccountsProvider messageTraceAccountTypes]
-[CalAccountsProvider _traceAccountsByType:]
-[CalAccountsProvider _traceAccountsByProvider:]
-[CalManagedAccount(CalAccountSort) compare:]
-[CalManagedSharee willSave]
-[CalManagedSharee enclosingSource]
-[CalManagedSharee isCurrentUserForScheduling]
-[CalManagedSharee isCurrentUserForSharing]
+[CalManagedShareeChangeRequest insertCalManagedUpdateShareeChangeRequestWithType:sourceUID:principalUID:uri:address:inManagedObjectContext:]
-[CalDAVUpdateShareesQueuableOperation initWithSession:andCalendar:]
+[CalDAVUpdateShareesQueuableOperation resendInvitationsForSharees:withCalendarObjectIDString:]
-[CalDAVUpdateShareesQueuableOperation initWithChangeRequest:andSession:]
-[CalDAVUpdateShareesQueuableOperation updateOperationWithChangeRequest:]
-[CalDAVUpdateShareesQueuableOperation _deletedCalDAVCalendarServerUserItemFromAddress:]
___copy_helper_block_
___destroy_helper_block_
-[CalDAVChangePublishStatusCalendarQueueableOperation initWithChangeRequest:session:action:]
___92-[CalDAVChangePublishStatusCalendarQueueableOperation initWithChangeRequest:session:action:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalDAVChangePublishStatusCalendarQueueableOperation performOperation]
-[CalDAVChangePublishStatusCalendarQueueableOperation dealloc]
-[CalAutoCompleteOperation dealloc]
-[CalAutoCompleteOperation canSearchAccount:]
-[CalAutoCompleteOperation searchFor:onSource:findPeople:groups:resources:rooms:recents:]
___copy_helper_block_
___destroy_helper_block_
-[CalAutoCompleteOperation queryTimedOut:]
-[CalAutoCompleteOperation _emailsToResultsFromResults:]
-[CalAutoCompleteOperation _serverAndRecentResults]
-[CalAutoCompleteOperation _removeGroupRecentResult:]
-[CalAutoCompleteOperation _moveServerResult:toRecentsAsReplacementForResult:]
-[CalAutoCompleteOperation _removeRecentGroupsAndServerDuplicateResults]
-[CalAutoCompleteOperation _sortServerResults]
___46-[CalAutoCompleteOperation _sortServerResults]_block_invoke
___copy_helper_block_331
___destroy_helper_block_332
-[CalAutoCompleteOperation _removeRecentAndServerResultsFromLocalResults]
-[CalAutoCompleteOperation _preprocessResultsForCoalescing]
-[CalAutoCompleteOperation setIgnoredParticipants:]
-[CalAutoCompleteOperation recentEmails]
-[CalAutoCompleteOperation localEmails]
-[CalAutoCompleteOperation serverEmails]
-[CalAutoCompleteOperation setServerEmails:]
-[CalAutoCompleteOperation doSearchLocal]
-[CalAutoCompleteOperation setDoSearchLocal:]
-[CalAutoCompleteOperation doDistributionLists]
-[CalAutoCompleteOperation setDoDistributionLists:]
-[CalAutoCompleteOperation returnFullData]
-[CalAutoCompleteOperation setReturnFullData:]
-[IIABQuerySession initWithDelegate:]
-[IIABQuerySession observeValueForKeyPath:ofObject:change:context:]
-[IIABQuerySession isRunning]
-[IIABQuerySession dealloc]
-[IIABQuerySession didFinishQuery]
-[IIABQuerySession didFindRecords:]
-[IIABQuerySession searchOperation:foundRecords:]
-[IIABQuerySession didFindPreviousRecipients:]
-[IIABQuerySession addOperations:]
-[IIABQuerySession searchFor:onServer:findPeople:locations:groups:]
+[IIABQuerySession _personsMatchingAllTokens:inAddressBook:]
-[IIABQuerySession results]
-[IIABQuerySession searchLocalContacts]
-[IIABQuerySession setSearchLocalContacts:]
-[IIABQuerySession returnFullContactData]
-[IIABQuerySession setReturnFullContactData:]
-[IIABQuerySession shouldReturnDistributionLists]
-[IIABQuerySession setShouldReturnDistributionLists:]
-[IICDQuerySession dealloc]
-[IICDQuerySession isRunning]
-[IICDQuerySession searchFor:ofTypes:withAccountInfoProvider:]
-[IICDQuerySession _launchAgentSearch:]
___39-[IICDQuerySession _launchAgentSearch:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IICDQuerySession host]
-[IICDQuerySession setHost:]
-[IIQuerySession dealloc]
-[IIQuerySession searchFor:onAccount:findPeople:groups:resources:locations:]
-[IIQuerySession results]
-[IIQuerySession isRunning]
-[CalClientIDChangeTracker init]
-[CalClientIDChangeTracker trackerFor:]
-[CalClientIDChangeTracker initForRead]
-[CalClientIDChangeTracker cleanup]
+[CalClientIDChangeTracker openForRead]
-[CalClientIDChangeTracker clearChanges]
-[CalClientIDChangeTracker remappings]
-[CalClientIDChangeTracker removals]
+[CalClientIDChangeTracker defaultTracker]
-[CalClientIDChangeTracker computeAndStoreChangeIds]
-[EntityIdChangeTracker init]
-[EntityIdChangeTracker getObjectID:]
-[EntityIdChangeTracker getIdentityString:]
+[EntityIdChangeTracker objectIdentityOf:]
-[EntityIdChangeTracker fetchAll]
-[EntityIdChangeTracker extractExtraInfo:withId:]
-[EntityIdChangeTracker extractAllIdsAndIdentities:]
-[EntityIdChangeTracker removeKey:forObject:into:]
-[EntityIdChangeTracker remap:to:forObject:into:]
-[EntityIdChangeTracker findChangedIds:]
-[EventIdChangeTracker init]
-[EventIdChangeTracker hasRecurrence:]
-[EventIdChangeTracker hasOrganizer:]
-[EventIdChangeTracker extractExtraInfo:withId:]
-[EventIdChangeTracker removeKey:forObject:into:]
-[EventIdChangeTracker remap:to:forObject:into:]
-[EventIdChangeTracker getIdentityString:]
-[TaskIdChangeTracker init]
-[TaskIdChangeTracker getIdentityString:]
-[CalendarIdChangeTracker init]
-[CalendarIdChangeTracker getIdentityString:]
-[AlarmIdChangeTracker init]
-[AlarmIdChangeTracker getIdentityString:]
-[AttendeeIdChangeTracker init]
-[AttendeeIdChangeTracker getIdentityString:]
-[PublicationIdChangeTracker init]
-[PublicationIdChangeTracker getIdentityString:]
-[ExchangeAccountIdChangeTracker init]
-[ExchangeAccountIdChangeTracker getIdentityString:]
-[CalDAVAccountIdChangeTracker init]
-[CalDAVAccountIdChangeTracker getIdentityString:]
-[CalPreviousController dealloc]
-[CalPreviousController clearAll]
-[CalAddressWrapper principalPath]
-[CalAddressWrapper displayedName]
-[CalAddressWrapper firstName]
-[CalAddressWrapper lastName]
-[CalAddressWrapper isPerson]
-[CalAddressWrapper isRoom]
-[CalAddressWrapper isResource]
-[CalAddressWrapper completionForSubstring:]
-[CalAddressWrapper groupCompletionForSubstring:count:]
-[CalAddressWrapper freeBusyType]
-[CalAddressABRecordWrapper initWithRecord:address:]
-[CalAddressABRecordWrapper addressBook]
-[CalAddressABPersonWrapper isPerson]
-[CalAddressABGroupWrapper initWithABGroup:]
-[CalAddressABGroupWrapper group]
-[CalAddressABGroupWrapper isGroup]
-[CalAddressABGroupWrapper displayedName]
-[CalAddressABGroupWrapper completionForSubstring:]
-[CalAddressCDRecordWrapper principalPath]
-[CalAddressCDRecordWrapper isResource]
-[CalAddressCDRecordWrapper isGroup]
-[CalAddressPreviousWrapper initWithFirstName:lastName:displayedName:address:loginName:type:recentContactIDNumber:]
-[CalAddressPreviousWrapper recentContactIDNumber]
-[CalAddressPreviousWrapper fromPrevious]
-[CalAddressPreviousWrapper loginName]
+[CalAutocompleteAttendee attendeeWithCommonName:]
+[CalAutocompleteAttendee attendeeFromDictionary:]
+[CalAutocompleteAttendee attendeeFromABPerson:]
+[CalAutocompleteAttendee recentsSourceIDForAccount:]
-[CalAutocompleteAttendee copyWithZone:]
-[CalAutocompleteAttendee person]
-[CalAutocompleteAttendee newPersonWithAddressBook:]
-[CalAutocompleteAttendee hash]
-[CalAutocompleteAttendee setAddress:]
-[CalAutocompleteAttendee setEmailAddress:]
-[CalAutocompleteAttendee setCommonName:]
-[CalAutocompleteAttendee setRole:]
-[CalAutocompleteAttendee setUserType:]
-[CalAutocompleteAttendee setParticipationStatus:]
-[CalAutocompleteAttendee rsvp]
-[CalAutocompleteAttendee setRSVP:]
-[CalAutocompleteAttendee scheduleForceSend]
-[CalAutocompleteAttendee setScheduleForceSend:]
-[CalAutocompleteAttendee dictionaryRepresentation]
-[CalAutocompleteAttendee representationForMail]
-[CalAutocompleteAttendee geoURLstring]
-[CalAutocompleteAttendee set_person:]
-[CalAutocompleteAttendee addressBook]
-[CalAutocompleteAttendee setAddressBook:]
+[CalBadgeMonitor postBadgeCountsNeedUpdate]
+[CalBadgeMonitor _postReminderBadgeCountNeedsUpdate]
+[CalBadgeMonitor reminderBecameOverdue]
+[CalBadgeMonitor _postCalendarBadgeCountNeedsUpdate]
+[CalBadgeMonitor _postCalendarBadgeCountNeedsUpdateWithInserted:andDeleted:]
+[CalBadgeMonitor badgeCountForCalendar]
+[CalBadgeMonitor badgeCountForReminders]
___copy_helper_block_
___destroy_helper_block_
+[CalPersistence upgradeIsInProgress]
+[CalPersistence reconnectToPersistence]
-[CalPersistence _managedObjectContextForCurrentThread]
-[CalPersistence _reset]
+[CalPersistence createDefaultLocalCalendars:error:]
+[CalPersistence createBirthdayCalendar:error:]
+[CalPersistence _configuredForUnitTesting]
+[CalPersistence _configureForUnitTesting]
+[CalPersistence _allowTruthFileProcessingInUnitTests]
+[CalPersistence _flushTruthFiles]
+[CalPersistence _startCoreDataXPCServer:]
___42+[CalPersistence _startCoreDataXPCServer:]_block_invoke
___copy_helper_block_279
___destroy_helper_block_280
___42+[CalPersistence _startCoreDataXPCServer:]_block_invoke298
___copy_helper_block_299
___destroy_helper_block_300
+[CalPersistence _createXPCStoreWithNoSchemaMigration:]
___87+[CalPersistence asyncConnectToPersistenceWithClientXPCWaitingOnGroup:completionBlock:]_block_invoke
___copy_helper_block_334
___destroy_helper_block_335
___87+[CalPersistence asyncConnectToPersistenceWithClientXPCWaitingOnGroup:completionBlock:]_block_invoke344
___copy_helper_block_355
___destroy_helper_block_356
-[CalPersistence dealloc]
-[CalPersistence finalize]
-[CalPersistence copyWithZone:]
-[CalPersistence retainCount]
-[CalPersistence autorelease]
-[CalPersistence postResetNotifications]
___copy_helper_block_530
___destroy_helper_block_531
___46-[CalPersistence managedObjectContextDidSave:]_block_invoke
___copy_helper_block_586
___destroy_helper_block_587
-[CalPersistence _notificationOriginatorIdWithContext:]
-[CalPersistence postNotificationName:userInfo:context:]
-[CalPersistence _shouldSendRemoteNotification:]
-[CalPersistence _shouldSendRemoteNotification:checkOriginatorID:]
+[CalChronometry currentLocationCode]
+[CalChronometry currentLanguageCode]
+[CalChronometry _updateEveything]
+[CalChronometry _updateForLocaleChange]
+[CalChronometry _updateWithCurrentTimeZone]
+[CalChronometry _currentLocaleDidChange:]
+[CalChronometry _currentTimeZoneDidChange:]
+[CalChronometry setCurrentTimeZone:]
+[CalChronometry overlayCalendarPrefChanged]
+[CalChronometry overlayCalendarID]
+[CalChronometry overlayCalendar]
___33+[CalChronometry overlayCalendar]_block_invoke
___33+[CalChronometry overlayCalendar]_block_invoke_2
-[CalClientProxy dealloc]
-[CalClientProxy testMethod]
___28-[CalClientProxy testMethod]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[CalClientProxy sessionConnectedStateChanged:state:]
___53-[CalClientProxy sessionConnectedStateChanged:state:]_block_invoke
___copy_helper_block_12
___destroy_helper_block_13
___destroy_helper_block_24
___copy_helper_block_26
___destroy_helper_block_27
___copy_helper_block_29
___destroy_helper_block_30
-[CalClientProxy calMeCardChanged]
___34-[CalClientProxy calMeCardChanged]_block_invoke
___34-[CalClientProxy calMeCardChanged]_block_invoke_2
-[CalConflictResults dealloc]
+[CalConflictResults resultsWithConflicts:userResponse:]
-[CalConflictResults conflicts]
-[CalConflictResults setConflicts:]
-[CalConflictResults userResponse]
-[CalConflictResults setUserResponse:]
-[CalManagedLocation awakeFromInsert]
-[CalManagedLocation enclosingSource]
-[CalManagedLocation radiusNumber]
+[CalManagedLocation adjustStructuredLocation:withNewLocation:createdLocationHandler:managedObjectContext:]
-[CalManagedLocation updateWithProtocolStructuredLocation:]
-[CalManagedLocation(Exchange) _calLocation]
-[CalManagedLocation(Exchange) dataString]
-[CalManagedLocation(Exchange) setValuesFromDataString:]
+[CalExchangeAddGrantedDelegateOperation executeWithAccount:withDelegate:withError:]
+[CalExchangeGetGrantedDelegatesOperation delegateUserPermissionForEWSPermission:]
+[CalExchangeGetGrantedDelegatesOperation executeWithAccount:withError:]
+[CalExchangeGrantedDelegateOperation updatePermissionsOnNonDistinguishedCalendarsForPrincipal:forDelegate:]
+[CalExchangeRemoveGrantedDelegateOperation executeWithAccount:withDelegate:withError:]
+[CalExchangeUpdateGrantedDelegatePermissionsOperation ewsPermissionForDelegateUserPermission:]
+[CalExchangeUpdateGrantedDelegatePermissionsOperation executeWithAccount:withDelegate:withError:]
-[CalManagedAccount(DelegateHandler) addDelegate:withError:]
-[CalManagedAccount(DelegateHandler) getGrantedDelegateListWithError:]
-[CalManagedAccount(DelegateHandler) addGrantedDelegate:withError:]
-[CalManagedAccount(DelegateHandler) removeGrantedDelegate:withError:]
-[CalManagedAccount(DelegateHandler) toggleAllowWriteForGrantedDelegate:withError:]
-[CalManagedCalDAVAccount(DelegateHandler) addDelegate:withError:]
-[CalManagedCalDAVAccount(DelegateHandler) _getGrantedDelegateListWithError:allowExpand:]
-[CalManagedCalDAVAccount(DelegateHandler) getGrantedDelegateListWithError:]
-[CalManagedCalDAVAccount(DelegateHandler) _updateGrantedDelegatesListWithAdd:remove:withError:]
-[CalManagedCalDAVAccount(DelegateHandler) addGrantedDelegate:withError:]
-[CalManagedCalDAVAccount(DelegateHandler) removeGrantedDelegate:withError:]
-[CalManagedCalDAVAccount(DelegateHandler) toggleAllowWriteForGrantedDelegate:withError:]
-[CalManagedExchangeAccount(DelegateHandler) addDelegate:withError:]
-[CalManagedExchangeAccount(DelegateHandler) getGrantedDelegateListWithError:]
-[CalManagedExchangeAccount(DelegateHandler) addGrantedDelegate:withError:]
-[CalManagedExchangeAccount(DelegateHandler) removeGrantedDelegate:withError:]
-[CalManagedExchangeAccount(DelegateHandler) toggleAllowWriteForGrantedDelegate:withError:]
+[CalDelegateHandler refreshDelegateListForAccountWithObjectIDString:completionBlock:]
+[CalDelegateHandler addDelegate:toAccountWithObjectIDString:withError:]
+[CalDelegateHandler getGrantedDelegateListForAccountWithObjectIDString:withError:]
+[CalDelegateHandler addGrantedDelegate:toAccountWithObjectIDString:withError:]
+[CalDelegateHandler removeGrantedDelegate:toAccountWithObjectIDString:withError:]
+[CalDelegateHandler toggleAllowWriteForGrantedDelegate:toAccountWithObjectIDString:withError:]
+[CalDelegateHandler parseResponse:error:]
+[CalExchangeGetDelegatesOperation executeWithAccount:withError:]
+[CalExchangeGetDelegatesOperation _processResponse:forBinding:withDelegates:]
+[EKProtocolObject_Shared shouldCreatePartialObjectForObject:]
___copy_helper_block_
___destroy_helper_block_
-[CalPropFindSynchronousTask dealloc]
-[CalPropFindSynchronousTask _setCompletionBlockOnTask:]
___56-[CalPropFindSynchronousTask _setCompletionBlockOnTask:]_block_invoke
___copy_helper_block_42
___destroy_helper_block_43
-[CalPropFindSynchronousTask executePropFindTask:usingTaskManager:]
-[CalPropFindSynchronousTask responses]
-[CalPropFindSynchronousTask setResponses:]
-[CalPropFindSynchronousTask lastRedirectURL]
-[CalPropFindSynchronousTask setLastRedirectURL:]
-[CalDAVCalendarQueueableOperation initWithChangeRequest:sourceUID:andSession:]
-[CalDAVCalendarQueueableOperation initWithChangeRequest:andSession:]
___copy_helper_block_
___destroy_helper_block_
-[CalHolidayCalendarSubscriber dealloc]
___58-[CalHolidayCalendarSubscriber subscribeToHolidayCalendar]_block_invoke
___copy_helper_block_80
___destroy_helper_block_81
___Block_byref_object_copy_
___Block_byref_object_dispose_
-[CalHolidayCalendarSubscriber _subscribeToHolidayCalendar:withAccount:locationCode:languageCode:]
-[CalHolidayCalendarSubscriber _alreadySubscribedToCalendarWithLanguageCode:withLocationCode:orURL:]
-[CalHolidayCalendarSubscriber backupCalendarSymbolicColor]
-[CalHolidayCalendarSubscriber disableHolidayCalendars]
+[CalABListener sharedListener]
-[CalABListener _removeABObserver]
-[CalABListener _addressBookChanged:]
-[CalABListener dealloc]
-[CalABListener _runUpdateJobIfNecessaryInBackground]
-[CalABListener _cancelExistingUpdateJob]
-[CalABListener endListening]
-[CalABListener disableListener]
-[CalManagedEvent(ABPersonSupport) _getBirthdayCalendarWithPotentialLunarCalendarString:]
-[CalManagedEvent(ABPersonSupport) setBirthday:isYearless:isYearlessLeapMonthBirthday:name:lunarCalendarString:]
-[CalManagedEvent(ABPersonSupport) updateBirthdayEventWithSummary:birthday:linkID:abUID:isYearless:name:lunarCalendarString:]
___copy_helper_block_
___destroy_helper_block_
-[CalBirthdayListener dealloc]
-[CalBirthdayListener disableBirthdayCalendars]
-[CalBirthdayListener _addressBookChanged:]
-[CalBirthdayListener _unifiedPeopleAssociatedWithNotification:inContext:]
___74-[CalBirthdayListener _unifiedPeopleAssociatedWithNotification:inContext:]_block_invoke
-[CalBirthdayListener _masterEventsFromUIDs:inContext:]
-[CalBirthdayListener _runQuickUpdateInBackground:]
___51-[CalBirthdayListener _runQuickUpdateInBackground:]_block_invoke
___copy_helper_block_203
___destroy_helper_block_204
-[CalBirthdayListener _gatherUIDsFromPeople:allUIDs:preferredUIDs:]
-[CalBirthdayListener peopleFromDeletedUIDs:updatedUIDs:insertedRecords:inContext:]
-[CalBirthdayListener unifiedPersonHelperForEvent:linkIDsSeenSoFar:usingAddressBook:]
-[CalBirthdayListener unifiedPersonHelperForPerson:linkIDsSeenSoFar:]
-[CalBirthdayListener _peopleWithProperty:inAddressBook:]
-[CalBirthdayListener _peopleWithBirthdays]
-[CalBirthdayListener _existingBirthdayEventsInCalendars:context:]
-[CalBirthdayListener _deleteEventIfNecessary:forUnifiedPerson:birthdayEventDictionary:addressBookUID:preferredBirthday:context:]
-[CalBirthdayListener _deleteEventIfNecessary:forUnifiedPerson:birthdayEventDictionary:lunarBirthdayEventDictionary:addressBookUID:context:]
-[CalBirthdayListener _addressBookUIDForEvent:]
-[CalBirthdayListener populateExistingBirthdayEventsInCalendars:withPeople:birthdayEventDictionaryToPopulate:lunarBirthdayEventDictionaryToPopulate:context:]
-[CalBirthdayListener _calendarInWhichToCreateEventWithCalendars:calendarType:context:]
-[CalBirthdayListener putContactInAppropriateBirthdayCalendar:forExistingEvent:withCalendars:eventsCreatedSoFar:inContext:birthday:birthdayYearlessness:lunarCalendarString:]
-[CalBirthdayListener putContactInAppropriateBirthdayCalendar:withCalendars:eventsCreatedSoFar:inContext:]
-[CalBirthdayListener putContactInAppropriateBirthdayCalendar:basedOnExistingEvent:withCalendars:eventsCreatedSoFar:inContext:]
-[CalBirthdayListener createFacebookCalendarInContext:]
-[CalBirthdayListener createBirthdayCalendarInContext:]
-[CalBirthdayListener createEventInCalendar:withABUID:withLinkID:withSummary:withBirthday:withName:isYearless:isYearlessLeapMonthBirthday:lunarCalendarString:]
___43+[CalUnifiedPerson unifiedPersonForPeople:]_block_invoke
-[CalUnifiedPerson initWithPreferredPerson:linkedPeople:preferredBirthdayComponents:preferredAlternateBirthdayComponents:]
-[CalUnifiedPerson birthdayIsYearless]
-[CalUnifiedPerson alternateBirthdayIsYearless]
-[CalUnifiedPerson preferredBirthday]
-[CalUnifiedPerson preferredAlternateBirthday]
-[CalUnifiedPerson alternateBirthdayCalendarIdentifier]
-[CalUnifiedPerson setAlternateBirthdayCalendarIdentifier:]
-[CalBirthdayCalendarSource isBirthday]
+[CalEmail sendEmailTo:withSubject:withBody:]
+[CalEmail sendEmailTo:withSubject:withBody:delegate:]
+[CalEmail composeEmailTo:withSubject:withBody:from:]
+[CalEmail composeEmailTo:withSubject:withBody:from:delegate:]
+[CalEmail sendEmailTo:withSubject:withBody:withAttachment:andAttachmentFilename:]
+[CalEmail sendEmailTo:withSubject:withBody:withAttachment:andAttachmentFilename:delegate:]
+[CalEmail composeEmailTo:withSubject:withBody:from:withAttachment:andAttachmentFilename:]
+[CalEmail composeEmailTo:withSubject:withBody:from:withAttachment:andAttachmentFilename:delegate:]
_Encode64Table
_DecodeHexTable
_weekdays_code
_Decode64Table
GCC_except_table37
GCC_except_table38
GCC_except_table39
GCC_except_table1
GCC_except_table2
GCC_except_table26
GCC_except_table32
GCC_except_table3
GCC_except_table3
GCC_except_table4
GCC_except_table5
GCC_except_table6
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table15
GCC_except_table22
GCC_except_table20
GCC_except_table38
GCC_except_table7
GCC_except_table2
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table7
GCC_except_table15
GCC_except_table16
GCC_except_table20
GCC_except_table23
GCC_except_table27
GCC_except_table29
GCC_except_table30
GCC_except_table31
GCC_except_table33
GCC_except_table36
GCC_except_table38
GCC_except_table39
GCC_except_table40
GCC_except_table87
GCC_except_table106
GCC_except_table0
GCC_except_table0
GCC_except_table34
GCC_except_table41
GCC_except_table68
GCC_except_table83
GCC_except_table1
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table18
GCC_except_table19
GCC_except_table7
GCC_except_table12
GCC_except_table29
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table5
GCC_except_table6
GCC_except_table14
GCC_except_table17
GCC_except_table23
GCC_except_table24
GCC_except_table30
GCC_except_table31
GCC_except_table32
GCC_except_table33
GCC_except_table34
GCC_except_table48
GCC_except_table49
GCC_except_table50
GCC_except_table51
GCC_except_table2
GCC_except_table3
GCC_except_table7
GCC_except_table9
GCC_except_table10
GCC_except_table16
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table9
GCC_except_table16
GCC_except_table17
GCC_except_table19
GCC_except_table26
GCC_except_table28
GCC_except_table29
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table10
GCC_except_table14
GCC_except_table16
GCC_except_table20
GCC_except_table28
GCC_except_table32
GCC_except_table34
GCC_except_table0
GCC_except_table0
GCC_except_table0
GCC_except_table23
GCC_except_table49
GCC_except_table3
GCC_except_table1
GCC_except_table0
GCC_except_table0
GCC_except_table1
GCC_except_table2
GCC_except_table8
GCC_except_table9
GCC_except_table10
GCC_except_table0
GCC_except_table1
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table5
GCC_except_table8
GCC_except_table9
GCC_except_table25
GCC_except_table27
GCC_except_table0
GCC_except_table1
GCC_except_table2
GCC_except_table3
GCC_except_table5
GCC_except_table7
GCC_except_table8
GCC_except_table9
GCC_except_table10
GCC_except_table6
GCC_except_table7
GCC_except_table15
GCC_except_table26
GCC_except_table2
GCC_except_table11
GCC_except_table20
GCC_except_table91
GCC_except_table99
GCC_except_table118
GCC_except_table137
GCC_except_table49
GCC_except_table54
GCC_except_table153
GCC_except_table155
GCC_except_table23
GCC_except_table0
GCC_except_table1
GCC_except_table18
GCC_except_table24
GCC_except_table17
GCC_except_table25
GCC_except_table6
GCC_except_table7
GCC_except_table20
GCC_except_table27
GCC_except_table0
GCC_except_table9
GCC_except_table23
GCC_except_table25
GCC_except_table26
GCC_except_table32
GCC_except_table33
GCC_except_table34
GCC_except_table2
GCC_except_table3
GCC_except_table28
GCC_except_table42
GCC_except_table43
GCC_except_table5
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table11
GCC_except_table13
GCC_except_table17
GCC_except_table18
GCC_except_table19
GCC_except_table22
GCC_except_table24
GCC_except_table34
GCC_except_table36
GCC_except_table39
GCC_except_table0
GCC_except_table37
GCC_except_table38
GCC_except_table39
GCC_except_table40
GCC_except_table41
GCC_except_table3
GCC_except_table2
GCC_except_table7
GCC_except_table3
GCC_except_table19
GCC_except_table4
GCC_except_table6
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table64
GCC_except_table2
GCC_except_table4
GCC_except_table7
GCC_except_table8
GCC_except_table9
GCC_except_table10
GCC_except_table1
GCC_except_table53
GCC_except_table95
GCC_except_table4
GCC_except_table5
GCC_except_table0
GCC_except_table0
GCC_except_table2
GCC_except_table2
GCC_except_table0
GCC_except_table1
GCC_except_table21
GCC_except_table33
GCC_except_table5
GCC_except_table6
GCC_except_table0
GCC_except_table3
GCC_except_table16
GCC_except_table5
GCC_except_table9
GCC_except_table1
GCC_except_table9
GCC_except_table10
GCC_except_table26
GCC_except_table42
GCC_except_table43
GCC_except_table47
GCC_except_table55
GCC_except_table5
GCC_except_table6
GCC_except_table10
GCC_except_table3
GCC_except_table5
GCC_except_table10
GCC_except_table11
GCC_except_table13
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp297
___block_literal_global298
___block_descriptor_tmp
___block_descriptor_tmp31
___block_descriptor_tmp66
___block_descriptor_tmp
___block_literal_global
_weekdays
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp58
___block_descriptor_tmp79
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp228
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp199
___block_descriptor_tmp236
___block_descriptor_tmp242
___block_descriptor_tmp263
___block_literal_global264
___block_descriptor_tmp267
___block_descriptor_tmp291
___block_descriptor_tmp295
___block_descriptor_tmp316
___block_descriptor_tmp320
___block_descriptor_tmp439
___block_descriptor_tmp1115
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp33
___block_descriptor_tmp
___block_descriptor_tmp60
___block_descriptor_tmp64
___block_descriptor_tmp
___block_descriptor_tmp65
___block_descriptor_tmp335
___block_descriptor_tmp1162
___block_descriptor_tmp1167
___block_descriptor_tmp
___block_descriptor_tmp582
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp223
___block_literal_global224
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp63
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp74
___block_literal_global
___block_descriptor_tmp466
___block_literal_global467
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp134
___block_literal_global135
___block_descriptor_tmp
___block_descriptor_tmp47
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp877
___block_descriptor_tmp999
___block_literal_global1000
___block_descriptor_tmp1198
___block_literal_global1199
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp168
_getStateName.stateNames
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp4
___block_literal_global5
___block_descriptor_tmp19
___block_literal_global20
___block_descriptor_tmp29
___block_literal_global30
___block_descriptor_tmp33
___block_literal_global34
___block_descriptor_tmp37
___block_literal_global38
___block_descriptor_tmp41
___block_literal_global42
___block_descriptor_tmp45
___block_literal_global46
___block_descriptor_tmp49
___block_literal_global50
___block_descriptor_tmp56
___block_literal_global57
___block_descriptor_tmp60
___block_literal_global61
___block_descriptor_tmp80
___block_literal_global81
___block_descriptor_tmp
___block_descriptor_tmp34
___block_descriptor_tmp44
___block_descriptor_tmp48
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp176
___block_literal_global177
___block_descriptor_tmp178
___block_literal_global179
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp297
___block_literal_global298
___block_descriptor_tmp609
___block_descriptor_tmp665
___block_descriptor_tmp673
___block_descriptor_tmp677
___block_descriptor_tmp682
___block_descriptor_tmp685
___block_descriptor_tmp690
___block_descriptor_tmp694
___block_descriptor_tmp698
___block_literal_global699
___block_descriptor_tmp702
___block_descriptor_tmp705
___block_descriptor_tmp709
___block_descriptor_tmp743
___block_descriptor_tmp746
___block_descriptor_tmp751
___block_descriptor_tmp758
___block_descriptor_tmp762
___block_descriptor_tmp773
___block_descriptor_tmp778
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp14
___block_literal_global15
___block_descriptor_tmp25
___block_literal_global26
___block_descriptor_tmp334
___block_literal_global335
___block_descriptor_tmp344
___block_literal_global345
___block_descriptor_tmp361
___block_descriptor_tmp509
___block_literal_global510
___block_descriptor_tmp519
___block_literal_global520
___block_descriptor_tmp595
___block_literal_global596
___block_descriptor_tmp911
___block_literal_global912
___block_descriptor_tmp915
___block_literal_global916
___block_descriptor_tmp
___block_descriptor_tmp23
___block_descriptor_tmp115
___block_descriptor_tmp137
___block_literal_global
___block_descriptor_tmp145
___block_descriptor_tmp539
___block_literal_global540
___block_descriptor_tmp781
___block_descriptor_tmp866
___block_descriptor_tmp873
___block_descriptor_tmp1551
___block_literal_global1552
___block_descriptor_tmp1557
___block_descriptor_tmp1558
___block_literal_global1559
___block_descriptor_tmp1564
___block_descriptor_tmp
___block_descriptor_tmp267
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp278
___block_literal_global279
___block_descriptor_tmp649
___block_descriptor_tmp657
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp196
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp70
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp198
___block_descriptor_tmp227
___block_descriptor_tmp296
___block_descriptor_tmp301
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp106
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp207
___block_literal_global208
___block_descriptor_tmp256
___block_descriptor_tmp311
___block_literal_global312
___block_descriptor_tmp339
___block_descriptor_tmp342
___block_descriptor_tmp475
___block_descriptor_tmp492
___block_descriptor_tmp498
___block_descriptor_tmp502
___block_descriptor_tmp506
___block_descriptor_tmp
___block_descriptor_tmp56
___block_descriptor_tmp194
___block_descriptor_tmp201
___block_descriptor_tmp204
___block_descriptor_tmp207
___block_descriptor_tmp210
___block_descriptor_tmp213
___block_descriptor_tmp216
___block_descriptor_tmp
___block_descriptor_tmp977
___block_literal_global
___block_descriptor_tmp989
___block_literal_global990
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp165
___block_descriptor_tmp194
___block_descriptor_tmp204
___block_descriptor_tmp326
___block_descriptor_tmp
___block_descriptor_tmp131
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp97
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp138
___block_descriptor_tmp219
___block_descriptor_tmp290
___block_descriptor_tmp
___block_descriptor_tmp296
___block_descriptor_tmp
___block_descriptor_tmp167
___block_descriptor_tmp175
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp268
___block_descriptor_tmp283
___block_descriptor_tmp302
___block_descriptor_tmp344
___block_descriptor_tmp758
___block_descriptor_tmp1126
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp348
___block_descriptor_tmp374
___block_descriptor_tmp438
___block_descriptor_tmp472
___block_descriptor_tmp533
___block_descriptor_tmp572
___block_descriptor_tmp657
___block_descriptor_tmp722
___block_descriptor_tmp736
___block_descriptor_tmp749
___block_descriptor_tmp757
___block_descriptor_tmp765
___block_descriptor_tmp769
___block_descriptor_tmp818
___block_descriptor_tmp822
___block_descriptor_tmp826
___block_descriptor_tmp830
___block_descriptor_tmp843
___block_descriptor_tmp869
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp19
___block_literal_global20
___block_descriptor_tmp403
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp28
___block_descriptor_tmp70
___block_descriptor_tmp185
___block_descriptor_tmp225
___block_descriptor_tmp249
___block_descriptor_tmp272
___block_descriptor_tmp315
___block_descriptor_tmp332
___block_descriptor_tmp373
___block_descriptor_tmp568
___block_descriptor_tmp573
___block_descriptor_tmp603
___block_descriptor_tmp768
___block_descriptor_tmp773
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp80
___block_descriptor_tmp88
___block_descriptor_tmp104
___block_descriptor_tmp107
___block_descriptor_tmp
___block_descriptor_tmp59
___block_descriptor_tmp66
___block_descriptor_tmp69
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp39
___block_descriptor_tmp47
___block_descriptor_tmp52
___block_descriptor_tmp57
___block_descriptor_tmp64
___block_descriptor_tmp176
___block_descriptor_tmp189
___block_descriptor_tmp204
___block_descriptor_tmp
___block_descriptor_tmp142
___block_descriptor_tmp269
___block_descriptor_tmp368
___block_descriptor_tmp
___block_descriptor_tmp34
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp334
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp15
___block_literal_global16
___block_descriptor_tmp23
___block_literal_global24
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp282
___block_descriptor_tmp301
___block_descriptor_tmp336
___block_descriptor_tmp357
___block_descriptor_tmp533
___block_descriptor_tmp589
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp125
___block_literal_global126
___block_descriptor_tmp
___block_descriptor_tmp14
___block_descriptor_tmp25
___block_descriptor_tmp28
___block_descriptor_tmp31
___block_descriptor_tmp34
___block_descriptor_tmp37
___block_literal_global
___block_descriptor_tmp38
___block_literal_global39
___block_descriptor_tmp
___block_descriptor_tmp44
___block_descriptor_tmp
___block_descriptor_tmp83
___block_descriptor_tmp
___block_descriptor_tmp168
___block_literal_global
___block_descriptor_tmp205
___block_descriptor_tmp443
___block_literal_global444
_OBJC_IVAR_$_CaliMIPCancelOperation._attendeeEmails
_OBJC_IVAR_$_CaliMIPReplyOperation._organizerEmail
_OBJC_IVAR_$_CaliMIPReplyOperation._replyStatus
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._attachment
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._eventIsAllDay
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._eventStartDate
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._eventTimeZone
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._eventIsFloating
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._eventTitle
_OBJC_IVAR_$_CaliMIPPersistDetailsOperation._organizerName
_OBJC_IVAR_$_CALIdentityManager._agentMeCardSemaphore
_OBJC_IVAR_$_CALIdentityManager._calMeCard
_OBJC_IVAR_$_CALIdentityManager._myEmailsForUnitTests
_OBJC_IVAR_$_CalSession._objectID
_OBJC_IVAR_$_CalSession._sessionID
_OBJC_IVAR_$_CalSQLCDChangeTracker._storageURL
_OBJC_IVAR_$_CalSQLCDChangeTracker._sourceURL
_OBJC_IVAR_$_CalSQLCDChangeTracker._persistentStoreCoordinator
_OBJC_IVAR_$_CalOperationQueue._objectID
_OBJC_IVAR_$_CalOperationQueue._sessionID
_OBJC_IVAR_$_CalOperation._sessionID
_OBJC_IVAR_$_CalOperation._sessionIDAsObjectID
_OBJC_IVAR_$_CaliMIPOperation._attendeeObjectIDs
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._mismatches
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._addedOrModifiedContainers
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._removedURLs
_OBJC_IVAR_$_CalCalDAVSynchronousTaskGroup._completed
_OBJC_IVAR_$_CalCalDAVSynchronousTaskGroup._error
_OBJC_IVAR_$_CalCalDAVSynchronousTaskGroup._taskGroup
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._parentAccountID
_OBJC_IVAR_$_CalManagedAttachment._filename
_OBJC_IVAR_$_CaliMIPRequestOperation._isNewRequest
_OBJC_IVAR_$_CalMDQuery._query
_OBJC_IVAR_$_CalMDQuery._scope
_OBJC_IVAR_$_CalDAVChangeRequestsConsumer._queue
_OBJC_IVAR_$_CalDAVChangeRequestsConsumer._lastSequenceNumberProcessed
_OBJC_IVAR_$_CalDAVChangeRequestsConsumer._lastChangeRequestTypeProcessed
_OBJC_IVAR_$_CalDAVChangeRequestsConsumer._lastLocalUIDProcessed
_OBJC_IVAR_$_CalChangeMonitor._calendarCacheURL
_OBJC_IVAR_$_CalChangeMonitor._notReallyChanged
_OBJC_IVAR_$_CalChangeMonitor._sync_queue
_OBJC_IVAR_$_CalChangeMonitor._syncTask
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._forceSerializeTimezones
_OBJC_IVAR_$_CalMeCardListener._cacheInitializationQueue
_OBJC_IVAR_$_CalMeCardListener._cacheAccessQueue
_OBJC_IVAR_$_CalMeCardListener._calMeCard
_OBJC_IVAR_$_CalMeCardListener._initializedInMemoryCache
_OBJC_IVAR_$_CaliMIPSession._operationQueue
_OBJC_IVAR_$_CalConflictResults._conflicts
_OBJC_IVAR_$_CalConflictResults._userResponse
_OBJC_IVAR_$_CalSingleSynchronousTask._completed
_OBJC_IVAR_$_CalSingleSynchronousTask._error
_OBJC_IVAR_$_CalUnifiedPerson._alternateBirthdayCalendarIdentifier
_getNewUID.num
__isMainApp
_sSleepRec
+[CalManagedStore _notifyOnImportTotalCalendars:completedCalendars:partialCalendarTotalItems:completedItems:].savedTotalCalendars
_snoozeTime
__bagSingleton
_utcTimeZone.utc
_utcTimeZone.onceToken
_CALPropertiesMandatingRSVP
_CALPropertiesIncrementingSequence
_CALPropertiesImpactingDetachedEvents
_CALPropertiesNotToBeLookedUpInParent
_CALPropertiesDesignatingSignificance
_CALPropertiesToAlwaysUpdateOnDetachedEvents
_CALPropertiesToIgnoreWhenUpdatingDetachedEvents
__formattersCache
__datesFormats
__datesWithYear
__fullDatesWithoutYear
__datesWithoutYear
+[ABPerson(CALExtension) personCache]._sPersonCache
+[ABPerson(CALExtension) personCache].onceToken
+[ABAddressBook(CALExtension) _haveABEntitlement].once
+[ABAddressBook(CALExtension) _haveABEntitlement].entitlements
+[ABAddressBook(CALExtension) _haveABEntitlement].isAllowed
-[CoreRecurrenceRule(HumanReadableRepeatDescription) humanReadableDescriptionForStartDate:].readableWeekDayArray
-[CoreRecurrenceRule(HumanReadableRepeatDescription) humanReadableDescriptionForStartDate:].readableMonthArray
__cache
+[CoreCalendarsManager defaultManager].didInitializeDefaultManager
__defaultCalMgr
+[CALIdentityManager defaultManager].onceToken
__identitySingleton
__defaultFactory
__calURLPublishOperationFactory
+[CoreRecurrenceRule daysOfWeek].sDaysOfWeek
-[CalFileCDChangeTracker mergeChangesFrom:to:].singletonEntities
__defaultManager
_iTIPImplicitLogging
_iTIPDetailedLogging
_noboQueue
_sNotifier
__defaultMonitor
__monitorDisabled
_sSessionPool
+[CalSession knownNonNodeSessionIDs].knownNonNodeSessionIDs
+[CalSession knownNonNodeSessionIDs].onceToken
__sessionUserAgent
+[CalExchangeSyncAccountOperation findFolderResponseShape].__responseShape
+[CalExchangeSyncAccountOperation findFolderRestriction].__restriction
+[CalExchangeSyncAccountOperation getFolderResponseShape].__responseShape
+[CalPersistentOperationProducer registerForContextNotifications].__sharedInstance
-[CalPersistentOperationProducer _hasChangesRequiringReschedule:].keysNotRequiringReschedule
-[CalPersistentOperationProducer _hasChangesRequiringReschedule:].onceToken
+[CalExchangeGetItemOperation(Conversion) iCalendarDateFormatter].sDateFormatter
+[CalExchangeGetItemOperation(Conversion) iCalendarDateFormatter].onceToken
+[CalExchangeGetItemOperation(Conversion) iCalendarDateTimeFormatter].sDateFormatter
+[CalExchangeGetItemOperation(Conversion) iCalendarDateTimeFormatter].onceToken
+[CalExchangeGetTaskOperation responseShape].__responseShape
+[CalExchangeGetCalendarItemOperation responseShape].__responseShape
_sNSNumbersForFreeBusyTypes
_sCacheManager
___UTCSerializableTimeZone
+[CalExchangeGetEffectiveRightsOperation responseShape].__responseShape
+[CalMailMonitor registerForContextNotifications].__sharedInstance
_sharedController
_logScheduleChanges
___FormattersInitialized
___ICUFormats
___DateFormatters
___SharedFormatter
___CalendarDayFormatter
___IntervalFormatters
___WeekendDays
__legacyPreLionColorToColorNameMap
__colorNamesOrderedForAssignment
__defaultCalendarColorNames
__colorNameMapping
__textColorNameMapping
+[CALColorModel displayColorForSymbolicName:].sColorDictionary
+[CALColorModel displayColorForSymbolicName:].onceToken
___principalsCache
+[CalDAVKerberosHelper principalsForHost:user:password:].predicate
+[CaliCalendarAnonymizer sharedAnonymizedStrings].once
+[CaliCalendarAnonymizer sharedAnonymizedStringsCount].once
+[CaliCalendarAnonymizer sharedAnonymizedDomainName].once
+[CaliCalendarAnonymizer sharedAnonymizedDomainName].domain
_anonString_block_invoke.count
_anonSummary_block_invoke_2.count
_anonDescription_block_invoke_3.count
_anonName_block_invoke_6.count
_anonEmail_block_invoke_7.count
_anonLocation_block_invoke_8.count
+[CalManagedAccount enabledForAnyDataTypeKeys].onceToken
+[CalManagedAccount enabledForAnyDataTypeKeys].keys
+[CalManagedAccount enabledForCalendarKeys].onceToken
+[CalManagedAccount enabledForCalendarKeys].keys
+[CalManagedAccount enabledForRemindersKeys].onceToken
+[CalManagedAccount enabledForRemindersKeys].keys
-[CalManagedAttendee attributesToApplyForMerge].__attributesToApplyForMerge
-[CalManagedAttendee attributesToCompareForMerge].__attributesToCompareForMerge
+[CalManagedBirthdayCalendar singletonContainerSource].onceToken
+[CalManagedBirthdayCalendar singletonContainerSource].virtualSource
+[CaliMIPRequestOperation managedEventHasChangeRequringiMIPReschedule:].keysRequiringReschedule
+[CaliMIPRequestOperation managedEventHasChangeRequringiMIPReschedule:].onceToken
-[CalManagedCalendar attributesToCompareForMerge].__attributesToCompareForMerge
-[CalManagedCalendarItem keysOnlyRelevantToNetworkDetails].cachedKeys
-[CalManagedCalendarItem keysOnlyRelevantToNetworkDetails].onceToken
+[CalManagedCalendarItem recognizedICSProperties].recognizedICSProperties
+[CalManagedCalendarItem recognizedICSProperties].onceToken
+[CalManagedCalendarItem recognizedICSPropertyParameterMap].recognizedICSPropertyParameterMap
+[CalManagedCalendarItem recognizedICSPropertyParameterMap].onceToken
-[CalManagedCalendarItem attributesToCompareForMerge].__attributesToCompareForMerge
-[CalManagedCalendarItem relationshipsToCompareForMerge].__relationshipsToCompareForMerge
+[CalManagedCalendarItem withCalendarInTimezoneString:do:].reusedCalendar
+[CalManagedCalendarItem withCalendarInTimezoneString:do:].onceToken
+[CalManagedCalendarItem _ruleForRuleString:].cachedRules
+[CalManagedCalendarItem _ruleForRuleString:].onceToken
_floatingDateCustomCalendar
_floatingDatePredicate
+[CalManagedEvent recognizedICSProperties].recognizedICSProperties
+[CalManagedEvent recognizedICSProperties].onceToken
+[CalManagedEvent recognizedICSPropertyParameterMap].recognizedICSPropertyParameterMap
+[CalManagedEvent recognizedICSPropertyParameterMap].onceToken
-[CalManagedEvent filenameWithoutExtension].dateFormatter
-[CalManagedEvent filenameWithoutExtension].cachedDateStrings
-[CalManagedEvent filenameWithoutExtension].onceToken
-[CalManagedEvent attributesToCompareForMerge].__attributesToCompareForMerge
-[CalManagedEvent relationshipsToCompareForMerge].__relationshipsToCompareForMerge
+[CalManagedEvent(CalendarSourceIPI) stringIDForAllDayDate:].alldayIDCache
+[CalManagedEvent(CalendarSourceIPI) stringIDForAllDayDate:].onceToken
+[CalManagedEvent(CalendarSourceIPI) stringIDForFloatingDateTime:].stringIDCache
+[CalManagedEvent(CalendarSourceIPI) stringIDForFloatingDateTime:].onceToken
+[CalManagedLocalCalendar singletonContainerSource].onceToken
+[CalManagedLocalCalendar singletonContainerSource].virtualSource
+[CalManagedSubscriptionCalendar singletonContainerSource].onceToken
+[CalManagedSubscriptionCalendar singletonContainerSource].virtualSource
+[CalManagedTask recognizedICSProperties].recognizedICSProperties
+[CalManagedTask recognizedICSProperties].onceToken
-[CalManagedTask attributesToCompareForMerge].__attributesToCompareForMerge
__isCalendarAgent
___LogChildContextStuff
-[CalManagedObjectContext attachChildContextForIdentifier:secondaryIdentifier:].configureLogging
__defaultManagedObjectModel
__defaultPersistentStoreCoordinator
-[CalEventOccurrence initWithManagedEvent:date:from:to:].accountPluginIDCache
-[CalEventOccurrence initWithManagedEvent:date:from:to:].onceToken
__keyToEntityTranslation
__changedPropertiesToCheck
__standardPredicate
__localUIDPredicate
__excludingLocalUIDPredicate
__eventOccurrencePredicate
-[CalEventOccurrenceCache cacheSerialQueue].cacheSerialQueue
-[CalEventOccurrenceCache cacheSerialQueue].onceToken
___50-[CalEventOccurrenceCache requestRange:fromReset:]_block_invoke276.userContext
+[CalAlertChangeMonitor initialize].onceToken
__defaultMonitor
__blackListedProperties
_CalAlertsDisabled
+[CalManagedStore _notifyOnImportTotalCalendars:completedCalendars:partialCalendarTotalItems:completedItems:].savedCompletedCalendars
+[CalManagedStore(AccountDeletion) processAccountsMarkedForDeletion].accountDeleteQueue
+[CalManagedStore(AccountDeletion) processAccountsMarkedForDeletion].onceToken
__defaultMonitor
__disabledForUnitTests
__sExitHandlerCalled
+[CalDAVChangeRequestsConsumer sharedInstance].__sharedInstance
+[CalDAVChangeRequestsProducer sharedInstance].__sharedInstance
__defaultMonitor
___knownNamespaces
___knownNamespaces
__defaultAlarmsDisabledForUnitTest
+[CalManagedAlarm recognizedICSProperties].recognizedICSProperties
+[CalManagedAlarm recognizedICSProperties].onceToken
+[CalManagedAlarm recognizedICSPropertyParameterMap].recognizedICSPropertyParameterMap
+[CalManagedAlarm recognizedICSPropertyParameterMap].onceToken
_pendingScript
__isCurrentlyRunningAScript
__defaultCenter
_icalInvitationNotificationsDisabled
_icalSharedCalendarNotificationsDisabled
+[CalUserNotificationCenterHelper defaultHelper]._helper
+[CalUserNotificationCenterHelper defaultHelper].onceToken
__defaultListener
-[CalManagedCalDAVError copyScrubbedUserInfoForError:]._errorKeysToPassThrough
-[CalManagedCalDAVError copyScrubbedUserInfoForError:].onceToken
+[CalAccountMonitor initialize].onceToken
___CalAccountMonitorSingleton
_CalAccountMonitorDisabled
+[CalMeCardListener sharedListener].__sharedInstance
+[CaliMIPSession sharedInstance].sharedInstance
+[CaliMIPSession sharedInstance].onceToken
__defaultProvider
__singleton
___sharedInstance
+[CalSharedCalendarInviteMonitor defaultMonitor].__sharedInstance
+[CalPersistence initialize].onceToken
__databaseConnectionBeingEstablishedGroup
__processShouldExitOnDatabaseReset
__isFullyInitialized
__defaultCalendarPersistence
__managedObjectContext
__unitTesting
__proxy
+[CalPersistence _startCoreDataXPCServer:].retryCounter
+[CalChronometry configureChronometry].__DidInitialize
___ActiveCalendar
___ActiveTimeZone
___ActiveLocale
_s_overlayCalendarGeneration
+[CalChronometry overlayCalendar].onceToken
+[CalHolidayCalendarSubscriber defaultSubscriber]._subscriber
+[CalHolidayCalendarSubscriber defaultSubscriber].onceToken
+[CalBirthdayListener sharedListener].__sharedInstance
_CALAbbrevDateFormat
_CALAbbrevDateWithoutYearFormat
_CALAbbrevDayOfWeekFormat
_CALAbbrevDayOfWeekWithAbbrevDateFormat
_CALAbbrevDayOfWeekWithDayOfMonthFormat
_CALAbbrevDayOfWeekWithFullDateFormat
_CALAbbrevDayOfWeekWithFullDateWithoutYearFormat
_CALAbbrevMonthFormat
_CALAbbrevMonthWithDay
_CALAllDayNonDetachmentConfirm
_CALAttendeeOccurrenceDeletion
_CALAttendeeOccurrenceDetachment
_CALBagWillResetNotification
_CALChangeDateTo
_CALChangeMonthDayFrom
_CALChangeMonthDayTo
_CALChangeMonthFrom
_CALChangeMonthTo
_CALChangeNotification
_CALChangeTrackerArrayKey
_CALChangeWeekDayFrom
_CALChangeWeekDayTo
_CALDateWithTimeZone
_CALDavChangesQueuedNotification
_CALDavChangesQueuedSharedUIDsKey
_CALDayOfMonthFormat
_CALDaysInMonth
_CALFullDateAndTimeFormat
_CALFullDateFormat
_CALFullDateWithoutYearFormat
_CALFullDayOfWeekFormat
_CALFullMonthFormat
_CALFullMonthWithDay
_CALFullTimeFormat
_CALFullYearFormat
_CALFullYearMonth
_CALHourFormat
_CALHourMinutesWithoutAMPMFormat
_CALHourWithoutAMPMFormat
_CALIsChangingDay
_CALIsDebileCase
_CALIsModifyingTZ
_CALIsSlicingEntity
_CALLongDateFormat
_CALLongDayOfWeekAbbrevDateWithoutYearFormat
_CALLongDayOfWeekWithDayOfMonthFormat
_CALMainOccurrenceDeletion
_CALMainOccurrenceDetachment
_CALOccurrenceChangedDate
_CALOccurrenceDeletion
_CALOccurrenceDetachment
_CALOccurrencePrintingAllDayEvent
_CALOccurrencePrintingBirthday
_CALOccurrencePrintingCompletion
_CALOccurrencePrintingDescription
_CALOccurrencePrintingDue
_CALOccurrencePrintingDuration
_CALOccurrencePrintingLocation
_CALOccurrencePrintingOccurrence
_CALOccurrencePrintingStartDate
_CALOccurrencePrintingSummary
_CALOccurrencePrintingURL
_CALOverlappingAdjacentOccurrence
_CALOverlappingAlarm
_CALPrefCheckedCalendarMigratedKey
_CALPrefDefaultAlarmSound
_CALPrefDefaultAlarmTimeInitialValue
_CALPrefDefaultAlarmsTime
_CALPrefDefaultFirstMinuteOfWorkHours
_CALPrefFirstMinuteOfWorkHours
_CALPrefSubscriptionCalendarKeychainsMigrated
_CALPrefiCalVersion
_CALPresentErrorKey
_CALPublishCheckCompatibilityMode
_CALPublishDetectedCompatibilityProblem
_CALPublishNameInfo
_CALPublishUseCompatibilityMode
_CALQueryChangeOriginKey
_CALQueryChangedNotification
_CALQueryEntityTypesValue
_CALQueryIndexedStringValue
_CALQueryPropertyQueriesValue
_CALQueryRepositoriesValue
_CALQuerySearchPropertyValue
_CALRepositoryContentChangedNotification
_CALRepositoryParametersChangedNotification
_CALShortDateAndTimeFormat
_CALShortDateFormat
_CALShortMonthWithDay
_CALShortTimeFormat
_CALSourceStatusChangeNotification
_CALViewAddedOccurrencesKey
_CALViewChangedOccurrencesNewKey
_CALViewChangedOccurrencesOldKey
_CALViewContentChangedNotification
_CALViewRemovedOccurrencesKey
_CalAccountDefaultRefreshInterval
_CalAccountIDKey
_CalAccountIsEnabledForCalendarKey
_CalAccountIsEnabledForRemindersKey
_CalAccountIsEnabledKey
_CalAccountsEnabledKey
_CalAddDelegateMessageTracerDomain
_CalAddGrantedDelegateMessageTracerDomain
_CalAddPersistenceStorePermissionError
_CalAddPersistenceStorePermissionErrorKey
_CalAgentReconnectNotification
_CalAlarmActionDisplay
_CalAlarmActionEmail
_CalAlarmActionProcedure
_CalAlarmActionSound
_CalAlarmCalendarIDKey
_CalAlarmsWithResolvedBookmarksKey
_CalAttachmentKey
_CalAttachmentObjectIDsKey
_CalAttendeeEmailsKey
_CalAttendeeObjectIDsKey
_CalBirthdayFacebookTitle
_CalByteBufferAppendCString
_CalByteBufferData
_CalByteBufferWithCapacity
_CalCachedMeCardChangedNotification
_CalCalDAVAccountCalendarHomePathKey
_CalCalDAVAccountCalendarHomePushKeyKey
_CalCalDAVAccountDefaultCalendarPathKey
_CalCalDAVAccountDropBoxPathKey
_CalCalDAVAccountInboxCTagKey
_CalCalDAVAccountInboxPathKey
_CalCalDAVAccountNotificationCollectionCTagKey
_CalCalDAVAccountNotificationCollectionPathKey
_CalCalDAVAccountNotificationURLStringKey
_CalCalDAVAccountOutboxPathKey
_CalCalDAVAccountPrincipalURLKey
_CalCalDAVAccountPushTransportsKey
_CalCalDAVCalendarAffectingAvailabilityKey
_CalCalDAVCalendarCTagKey
_CalCalDAVCalendarCanBePublishedKey
_CalCalDAVCalendarColorEditableKey
_CalCalDAVCalendarOwnerAddressesKey
_CalCalDAVCalendarOwnerDisplayNameKey
_CalCalDAVCalendarOwnerPrincipalPathKey
_CalCalDAVCalendarPathKey
_CalCalDAVCalendarPushKeyKey
_CalCalDAVCalendarRenameableKey
_CalCalDAVCalendarTimeZoneKey
_CalCalDAVErrorDomain
_CalCalendarAlarmsDisabledKey
_CalCalendarCheckedKey
_CalCalendarIsSubscriptionKey
_CalCalendarServerAccessConfidential
_CalCalendarServerAccessPrivate
_CalCalendarServerAccessPublic
_CalCalendarServerAccessRestricted
_CalCalendarShareDefaultAlarmSettingsKey
_CalCalendarStoreChangedExternallyNotification
_CalCalendarStoreChangedNotification
_CalCalendarStoreCreationDate
_CalCalendarStorePersistenceAlarmUIDKey
_CalCalendarStorePersistenceCalendarItemUIDKey
_CalCalendarStorePersistenceCalendarUIDKey
_CalCalendarStorePersistenceErrorDomain
_CalCalendarStorePersistenceGroupUIDKey
_CalCalendarStorePersistenceManagedObjectTypeKey
_CalCalendarStorePersistenceValidationErrorsKey
_CalCalendarStoreResetExternallyNotification
_CalCalendarStoreResetNotification
_CalCalendarTypeBirthday
_CalCalendarTypeCalDAV
_CalCalendarTypeExchange
_CalCalendarTypeIMAP
_CalCalendarTypeLocal
_CalCalendarTypeSubscription
_CalCalendarUIDsWithOnlyItemChanges
_CalCalendarsChangedExternallyNotification
_CalCalendarsChangedNotification
_CalCalendarsDirectoryKey
_CalCalendarsForUpdatedItemsKey
_CalChangedAlarmsKey
_CalChangedItemsAreServerOnlyKey
_CalChangedOptionalAttendeesKey
_CalChangedRequiredAttendeesKey
_CalChangedResourcesKey
_CalChangedStartLocation
_CalChangedStructuredLocation
_CalDAVErrAccountName
_CalDAVErrBadRecipients
_CalDAVErrChangeRequestManagedObjectID
_CalDAVErrCollectionFreeSize
_CalDAVErrDisplayName
_CalDAVErrEventManagedObjectID
_CalDAVErrFileName
_CalDAVErrFromRefresh
_CalDAVErrGroupIdentifier
_CalDAVErrHttpStatus
_CalDAVErrIsCalDAVDownloadDropBoxFileQueueableOperationKind
_CalDAVErrIsCalDAVEntityQueueableOperationKind
_CalDAVErrOccurrenceID
_CalDAVErrOperationName
_CalDAVErrParentTitle
_CalDAVErrPrincipalManagedObjectID
_CalDAVErrRequestSize
_CalDAVQueueOperationEndedNotification
_CalDAVSessionDebugFailedOperationsKey
_CalDAVSessionDebugOperationsKey
_CalDAVSessionDebugQueueStoppedKey
_CalDAVSessionErrorNotification
_CalDAVSourceCanSynchronize
_CalDAVSourceCanWrite
_CalDAVSourceCanWriteReply
_CalDAVSourceSupportsAttendeeSearch
_CalDateIntervalShortMonthDay
_CalDateIntervalVeryShortMonthDay
_CalDateIntervalYearMonth
_CalDateIntervalYearMonthDay
_CalDecodeBase64
_CalDecodeQuotedPrintableForText
_CalDeletedDuplicateDelegatesNotification
_CalDeletedEventOccurrencesKey
_CalDeletedRecordsKey
_CalDisableCoreDataOverXPC
_CalDistributedAttachmentDidFinishDownloadingNotification
_CalDistributedAutoPublishNeededNotification
_CalDistributedCalendarStoreChangedNotification
_CalDistributedCalendarStoreResetNotification
_CalDistributedCalendarsChangedNotification
_CalDistributedEventsChangedNotification
_CalDistributedGroupsChangedNotification
_CalDistributedManagedObjectsChangedFromRemoteContext
_CalDistributedMigrationDelayedNotification
_CalDistributedMigrationFinishedNotification
_CalDistributedMigrationHaltedNotification
_CalDistributedSchemaMigrationBegunNotification
_CalDistributedSchemaMigrationFinishedNotification
_CalDistributedSchemaMigrationProgressNotification
_CalDistributedTasksChangedNotification
_CalEncodeBase64
_CalEncodeBase64WithoutLineBreaks
_CalEntityNamesKey
_CalEntityPropertyPermissionNone
_CalEntityPropertyPermissionRead
_CalEntityPropertyPermissionWrite
_CalEntitySourceIdsKey
_CalEventIsAllDayKey
_CalEventIsFloatingKey
_CalEventOccurrenceCacheChangedRangeKey
_CalEventOccurrenceCacheDidChangeFromContextChangeNotification
_CalEventOccurrenceCacheDidChangeNotification
_CalEventStartDateKey
_CalEventTimeZoneKey
_CalEventTitleKey
_CalEventsChangedExternallyNotification
_CalEventsChangedNotification
_CalExchangeAccountExternalServerURLKey
_CalExchangeAccountLoginKey
_CalExchangeAccountMailboxKey
_CalExchangeAccountRefreshIntervalKey
_CalExchangeAccountServerURLKey
_CalExchangeCalendarChangeKeyKey
_CalExchangeCalendarDistinguishedKey
_CalExchangeCalendarFolderIdKey
_CalExchangeCalendarParentFolderIdKey
_CalExchangeCalendarSyncStateKey
_CalExchangeDeletedItemsFolderIdKey
_CalExchangeDeletedItemsFolderSyncStateKey
_CalExchangeErrorDomain
_CalExchangeMaxItemsToGet
_CalExchangeQueueOperationEndedNotification
_CalExchangeRootFolderIdKey
_CalExchangeSessionDebugOfflineKey
_CalExchangeSessionDebugOperationsKey
_CalExchangeSessionErrorNotification
_CalFTPErrorDomain
_CalFTPStatusCode_RequestedActionNotTaken_FileUnavailable
_CalFailedOperationKey
_CalFreeBusyCacheAddressToEventBucketsDictionaryKey
_CalFreeBusyCacheAddressToFreeBusySpanArraysDictionaryKey
_CalFreeBusyCacheEventSharedUidKey
_CalFreeBusyCacheExpiredSharedUIDsSet
_CalFreeBusyCacheExpiryNotification
_CalFreeBusyCacheTimeRangeKey
_CalFreeBusyResponseMessageTracerDomain
_CalGenerateUIDString
_CalGetCalendarItemMessageTracerDomain
_CalGetMailboxOperationMessageTracerDomain
_CalGetTaskMessageTracerDomain
_CalGetUserAvailabilityMessageTracerDomain
_CalGroupAccountIDKey
_CalGroupCalendarsKey
_CalGroupDelegateKey
_CalGroupExpandedKey
_CalGroupsChangedExternallyNotification
_CalGroupsChangedNotification
_CalIAAccountCreatedNotification
_CalIAAccountDeletedNotification
_CalImportContextSaveFailedIssueKey
_CalImportDangerousAlarmsIssueKey
_CalImportExchangeOverlapIssueKey
_CalImportMakeExchangeCompatibleIssueKey
_CalImportNoVCalendarIssueKey
_CalImportantAlarmIDKey
_CalImportantMessageIDKey
_CalInsertedEventOccurrencesKey
_CalInsertedRecordsKey
_CalIsNewRequestKey
_CalLegacyFileImportIdentifier
_CalLocalCalendarEditableKey
_CalLocaleDidChangeNotification
_CalMailDidModifyEWSCalendarItem
_CalManagedAttendeeStatusAccepted
_CalManagedAttendeeStatusCompleted
_CalManagedAttendeeStatusDeclined
_CalManagedAttendeeStatusDelegated
_CalManagedAttendeeStatusInProcess
_CalManagedAttendeeStatusNeedsAction
_CalManagedAttendeeStatusTentative
_CalManagedAttendeeStatusUninvited
_CalManagedCalDAVError_Key_Address
_CalManagedCalDAVError_Key_CommonName
_CalManagedCalDAVError_Key_Email
_CalManagedExchangeError_Key_CalendarItemObjectID
_CalManagedExchangeError_Key_IsCalRevertableOperation
_CalManagedExchangeError_Key_IsCalWriteCalendarItemOperation
_CalManagedExchangeError_Key_OperationObjectID
_CalManagedExchangeError_Key_PrincipalObjectID
_CalManagedObjectContextDidAddChildContextNotification
_CalManagedObjectContextDidMergeChangesNotification
_CalManagedObjectContextDidRemoveChildContextNotification
_CalManagedObjectModelExtension
_CalManagedObjectsChangedFromRemoteContext
_CalMeCardChangedNotification
_CalMigrationErrorNotification
_CalMigrationStartedNotification
_CalNoActualChangesChangesKey
_CalNodeColorKey
_CalNodeEnabledKey
_CalNodeNotesKey
_CalNodeOrderKey
_CalNodePublicationKey
_CalNodeStatusChangeNotification
_CalNodeTitleKey
_CalNodeTypeCalDAVAccount
_CalNodeTypeExchangeAccount
_CalNodeTypeIMAPGroup
_CalNodeTypeKey
_CalNodeTypeLocalGroup
_CalNodeTypeMigrationGroup
_CalNodeTypeSubscriptionGroup
_CalNodeUIDKey
_CalNotificationSharedCalendarInvitesChanged
_CalNotificationUpdateDelete
_CalNotificationUpdateInsert
_CalNotificationUpdateMessageCount
_CalNotificationsCountKey
_CalNotificationsDidChangeNotification
_CalOAuth2Type
_CalOAuthType
_CalOccurrenceDateFromDatePart
_CalOccurrenceDateFromOccurrenceID
_CalOperationQueueErrorKey
_CalOperationQueueOperationKey
_CalOperationQueueStatusKey
_CalOrganizerEmailKey
_CalOrganizerNameKey
_CalOriginatorIDKey
_CalPartStatFromICSPartStat
_CalPasswordChangedNotification
_CalPersistentOperationKey
_CalPrefHighWaterWeeks
_CalPrefLowWaterWeeks
_CalPrefWeeksBeforePruned
_CalPreviousItemIDKey
_CalPrincipalAutoDiscoveryKey
_CalPrincipalAutoScheduleSupportKey
_CalPrincipalCalendarHomeSyncSupportedKey
_CalPrincipalCalendarProxySupportKerberosKey
_CalPrincipalCalendarServerPrivateEventsSupportKey
_CalPrincipalCalendarUserAddressesKey
_CalPrincipalDelegateKey
_CalPrincipalExpandPropertyReportSupportKey
_CalPrincipalFullNameKey
_CalPrincipalInboxAvailabilitySupportKey
_CalPrincipalIsInSeparateWindowKey
_CalPrincipalIsManuallyConfiguredKey
_CalPrincipalKeepOfflineKey
_CalPrincipalKerberosKey
_CalPrincipalLoginKey
_CalPrincipalMainPrincipalKey
_CalPrincipalManagedAttachmentSupportedKey
_CalPrincipalOverrideBaseURLKey
_CalPrincipalPrivateCommentsSupportKey
_CalPrincipalPushDisabledKey
_CalPrincipalRefreshDateKey
_CalPrincipalRefreshIntervalKey
_CalPrincipalRequestCompressionSupportedKey
_CalPrincipalShareDefaultAlarmSettingsKey
_CalPrincipalSupportsDefaultAlarmsKey
_CalPrincipalSupportsNotSerializingTimezonesKey
_CalPrincipalSupportsSharingKey
_CalPrincipalSupportsSubscriptionCalendarsKey
_CalPrincipalWebServicesRecordGUID
_CalPrincipalWritableKey
_CalPublicationAlarmFilterKey
_CalPublicationAttachmentFilterKey
_CalPublicationAutoPublishKey
_CalPublicationErrorNotification
_CalPublicationNameKey
_CalPublicationPublishDateKey
_CalPublicationRequestDateKey
_CalPublicationTaskFilterKey
_CalPublicationTextFilterKey
_CalPublicationUIDKey
_CalPublicationURLKey
_CalRecentDisplayNameKey
_CalRecentEmailKey
_CalRecentFirstNameKey
_CalRecentLastNameKey
_CalRecentRecentContactIdentifierKey
_CalRecentSchemaVersion
_CalRecentSourceIDKey
_CalRecentURIKey
_CalRecentVersionKey
_CalRefreshKey_PushState
_CalRefreshKey_SessionID
_CalRemoteCalendarDelegateKey
_CalRemoteCalendarEditableKey
_CalRemoteCalendarEventContainerKey
_CalRemoteCalendarPermissionKey
_CalRemoteCalendarPublishURLStringKey
_CalRemoteCalendarServerSubscriptionURLStringKey
_CalRemoteCalendarTaskContainerKey
_CalRepliedSetKey
_CalRepliedToMessageNotification
_CalRepliedToMultipleMessagesNotification
_CalReplyStatusKey
_CalSenderProcessIDKey
_CalSessionDebugErrorKey
_CalSessionDebugIntervalKey
_CalSessionDebugStatusKey
_CalSessionStatusChangedNotification
_CalStoreNS_Log
_CalStoreNS_Log_AB_Birthday
_CalStoreNS_Log_AB_ME
_CalStoreNS_Log_Accounts
_CalStoreNS_Log_Alarms
_CalStoreNS_Log_Alarms_Search
_CalStoreNS_Log_Attachments
_CalStoreNS_Log_Autocompletion
_CalStoreNS_Log_CalDAV
_CalStoreNS_Log_CalDAV_CoreDAV
_CalStoreNS_Log_CalDAV_HTTP
_CalStoreNS_Log_CalDAV_HTTP_Body
_CalStoreNS_Log_CalDAV_Mismatch
_CalStoreNS_Log_CalDAV_Queue
_CalStoreNS_Log_Checksum
_CalStoreNS_Log_ContextDelete
_CalStoreNS_Log_ContextInsert
_CalStoreNS_Log_Database
_CalStoreNS_Log_Delegates
_CalStoreNS_Log_Exchange
_CalStoreNS_Log_FTP
_CalStoreNS_Log_FreeBusy
_CalStoreNS_Log_Holiday
_CalStoreNS_Log_ICS
_CalStoreNS_Log_Keychain
_CalStoreNS_Log_Network
_CalStoreNS_Log_Notifications
_CalStoreNS_Log_Notifications_Totals
_CalStoreNS_Log_OccurrenceCache
_CalStoreNS_Log_Persistent_Operation
_CalStoreNS_Log_Persistent_Operation_Exchange
_CalStoreNS_Log_Propogation
_CalStoreNS_Log_Publication
_CalStoreNS_Log_SaveReload
_CalStoreNS_Log_Server
_CalStoreNS_Log_Session
_CalStoreNS_Log_Session_CalDAV
_CalStoreNS_Log_Session_Exchange
_CalStoreNS_Log_Session_Subscription
_CalStoreNS_Log_Session_iMIP
_CalStoreNS_Log_Subscription
_CalStoreNS_Log_Sync
_CalStoreNS_Log_TaskManager
_CalStoreNS_Log_TaskTracking
_CalStoreNS_Log_Travel
_CalStoreNS_Log_TruthFiles
_CalStoreNS_Log_iTIP
_CalStoreNS_Log_iTIP_Create
_CalStoreNS_Log_iTIP_Detached
_CalSubscriptionErrorDomain
_CalSubscriptionInfoAlarmFilterKey
_CalSubscriptionInfoAttachmentFilterKey
_CalSubscriptionInfoAutoProvisionedKey
_CalSubscriptionInfoAutoRefreshKey
_CalSubscriptionInfoIDKey
_CalSubscriptionInfoLanguageCodeKey
_CalSubscriptionInfoLocationCodeKey
_CalSubscriptionInfoNeedsRefreshKey
_CalSubscriptionInfoNotesKey
_CalSubscriptionInfoRefreshDateKey
_CalSubscriptionInfoRefreshIntervalKey
_CalSubscriptionInfoTaskFilterKey
_CalSubscriptionInfoTitleKey
_CalSubscriptionInfoURLKey
_CalSubscriptionProtectionSpaceAuthenticationMethodKey
_CalSubscriptionProtectionSpaceKey
_CalSubscriptionRefreshCompleteNotification
_CalSubscriptionSessionErrorNotification
_CalTasksChangedExternallyNotification
_CalTasksChangedNotification
_CalTimeZoneDidChangeNotification
_CalUpdatedEventOccurrencesKey
_CalUpdatedItemsKey
_CalUpdatedRecordsKey
_CalUpgradedEtags
_CalUseSharedAddressBookForBirthdayStrings
_CalUserUIDKey
_CalYearForYearlessBirthdays
_CalYearForYearlessLunarChineseBirthdays
_CalendarCreateKeychainAccessGroup
_CaliMIPSessionID
_DisableSleepNotifications
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
_EnableSleepNotifications
_ICSPartStatFromCalPartStat
_II_ALL_DAY_KEY
_II_ATTACHMENT_KEY
_II_ATTENDEES_KEY
_II_ATTENDEE_PREFIX
_II_COMMENTS_KEY
_II_END_KEY
_II_EVENT_TITLE_KEY
_II_LOCATION_KEY
_II_NOTE_KEY
_II_ORGANIZER_KEY
_II_REPEAT_END_KEY
_II_REPEAT_FREQ_KEY
_II_START_DATE_KEY
_II_START_KEY
_II_START_TIME_KEY
_II_TIME_ZONE_KEY
_II_URL_KEY
_LOCAL_MESSAGE_PREFIX
_OBJC_CLASS_$_AlarmIdChangeTracker
_OBJC_CLASS_$_AttendeeIdChangeTracker
_OBJC_CLASS_$_CALAbstractEntity
_OBJC_CLASS_$_CALAbstractView
_OBJC_CLASS_$_CALActionValue
_OBJC_CLASS_$_CALAddress
_OBJC_CLASS_$_CALApplePropertiesFilter
_OBJC_CLASS_$_CALAttachment
_OBJC_CLASS_$_CALBag
_OBJC_CLASS_$_CALBridgevCal
_OBJC_CLASS_$_CALBusyTimeOccurrence
_OBJC_CLASS_$_CALCancelFilter
_OBJC_CLASS_$_CALChainedFilter
_OBJC_CLASS_$_CALChangeTracker
_OBJC_CLASS_$_CALClassificationTypeValue
_OBJC_CLASS_$_CALColorModel
_OBJC_CLASS_$_CALComment
_OBJC_CLASS_$_CALDAVPublishOperation
_OBJC_CLASS_$_CALDailyRecurrence
_OBJC_CLASS_$_CALDate
_OBJC_CLASS_$_CALDateOnly
_OBJC_CLASS_$_CALDateTime
_OBJC_CLASS_$_CALDirEntriesFilter
_OBJC_CLASS_$_CALDuplicateFilter
_OBJC_CLASS_$_CALDuration
_OBJC_CLASS_$_CALDurationLocalization
_OBJC_CLASS_$_CALEntity
_OBJC_CLASS_$_CALEntityChangeTracker
_OBJC_CLASS_$_CALEntityTypeSearchElement
_OBJC_CLASS_$_CALEntityWithAlarmSearchElement
_OBJC_CLASS_$_CALExportFilter
_OBJC_CLASS_$_CALFTPPublishOperation
_OBJC_CLASS_$_CALFilter
_OBJC_CLASS_$_CALFloatingDateTime
_OBJC_CLASS_$_CALFreeBusy
_OBJC_CLASS_$_CALFreeBusyTime
_OBJC_CLASS_$_CALIdentityManager
_OBJC_CLASS_$_CALIndexSearchElement
_OBJC_CLASS_$_CALInvitationPropertiesFilter
_OBJC_CLASS_$_CALJournal
_OBJC_CLASS_$_CALJournalOccurrence
_OBJC_CLASS_$_CALKeychain
_OBJC_CLASS_$_CALMethodValue
_OBJC_CLASS_$_CALMonthlyRecurrence
_OBJC_CLASS_$_CALMultipleOccurrencesView
_OBJC_CLASS_$_CALMutableTimeRange
_OBJC_CLASS_$_CALOccurrableEntity
_OBJC_CLASS_$_CALOccurrence
_OBJC_CLASS_$_CALOccurrencesCache
_OBJC_CLASS_$_CALParticipationStatusParameter
_OBJC_CLASS_$_CALPreconfiguredDetachDelegate
_OBJC_CLASS_$_CALPredefinedValue
_OBJC_CLASS_$_CALProperty
_OBJC_CLASS_$_CALPropertyFilter
_OBJC_CLASS_$_CALPropertyMultiValue
_OBJC_CLASS_$_CALPropertyQuery
_OBJC_CLASS_$_CALPropertyValue
_OBJC_CLASS_$_CALPublishFilter
_OBJC_CLASS_$_CALPublishOperation
_OBJC_CLASS_$_CALPublisher
_OBJC_CLASS_$_CALQuery
_OBJC_CLASS_$_CALRecurID
_OBJC_CLASS_$_CALRedBlackNode
_OBJC_CLASS_$_CALRedBlackTree
_OBJC_CLASS_$_CALRemotePublisher
_OBJC_CLASS_$_CALRequestFilter
_OBJC_CLASS_$_CALRequestStatus
_OBJC_CLASS_$_CALRoleParameter
_OBJC_CLASS_$_CALScheduleAgentParameter
_OBJC_CLASS_$_CALScheduleStatusParameter
_OBJC_CLASS_$_CALScriptUtils
_OBJC_CLASS_$_CALSearchElement
_OBJC_CLASS_$_CALSourceFactory
_OBJC_CLASS_$_CALStatusTypeValue
_OBJC_CLASS_$_CALSubComponentFilter
_OBJC_CLASS_$_CALSubscribeFilter
_OBJC_CLASS_$_CALTimeRange
_OBJC_CLASS_$_CALTimeRangeSubstractionResult
_OBJC_CLASS_$_CALTodo
_OBJC_CLASS_$_CALTransparencyTypeValue
_OBJC_CLASS_$_CALURLPublishOperation
_OBJC_CLASS_$_CALURLPublisher
_OBJC_CLASS_$_CALView
_OBJC_CLASS_$_CALWeekDayNumber
_OBJC_CLASS_$_CALWeekDuration
_OBJC_CLASS_$_CALWeeklyRecurrence
_OBJC_CLASS_$_CALYearlyRecurrence
_OBJC_CLASS_$_CALvCALInputStream
_OBJC_CLASS_$_CALvCALParseState
_OBJC_CLASS_$_CALvCALParsedLine
_OBJC_CLASS_$_CALvCALRecurrence
_OBJC_CLASS_$_CalABListener
_OBJC_CLASS_$_CalAbstractCDChangeTracker
_OBJC_CLASS_$_CalAccountMonitor
_OBJC_CLASS_$_CalAccountsProvider
_OBJC_CLASS_$_CalAddressABGroupWrapper
_OBJC_CLASS_$_CalAddressABPersonWrapper
_OBJC_CLASS_$_CalAddressABRecordWrapper
_OBJC_CLASS_$_CalAddressCDRecordWrapper
_OBJC_CLASS_$_CalAddressLocationPreviousWrapper
_OBJC_CLASS_$_CalAddressPreviousWrapper
_OBJC_CLASS_$_CalAddressRecordWrapper
_OBJC_CLASS_$_CalAddressWrapper
_OBJC_CLASS_$_CalAlertChangeMonitor
_OBJC_CLASS_$_CalArchiveFileWrapper
_OBJC_CLASS_$_CalAttachmentCache
_OBJC_CLASS_$_CalAttachmentsFilter
_OBJC_CLASS_$_CalAutoCompleteOperation
_OBJC_CLASS_$_CalAutoCompleteResults
_OBJC_CLASS_$_CalAutocompleteAttendee
_OBJC_CLASS_$_CalBackup
_OBJC_CLASS_$_CalBadgeMonitor
_OBJC_CLASS_$_CalBagChangeMonitor
_OBJC_CLASS_$_CalBirthdayCalendarSource
_OBJC_CLASS_$_CalBirthdayListener
_OBJC_CLASS_$_CalCalDAVAuthenticationTask
_OBJC_CLASS_$_CalCalDAVBasicTaskGroupWrapper
_OBJC_CLASS_$_CalCalDAVCalendarInfoTaskGroupWrapper
_OBJC_CLASS_$_CalCalDAVCalendarSource
_OBJC_CLASS_$_CalCalDAVContainerSyncMismatch
_OBJC_CLASS_$_CalCalDAVContainerSyncTaskGroupWrapper
_OBJC_CLASS_$_CalCalDAVGetAccountPropertiesTaskWrapper
_OBJC_CLASS_$_CalCalDAVInboxSyncTaskGroupWrapper
_OBJC_CLASS_$_CalCalDAVSynchronousTaskGroup
_OBJC_CLASS_$_CalCalDAVTaskManager
_OBJC_CLASS_$_CalCertificateErrorHandler
_OBJC_CLASS_$_CalChangeMonitor
_OBJC_CLASS_$_CalChronometry
_OBJC_CLASS_$_CalClientIDChangeTracker
_OBJC_CLASS_$_CalClientProxy
_OBJC_CLASS_$_CalConflictResults
_OBJC_CLASS_$_CalDAVAccountIdChangeTracker
_OBJC_CLASS_$_CalDAVAccountInfoProvider
_OBJC_CLASS_$_CalDAVAccountRefreshQueueableOperation
_OBJC_CLASS_$_CalDAVAddCalendarQueueableOperation
_OBJC_CLASS_$_CalDAVAddSubscriptionCalendarQueueableOperation
_OBJC_CLASS_$_CalDAVAddressToPrincipalOperation
_OBJC_CLASS_$_CalDAVBasicAccountInfoProvider
_OBJC_CLASS_$_CalDAVBulkSimpleTask
_OBJC_CLASS_$_CalDAVCalendarQueueableOperation
_OBJC_CLASS_$_CalDAVCalendarSource
_OBJC_CLASS_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation
_OBJC_CLASS_$_CalDAVChangeCalendarAffectsAvailabilityQueueableOperation
_OBJC_CLASS_$_CalDAVChangePublishStatusCalendarQueueableOperation
_OBJC_CLASS_$_CalDAVChangeRequestsConsumer
_OBJC_CLASS_$_CalDAVChangeRequestsProducer
_OBJC_CLASS_$_CalDAVClientInfoSentry
_OBJC_CLASS_$_CalDAVDeleteDropBoxFileQueueableOperation
_OBJC_CLASS_$_CalDAVDeleteDropBoxQueueableOperation
_OBJC_CLASS_$_CalDAVDeleteEntityQueueableOperation
_OBJC_CLASS_$_CalDAVDeleteInboxFileQueueableOperation
_OBJC_CLASS_$_CalDAVDeleteNotificationCollectionFileQueueableOperation
_OBJC_CLASS_$_CalDAVDownloadDropBoxFileQueueableOperation
_OBJC_CLASS_$_CalDAVETagCache
_OBJC_CLASS_$_CalDAVEntityQueueableOperation
_OBJC_CLASS_$_CalDAVExpandGroupOperation
_OBJC_CLASS_$_CalDAVExpandGroupQueueableOperation
_OBJC_CLASS_$_CalDAVFreeBusyCache
_OBJC_CLASS_$_CalDAVFreeBusyResponseReader
_OBJC_CLASS_$_CalDAVKerberosHelper
_OBJC_CLASS_$_CalDAVKerberosPrincipals
_OBJC_CLASS_$_CalDAVLookupFreeBusyOperation
_OBJC_CLASS_$_CalDAVMigrateToServerQueueableOperation
_OBJC_CLASS_$_CalDAVMoveEntityQueueableOperation
_OBJC_CLASS_$_CalDAVNotificationContainerSyncTaskGroupWrapper
_OBJC_CLASS_$_CalDAVNotificationHandler
_OBJC_CLASS_$_CalDAVOccurrenceChange
_OBJC_CLASS_$_CalDAVOfficeHour
_OBJC_CLASS_$_CalDAVOperationQueue
_OBJC_CLASS_$_CalDAVPersistentQueueableOperation
_OBJC_CLASS_$_CalDAVPrincipalPropertySearchOperation
_OBJC_CLASS_$_CalDAVPrincipalResult
_OBJC_CLASS_$_CalDAVQueueableOperation
_OBJC_CLASS_$_CalDAVQueueableOperationRunLoopPumper
_OBJC_CLASS_$_CalDAVRefreshDelegateListQueueableOperation
_OBJC_CLASS_$_CalDAVRemoveCalendarQueueableOperation
_OBJC_CLASS_$_CalDAVRemovePropertyQueueableOperation
_OBJC_CLASS_$_CalDAVResource
_OBJC_CLASS_$_CalDAVRetrieveSharedCalendarShareesTaskGroupTaskGroupWrapper
_OBJC_CLASS_$_CalDAVRevertEntityQueueableOperation
_OBJC_CLASS_$_CalDAVScanDropBoxQueueableOperation
_OBJC_CLASS_$_CalDAVScanResponse
_OBJC_CLASS_$_CalDAVScheduleChangesProperty
_OBJC_CLASS_$_CalDAVScheduleEventQueueableOperation
_OBJC_CLASS_$_CalDAVSession
_OBJC_CLASS_$_CalDAVSetCalendarColorQueueableOperation
_OBJC_CLASS_$_CalDAVSetDefaultAlarmQueueableOperation
_OBJC_CLASS_$_CalDAVSetPropertyQueueableOperation
_OBJC_CLASS_$_CalDAVSharedCalendarInvitationResponseQueueableOperation
_OBJC_CLASS_$_CalDAVTaskManagerOperation
_OBJC_CLASS_$_CalDAVUpdateShareesQueuableOperation
_OBJC_CLASS_$_CalDAVUploadDropBoxFileQueueableOperation
_OBJC_CLASS_$_CalDAVWriteEntityQueueableOperation
_OBJC_CLASS_$_CalDateLocalization
_OBJC_CLASS_$_CalDefaultDictionary
_OBJC_CLASS_$_CalDelegateFoldersPermissions
_OBJC_CLASS_$_CalDelegateHandler
_OBJC_CLASS_$_CalDelegateUserInfo
_OBJC_CLASS_$_CalDuplicateHandler
_OBJC_CLASS_$_CalEmail
_OBJC_CLASS_$_CalEntityDescription
_OBJC_CLASS_$_CalEventOccurrence
_OBJC_CLASS_$_CalEventOccurrenceCache
_OBJC_CLASS_$_CalEventOccurrenceCacheData
_OBJC_CLASS_$_CalExchangeAbstractWriteCalendarItemOperation
_OBJC_CLASS_$_CalExchangeAddGrantedDelegateOperation
_OBJC_CLASS_$_CalExchangeBasicAccountInfoProvider
_OBJC_CLASS_$_CalExchangeCalendarSource
_OBJC_CLASS_$_CalExchangeCreateAttachmentOperation
_OBJC_CLASS_$_CalExchangeCreateCalendarItemOperation
_OBJC_CLASS_$_CalExchangeCreateFolderOperation
_OBJC_CLASS_$_CalExchangeCreateResponseOperation
_OBJC_CLASS_$_CalExchangeCreateTaskOperation
_OBJC_CLASS_$_CalExchangeDeleteAttachmentOperation
_OBJC_CLASS_$_CalExchangeDeleteFolderOperation
_OBJC_CLASS_$_CalExchangeDeleteItemOperation
_OBJC_CLASS_$_CalExchangeDeleteOccurrenceItemOperation
_OBJC_CLASS_$_CalExchangeErrorMessage
_OBJC_CLASS_$_CalExchangeFreeBusyCache
_OBJC_CLASS_$_CalExchangeGetAttachmentOperation
_OBJC_CLASS_$_CalExchangeGetCalendarItemOperation
_OBJC_CLASS_$_CalExchangeGetDeclinedCalendarItemOperation
_OBJC_CLASS_$_CalExchangeGetDelegatesOperation
_OBJC_CLASS_$_CalExchangeGetEffectiveRightsOperation
_OBJC_CLASS_$_CalExchangeGetGrantedDelegatesOperation
_OBJC_CLASS_$_CalExchangeGetItemOperation
_OBJC_CLASS_$_CalExchangeGetMailboxOperation
_OBJC_CLASS_$_CalExchangeGetTaskOperation
_OBJC_CLASS_$_CalExchangeGetUserAvailabilityOperation
_OBJC_CLASS_$_CalExchangeGrantedDelegateOperation
_OBJC_CLASS_$_CalExchangeMoveItemOperation
_OBJC_CLASS_$_CalExchangeOperation
_OBJC_CLASS_$_CalExchangePersistentOperation
_OBJC_CLASS_$_CalExchangeRemoveGrantedDelegateOperation
_OBJC_CLASS_$_CalExchangeSession
_OBJC_CLASS_$_CalExchangeSyncAccountOperation
_OBJC_CLASS_$_CalExchangeSyncDeletedItemsFolderOperation
_OBJC_CLASS_$_CalExchangeSyncFolderItemsOperation
_OBJC_CLASS_$_CalExchangeTestConnectionOperation
_OBJC_CLASS_$_CalExchangeUpdateCalendarItemOperation
_OBJC_CLASS_$_CalExchangeUpdateFolderOperation
_OBJC_CLASS_$_CalExchangeUpdateGrantedDelegatePermissionsOperation
_OBJC_CLASS_$_CalExchangeUpdateTaskOperation
_OBJC_CLASS_$_CalExhangeGetDelegeteFolderPermissionsOperation
_OBJC_CLASS_$_CalFTPDeleteOperation
_OBJC_CLASS_$_CalFTPGetOperation
_OBJC_CLASS_$_CalFTPOperation
_OBJC_CLASS_$_CalFTPPutOperation
_OBJC_CLASS_$_CalFTPReadOperation
_OBJC_CLASS_$_CalFTPWriteOperation
_OBJC_CLASS_$_CalFileCDChangeTracker
_OBJC_CLASS_$_CalFreeBusyCache
_OBJC_CLASS_$_CalFreeBusyCacheManager
_OBJC_CLASS_$_CalFreeBusyEventDetails
_OBJC_CLASS_$_CalFreeBusyOperationInfo
_OBJC_CLASS_$_CalGroupMembersCache
_OBJC_CLASS_$_CalHTTPUserAgent
_OBJC_CLASS_$_CalHolidayCalendarSubscriber
_OBJC_CLASS_$_CalIMAPCalendarSource
_OBJC_CLASS_$_CalLocalCalendarSource
_OBJC_CLASS_$_CalMDQuery
_OBJC_CLASS_$_CalMailMonitor
_OBJC_CLASS_$_CalManagedAccount
_OBJC_CLASS_$_CalManagedAlarm
_OBJC_CLASS_$_CalManagedAttachment
_OBJC_CLASS_$_CalManagedAttendee
_OBJC_CLASS_$_CalManagedBirthdayCalendar
_OBJC_CLASS_$_CalManagedCalDAVAccount
_OBJC_CLASS_$_CalManagedCalDAVCalendar
_OBJC_CLASS_$_CalManagedCalDAVError
_OBJC_CLASS_$_CalManagedCalDAVPrincipal
_OBJC_CLASS_$_CalManagedCalDAVSubscribedCalendar
_OBJC_CLASS_$_CalManagedCalendar
_OBJC_CLASS_$_CalManagedCalendarChangeRequest
_OBJC_CLASS_$_CalManagedCalendarHomeChangeRequest
_OBJC_CLASS_$_CalManagedCalendarItem
_OBJC_CLASS_$_CalManagedCalendarSplitDualTypeChangeRequest
_OBJC_CLASS_$_CalManagedCalendarUserAddress
_OBJC_CLASS_$_CalManagedChangeRequest
_OBJC_CLASS_$_CalManagedChangeRequestDependency
_OBJC_CLASS_$_CalManagedComment
_OBJC_CLASS_$_CalManagedDefaultAlarmSet
_OBJC_CLASS_$_CalManagedDeleteDropBoxChangeRequest
_OBJC_CLASS_$_CalManagedDiff
_OBJC_CLASS_$_CalManagedDownloadDropBoxFileChangeRequest
_OBJC_CLASS_$_CalManagedDropBoxFileOpChangeRequest
_OBJC_CLASS_$_CalManagedError
_OBJC_CLASS_$_CalManagedEvent
_OBJC_CLASS_$_CalManagedExchangeAccount
_OBJC_CLASS_$_CalManagedExchangeCalendar
_OBJC_CLASS_$_CalManagedExchangeError
_OBJC_CLASS_$_CalManagedExchangePrincipal
_OBJC_CLASS_$_CalManagedExpandGroupChangeRequest
_OBJC_CLASS_$_CalManagedGroup
_OBJC_CLASS_$_CalManagedICSElementProperties
_OBJC_CLASS_$_CalManagedIMAPCalendar
_OBJC_CLASS_$_CalManagedIMAPGroup
_OBJC_CLASS_$_CalManagedLocalCalendar
_OBJC_CLASS_$_CalManagedLocalGroup
_OBJC_CLASS_$_CalManagedLocation
_OBJC_CLASS_$_CalManagedMessage
_OBJC_CLASS_$_CalManagedMessageChangeRequest
_OBJC_CLASS_$_CalManagedMessageContents
_OBJC_CLASS_$_CalManagedMigrationGroup
_OBJC_CLASS_$_CalManagedMoveEntityChangeRequest
_OBJC_CLASS_$_CalManagedNode
_OBJC_CLASS_$_CalManagedObject
_OBJC_CLASS_$_CalManagedObjectContext
_OBJC_CLASS_$_CalManagedObjectModel
_OBJC_CLASS_$_CalManagedPersistentOperation
_OBJC_CLASS_$_CalManagedPrincipal
_OBJC_CLASS_$_CalManagedPublication
_OBJC_CLASS_$_CalManagedPublicationError
_OBJC_CLASS_$_CalManagedRecurrenceException
_OBJC_CLASS_$_CalManagedRemoteCalendar
_OBJC_CLASS_$_CalManagedScheduleChangeRequest
_OBJC_CLASS_$_CalManagedSearchProperty
_OBJC_CLASS_$_CalManagedSetDropBoxAclChangeRequest
_OBJC_CLASS_$_CalManagedSharedCalendarInvitationResponseChangeRequest
_OBJC_CLASS_$_CalManagedSharee
_OBJC_CLASS_$_CalManagedShareeChangeRequest
_OBJC_CLASS_$_CalManagedSource
_OBJC_CLASS_$_CalManagedStore
_OBJC_CLASS_$_CalManagedSubscriptionCalendar
_OBJC_CLASS_$_CalManagedSubscriptionCalendarChangeRequest
_OBJC_CLASS_$_CalManagedSubscriptionError
_OBJC_CLASS_$_CalManagedSubscriptionGroup
_OBJC_CLASS_$_CalManagedSubscriptionInfo
_OBJC_CLASS_$_CalManagedTask
_OBJC_CLASS_$_CalMeCardListener
_OBJC_CLASS_$_CalNamedMutex
_OBJC_CLASS_$_CalNetworkChangeNotifier
_OBJC_CLASS_$_CalNotification
_OBJC_CLASS_$_CalOperation
_OBJC_CLASS_$_CalOperationQueue
_OBJC_CLASS_$_CalPersistence
_OBJC_CLASS_$_CalPersistenceMonitor
_OBJC_CLASS_$_CalPersistentOperation
_OBJC_CLASS_$_CalPersistentOperationProducer
_OBJC_CLASS_$_CalPersistentStoreCoordinator
_OBJC_CLASS_$_CalPreviousController
_OBJC_CLASS_$_CalPropFindSynchronousTask
_OBJC_CLASS_$_CalPublisherManager
_OBJC_CLASS_$_CalRemoteCalendarSource
_OBJC_CLASS_$_CalSQLCDChangeTracker
_OBJC_CLASS_$_CalSession
_OBJC_CLASS_$_CalSessionPool
_OBJC_CLASS_$_CalSessionStateCache
_OBJC_CLASS_$_CalSharedCalendarInviteMonitor
_OBJC_CLASS_$_CalSingleSynchronousTask
_OBJC_CLASS_$_CalSpotlight
_OBJC_CLASS_$_CalSubscriptionCalendarSource
_OBJC_CLASS_$_CalSubscriptionOperation
_OBJC_CLASS_$_CalSubscriptionSession
_OBJC_CLASS_$_CalSyncClearifier
_OBJC_CLASS_$_CalTaskManager
_OBJC_CLASS_$_CalTruthFileCreateDirectory
_OBJC_CLASS_$_CalTruthFileDataWrite
_OBJC_CLASS_$_CalTruthFileICSWrite
_OBJC_CLASS_$_CalTruthFileOperation
_OBJC_CLASS_$_CalTruthFileRemove
_OBJC_CLASS_$_CalTruthFileStore
_OBJC_CLASS_$_CalUnifiedPerson
_OBJC_CLASS_$_CalUnrecognizedICSHelper
_OBJC_CLASS_$_CalUserAlarmNotification
_OBJC_CLASS_$_CalUserMessageNotification
_OBJC_CLASS_$_CalUserNotificationCenter
_OBJC_CLASS_$_CalUserNotificationCenterCache
_OBJC_CLASS_$_CalUserNotificationCenterHelper
_OBJC_CLASS_$_CalUserNotificationCenterListener
_OBJC_CLASS_$_CalValidationError
_OBJC_CLASS_$_CalVirtualSource
_OBJC_CLASS_$_CalendarIdChangeTracker
_OBJC_CLASS_$_CalendarItemMigratePlan
_OBJC_CLASS_$_CalendarStore
_OBJC_CLASS_$_CaliCalendarAnonymizer
_OBJC_CLASS_$_CaliMIPCancelOperation
_OBJC_CLASS_$_CaliMIPOperation
_OBJC_CLASS_$_CaliMIPPersistDetailsOperation
_OBJC_CLASS_$_CaliMIPReplyOperation
_OBJC_CLASS_$_CaliMIPRequestOperation
_OBJC_CLASS_$_CaliMIPSession
_OBJC_CLASS_$_CaliTIPHandler
_OBJC_CLASS_$_CaliTIPMessage
_OBJC_CLASS_$_CoreAlarm
_OBJC_CLASS_$_CoreAlarmOccurrence
_OBJC_CLASS_$_CoreAlarmOccurrenceTrigger
_OBJC_CLASS_$_CoreAlarmTrigger
_OBJC_CLASS_$_CoreAlarmView
_OBJC_CLASS_$_CoreAlarmsFilters
_OBJC_CLASS_$_CoreAttendeeStateFilter
_OBJC_CLASS_$_CoreCalendar
_OBJC_CLASS_$_CoreCalendarSource
_OBJC_CLASS_$_CoreCalendarUserTypeParameter
_OBJC_CLASS_$_CoreCalendarsManager
_OBJC_CLASS_$_CoreDisplayAlarm
_OBJC_CLASS_$_CoreDisplayAlarmOccurrence
_OBJC_CLASS_$_CoreEvent
_OBJC_CLASS_$_CoreEventOccurrence
_OBJC_CLASS_$_CoreMailAlarm
_OBJC_CLASS_$_CoreMailAlarmOccurrence
_OBJC_CLASS_$_CoreProcAlarm
_OBJC_CLASS_$_CoreProcAlarmOccurrence
_OBJC_CLASS_$_CoreRecurrenceRule
_OBJC_CLASS_$_CoreSoundAlarm
_OBJC_CLASS_$_CoreSoundAlarmOccurrence
_OBJC_CLASS_$_CoreStructuredLocation
_OBJC_CLASS_$_EKProtocolCalendar_Shared
_OBJC_CLASS_$_EKProtocolEventOccurrence_Shared
_OBJC_CLASS_$_EKProtocolObject_Shared
_OBJC_CLASS_$_EKProtocolParticipant_Shared
_OBJC_CLASS_$_EntityIdChangeTracker
_OBJC_CLASS_$_EventIdChangeTracker
_OBJC_CLASS_$_ExchangeAccountIdChangeTracker
_OBJC_CLASS_$_IIABQuerySession
_OBJC_CLASS_$_IICDQuerySession
_OBJC_CLASS_$_IICDQuerySessionResults
_OBJC_CLASS_$_IIQuerySession
_OBJC_CLASS_$_IssueCounter
_OBJC_CLASS_$_LocalCalendarDetails
_OBJC_CLASS_$_OurOwnMutableNSDate
_OBJC_CLASS_$_PublicationIdChangeTracker
_OBJC_CLASS_$_RBNode
_OBJC_CLASS_$_TaskIdChangeTracker
_OBJC_IVAR_$_CALAbstractEntity._changelist
_OBJC_IVAR_$_CALAbstractEntity._commitcount
_OBJC_IVAR_$_CALAbstractEntity._originRepository
_OBJC_IVAR_$_CALAbstractEntity._privateID
_OBJC_IVAR_$_CALAbstractEntity._properties
_OBJC_IVAR_$_CALAbstractEntity._status
_OBJC_IVAR_$_CALAbstractEntity._subcomponents
_OBJC_IVAR_$_CALAbstractEntity._subcomponentschangelist
_OBJC_IVAR_$_CALAbstractEntity._unrecognizedProperties
_OBJC_IVAR_$_CALAbstractView._active
_OBJC_IVAR_$_CALAbstractView._clients
_OBJC_IVAR_$_CALAbstractView._name
_OBJC_IVAR_$_CALAbstractView._occurrences
_OBJC_IVAR_$_CALAbstractView._postDetailledNotifications
_OBJC_IVAR_$_CALAddress._container
_OBJC_IVAR_$_CALAddress._isCalendarUserAddress
_OBJC_IVAR_$_CALAddress._isMe
_OBJC_IVAR_$_CALAddress._managedObjectID
_OBJC_IVAR_$_CALAttachment._cachedURL
_OBJC_IVAR_$_CALAttachment._managedObjectID
_OBJC_IVAR_$_CALBag._activeViews
_OBJC_IVAR_$_CALBag._cache
_OBJC_IVAR_$_CALBag.sourcesRegistered
_OBJC_IVAR_$_CALBusyTimeOccurrence._cachedDuration
_OBJC_IVAR_$_CALBusyTimeOccurrence._cachedEndDate
_OBJC_IVAR_$_CALBusyTimeOccurrence._type
_OBJC_IVAR_$_CALChainedFilter._filters
_OBJC_IVAR_$_CALChangeTracker._action
_OBJC_IVAR_$_CALChangeTracker._target
_OBJC_IVAR_$_CALDAVPublishOperation._accountInfoProvider
_OBJC_IVAR_$_CALDAVPublishOperation._etag
_OBJC_IVAR_$_CALDAVPublishOperation._taskError
_OBJC_IVAR_$_CALDAVPublishOperation._taskInProgress
_OBJC_IVAR_$_CALDAVPublishOperation._taskManager
_OBJC_IVAR_$_CALDate._calendarFormat
_OBJC_IVAR_$_CALDate._cdate
_OBJC_IVAR_$_CALDate._timeZone
_OBJC_IVAR_$_CALDuration._duration
_OBJC_IVAR_$_CALEntity._cachedEndDate
_OBJC_IVAR_$_CALEntity._children
_OBJC_IVAR_$_CALEntity._dropBoxFreeBytes
_OBJC_IVAR_$_CALEntity._dropBoxLocationOverrideBaseURL
_OBJC_IVAR_$_CALEntity._eTagShouldBeNil
_OBJC_IVAR_$_CALEntity._eventCachedStartDate
_OBJC_IVAR_$_CALEntity._hasReccurrence
_OBJC_IVAR_$_CALEntity._isOwnerMe
_OBJC_IVAR_$_CALEntity._isPhantom
_OBJC_IVAR_$_CALEntity._isSharingSchedulingSupported
_OBJC_IVAR_$_CALEntity._localUID
_OBJC_IVAR_$_CALEntity._myAddress
_OBJC_IVAR_$_CALEntity._myAddressIgnoringMeCard
_OBJC_IVAR_$_CALEntity._myAddressIgnoringMeCardNotHere
_OBJC_IVAR_$_CALEntity._myAddressNotHere
_OBJC_IVAR_$_CALEntity._organizerType
_OBJC_IVAR_$_CALEntity._ownerAddresses
_OBJC_IVAR_$_CALEntity._parentEntity
_OBJC_IVAR_$_CALEntity._permission
_OBJC_IVAR_$_CALEntity._searchHackDict
_OBJC_IVAR_$_CALEntity._unlistedOtherAttendees
_OBJC_IVAR_$_CALEntityChangeTracker._internal
_OBJC_IVAR_$_CALEntityTypeSearchElement._range
_OBJC_IVAR_$_CALEntityTypeSearchElement._type
_OBJC_IVAR_$_CALEntityWithAlarmSearchElement._range
_OBJC_IVAR_$_CALFTPPublishOperation._ftpOperation
_OBJC_IVAR_$_CALFreeBusyTime._freeBusyTimeRange
_OBJC_IVAR_$_CALFreeBusyTime._freeBusyType
_OBJC_IVAR_$_CALIdentityManager._myCardExists
_OBJC_IVAR_$_CALIdentityManager._urlIsMeMapping
_OBJC_IVAR_$_CALIdentityManager.me
_OBJC_IVAR_$_CALIdentityManager.myCardID
_OBJC_IVAR_$_CALIdentityManager.myMails
_OBJC_IVAR_$_CALIndexSearchElement._prop
_OBJC_IVAR_$_CALIndexSearchElement._type
_OBJC_IVAR_$_CALIndexSearchElement._value
_OBJC_IVAR_$_CALMultipleOccurrencesView._targetOccIDs
_OBJC_IVAR_$_CALOccurrableEntity._managedObjectID
_OBJC_IVAR_$_CALOccurrence._clientData
_OBJC_IVAR_$_CALOccurrence._discard
_OBJC_IVAR_$_CALOccurrence._initialStartDate
_OBJC_IVAR_$_CALOccurrence._occurrenceID
_OBJC_IVAR_$_CALOccurrence._parentEntity
_OBJC_IVAR_$_CALOccurrence._realEntity
_OBJC_IVAR_$_CALOccurrence._startDate
_OBJC_IVAR_$_CALOccurrencesCache._entityIndexes
_OBJC_IVAR_$_CALPreconfiguredDetachDelegate.action
_OBJC_IVAR_$_CALPredefinedValue._value
_OBJC_IVAR_$_CALProperty._changelist
_OBJC_IVAR_$_CALProperty._name
_OBJC_IVAR_$_CALProperty._status
_OBJC_IVAR_$_CALProperty._values
_OBJC_IVAR_$_CALPropertyFilter._keys
_OBJC_IVAR_$_CALPropertyFilter._mode
_OBJC_IVAR_$_CALPropertyQuery._op
_OBJC_IVAR_$_CALPropertyQuery._propertyName
_OBJC_IVAR_$_CALPropertyQuery._value
_OBJC_IVAR_$_CALPropertyValue._changelist
_OBJC_IVAR_$_CALPropertyValue._oldtype
_OBJC_IVAR_$_CALPropertyValue._oldvalue
_OBJC_IVAR_$_CALPropertyValue._params
_OBJC_IVAR_$_CALPropertyValue._status
_OBJC_IVAR_$_CALPropertyValue._type
_OBJC_IVAR_$_CALPropertyValue._unrecognizedProperties
_OBJC_IVAR_$_CALPropertyValue._value
_OBJC_IVAR_$_CALPublishOperation._delegate
_OBJC_IVAR_$_CALPublishOperation._error
_OBJC_IVAR_$_CALPublishOperation._operationProgress
_OBJC_IVAR_$_CALPublishOperation._operationTotal
_OBJC_IVAR_$_CALPublishOperation._privateInfos
_OBJC_IVAR_$_CALPublishOperation._useKerberos
_OBJC_IVAR_$_CALPublisher._active
_OBJC_IVAR_$_CALPublisher._autoUpdate
_OBJC_IVAR_$_CALPublisher._filteringMask
_OBJC_IVAR_$_CALPublisher._key
_OBJC_IVAR_$_CALPublisher._lastUpdate
_OBJC_IVAR_$_CALPublisher._pageURL
_OBJC_IVAR_$_CALPublisher._publishName
_OBJC_IVAR_$_CALPublisher._publisherState
_OBJC_IVAR_$_CALPublisher._subscriptionURL
_OBJC_IVAR_$_CALPublisher._uploadURL
_OBJC_IVAR_$_CALQuery._entityType
_OBJC_IVAR_$_CALQuery._indexedString
_OBJC_IVAR_$_CALQuery._propertyQueries
_OBJC_IVAR_$_CALQuery._searchProperty
_OBJC_IVAR_$_CALQuery._targetRepositories
_OBJC_IVAR_$_CALRedBlackNode._key
_OBJC_IVAR_$_CALRedBlackNode._value
_OBJC_IVAR_$_CALRedBlackTree._count
_OBJC_IVAR_$_CALRedBlackTree._root
_OBJC_IVAR_$_CALRemotePublisher._callbackOption
_OBJC_IVAR_$_CALRemotePublisher._delegate
_OBJC_IVAR_$_CALRemotePublisher._dirty
_OBJC_IVAR_$_CALRemotePublisher._lastOperationError
_OBJC_IVAR_$_CALRemotePublisher._minimumPublishInterval
_OBJC_IVAR_$_CALRemotePublisher._nodeID
_OBJC_IVAR_$_CALRemotePublisher._oldIsActive
_OBJC_IVAR_$_CALRemotePublisher._oldIsAutoUpdating
_OBJC_IVAR_$_CALRemotePublisher._publishScheduled
_OBJC_IVAR_$_CALRemotePublisher._schedulePublishTimer
_OBJC_IVAR_$_CALRemotePublisher._status
_OBJC_IVAR_$_CALSourceFactory._types
_OBJC_IVAR_$_CALSubComponentFilter._classes
_OBJC_IVAR_$_CALSubComponentFilter._mode
_OBJC_IVAR_$_CALTimeRange._duration
_OBJC_IVAR_$_CALTimeRange._endDate
_OBJC_IVAR_$_CALTimeRange._startDate
_OBJC_IVAR_$_CALTimeRangeSubstractionResult._result1
_OBJC_IVAR_$_CALTimeRangeSubstractionResult._result2
_OBJC_IVAR_$_CALTodo._recurrenceDescription
_OBJC_IVAR_$_CALURLPublishOperation._url
_OBJC_IVAR_$_CALURLPublisher._checkCompatibilityMode
_OBJC_IVAR_$_CALURLPublisher._password
_OBJC_IVAR_$_CALURLPublisher._useCompatibilityMode
_OBJC_IVAR_$_CALView._originQuery
_OBJC_IVAR_$_CALView._targetRepositories
_OBJC_IVAR_$_CALView._timeRange
_OBJC_IVAR_$_CALWeekDayNumber._day
_OBJC_IVAR_$_CALWeekDayNumber._number
_OBJC_IVAR_$_CALvCALInputStream._buffer
_OBJC_IVAR_$_CALvCALInputStream._current_line_num
_OBJC_IVAR_$_CALvCALInputStream._dataStream
_OBJC_IVAR_$_CALvCALInputStream._discard_buffer
_OBJC_IVAR_$_CALvCALInputStream._seek
_OBJC_IVAR_$_CALvCALParseState._context
_OBJC_IVAR_$_CALvCALParseState._currentEntity
_OBJC_IVAR_$_CALvCALParseState._error
_OBJC_IVAR_$_CALvCALParseState._globalTZ
_OBJC_IVAR_$_CALvCALParseState._lineNumber
_OBJC_IVAR_$_CALvCALParseState._palmImport
_OBJC_IVAR_$_CALvCALParseState._version
_OBJC_IVAR_$_CALvCALParsedLine._content
_OBJC_IVAR_$_CALvCALParsedLine._keyword
_OBJC_IVAR_$_CALvCALParsedLine._params
_OBJC_IVAR_$_CALvCALParsedLine._token_id
_OBJC_IVAR_$_CALvCALParsedLine._type
_OBJC_IVAR_$_CALvCALParsedLine._usePalmD4Hooks
_OBJC_IVAR_$_CALvCALRecurrence._daylist
_OBJC_IVAR_$_CALvCALRecurrence._daynumberlist
_OBJC_IVAR_$_CALvCALRecurrence._duration
_OBJC_IVAR_$_CALvCALRecurrence._end_date
_OBJC_IVAR_$_CALvCALRecurrence._has_duration
_OBJC_IVAR_$_CALvCALRecurrence._has_monthlist
_OBJC_IVAR_$_CALvCALRecurrence._interval
_OBJC_IVAR_$_CALvCALRecurrence._monthlist
_OBJC_IVAR_$_CALvCALRecurrence._occurrencelist
_OBJC_IVAR_$_CALvCALRecurrence._type
_OBJC_IVAR_$_CALvCALRecurrence._weekday_list
_OBJC_IVAR_$_CalABListener._isDisabled
_OBJC_IVAR_$_CalABListener._isListening
_OBJC_IVAR_$_CalABListener._isRunningUpdateJob
_OBJC_IVAR_$_CalABListener._shouldCancelUpdateJob
_OBJC_IVAR_$_CalABListener._updateJobQueue
_OBJC_IVAR_$_CalAbstractCDChangeTracker.DeleteKey
_OBJC_IVAR_$_CalAbstractCDChangeTracker.ModKey
_OBJC_IVAR_$_CalAbstractCDChangeTracker._syncMode
_OBJC_IVAR_$_CalAbstractCDChangeTracker.alarmTypes
_OBJC_IVAR_$_CalAbstractCDChangeTracker.allDeletes
_OBJC_IVAR_$_CalAbstractCDChangeTracker.allMods
_OBJC_IVAR_$_CalAbstractCDChangeTracker.directNames
_OBJC_IVAR_$_CalAccountsProvider._store
_OBJC_IVAR_$_CalAddressABRecordWrapper._addressBook
_OBJC_IVAR_$_CalAddressPreviousWrapper._displayedName
_OBJC_IVAR_$_CalAddressPreviousWrapper._firstName
_OBJC_IVAR_$_CalAddressPreviousWrapper._lastName
_OBJC_IVAR_$_CalAddressPreviousWrapper._loginName
_OBJC_IVAR_$_CalAddressPreviousWrapper._recentContactIDNumber
_OBJC_IVAR_$_CalAddressPreviousWrapper._type
_OBJC_IVAR_$_CalAddressRecordWrapper._record
_OBJC_IVAR_$_CalAddressWrapper._address
_OBJC_IVAR_$_CalAddressWrapper._cuAddress
_OBJC_IVAR_$_CalAddressWrapper._freeBusyType
_OBJC_IVAR_$_CalAddressWrapper._fromPrevious
_OBJC_IVAR_$_CalArchiveFileWrapper._archiveData
_OBJC_IVAR_$_CalArchiveFileWrapper._archiveType
_OBJC_IVAR_$_CalArchiveFileWrapper._realFileWrapper
_OBJC_IVAR_$_CalAutoCompleteOperation._abQuerySession
_OBJC_IVAR_$_CalAutoCompleteOperation._addressBook
_OBJC_IVAR_$_CalAutoCompleteOperation._addressesToIgnore
_OBJC_IVAR_$_CalAutoCompleteOperation._cdQuerySession
_OBJC_IVAR_$_CalAutoCompleteOperation._delegate
_OBJC_IVAR_$_CalAutoCompleteOperation._doDistributionLists
_OBJC_IVAR_$_CalAutoCompleteOperation._doGroups
_OBJC_IVAR_$_CalAutoCompleteOperation._doPeople
_OBJC_IVAR_$_CalAutoCompleteOperation._doRecents
_OBJC_IVAR_$_CalAutoCompleteOperation._doResources
_OBJC_IVAR_$_CalAutoCompleteOperation._doRooms
_OBJC_IVAR_$_CalAutoCompleteOperation._doSearchLocal
_OBJC_IVAR_$_CalAutoCompleteOperation._includePrevious
_OBJC_IVAR_$_CalAutoCompleteOperation._lastSearchedSourceID
_OBJC_IVAR_$_CalAutoCompleteOperation._localEmails
_OBJC_IVAR_$_CalAutoCompleteOperation._localResults
_OBJC_IVAR_$_CalAutoCompleteOperation._prefix
_OBJC_IVAR_$_CalAutoCompleteOperation._recentEmails
_OBJC_IVAR_$_CalAutoCompleteOperation._recentResults
_OBJC_IVAR_$_CalAutoCompleteOperation._recentSearchOngoing
_OBJC_IVAR_$_CalAutoCompleteOperation._returnFullData
_OBJC_IVAR_$_CalAutoCompleteOperation._searchOngoing
_OBJC_IVAR_$_CalAutoCompleteOperation._serverEmails
_OBJC_IVAR_$_CalAutoCompleteOperation._serverResults
_OBJC_IVAR_$_CalAutoCompleteResults._results
_OBJC_IVAR_$_CalAutoCompleteResults._searchString
_OBJC_IVAR_$_CalAutocompleteAttendee._addressBook
_OBJC_IVAR_$_CalAutocompleteAttendee._calAddress
_OBJC_IVAR_$_CalAutocompleteAttendee._firstName
_OBJC_IVAR_$_CalAutocompleteAttendee._geoURLString
_OBJC_IVAR_$_CalAutocompleteAttendee._iiABGroupWrapper
_OBJC_IVAR_$_CalAutocompleteAttendee._isOrganizer
_OBJC_IVAR_$_CalAutocompleteAttendee._lastName
_OBJC_IVAR_$_CalAutocompleteAttendee._person
_OBJC_IVAR_$_CalAutocompleteAttendee._uid
_OBJC_IVAR_$_CalBadgeMonitor._updateCalendarListBadgeCountQueue
_OBJC_IVAR_$_CalBadgeMonitor._updateRemindersBadgeQueue
_OBJC_IVAR_$_CalBirthdayListener._needsReset
_OBJC_IVAR_$_CalBirthdayListener._updateQueue
_OBJC_IVAR_$_CalCalDAVAuthenticationTask._accountInfoProvider
_OBJC_IVAR_$_CalCalDAVAuthenticationTask._taskManager
_OBJC_IVAR_$_CalCalDAVCalendarInfoTaskGroupWrapper._containers
_OBJC_IVAR_$_CalCalDAVCalendarSource._cacheControllerPath
_OBJC_IVAR_$_CalCalDAVCalendarSource._isOwnerMe
_OBJC_IVAR_$_CalCalDAVCalendarSource._lastOperationError
_OBJC_IVAR_$_CalCalDAVCalendarSource._ownerAddress
_OBJC_IVAR_$_CalCalDAVCalendarSource._principalID
_OBJC_IVAR_$_CalCalDAVCalendarSource._principalUID
_OBJC_IVAR_$_CalCalDAVCalendarSource._timeZone
_OBJC_IVAR_$_CalCalDAVContainerSyncMismatch._cTag
_OBJC_IVAR_$_CalCalDAVContainerSyncMismatch._folderURL
_OBJC_IVAR_$_CalCalDAVContainerSyncMismatch._mismatchType
_OBJC_IVAR_$_CalCalDAVContainerSyncMismatch._serverETag
_OBJC_IVAR_$_CalCalDAVContainerSyncMismatch._syncToken
_OBJC_IVAR_$_CalCalDAVContainerSyncMismatch._url
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._calendar
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._calendarSource
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._hasChanges
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._numberOfResourcesAffected
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._principal
_OBJC_IVAR_$_CalCalDAVContainerSyncTaskGroupWrapper._resourcesNotDownloadedSuccessfully
_OBJC_IVAR_$_CalCalDAVInboxSyncTaskGroupWrapper._inboxPath
_OBJC_IVAR_$_CalCalDAVInboxSyncTaskGroupWrapper._processingDelayed
_OBJC_IVAR_$_CalChangeMonitor._fastSyncArgs
_OBJC_IVAR_$_CalChangeMonitor._hasUnsyncedChanges
_OBJC_IVAR_$_CalChangeMonitor._refreshArgs
_OBJC_IVAR_$_CalChangeMonitor._restoreSyncArgs
_OBJC_IVAR_$_CalChangeMonitor._slowSyncArgs
_OBJC_IVAR_$_CalChangeMonitor.disabled
_OBJC_IVAR_$_CalChangeMonitor.migrating
_OBJC_IVAR_$_CalChangeMonitor.syncTimer
_OBJC_IVAR_$_CalClientIDChangeTracker.allChanges
_OBJC_IVAR_$_CalClientIDChangeTracker.entities
_OBJC_IVAR_$_CalClientProxy._externalGroup
_OBJC_IVAR_$_CalClientProxy._serialQueue
_OBJC_IVAR_$_CalDAVAccountInfoProvider._accountCollectionSetName
_OBJC_IVAR_$_CalDAVAccountInfoProvider._accountSearchPropertySet
_OBJC_IVAR_$_CalDAVAccountInfoProvider._clientInfoSentry
_OBJC_IVAR_$_CalDAVAccountInfoProvider._fullName
_OBJC_IVAR_$_CalDAVAccountInfoProvider._isDelegate
_OBJC_IVAR_$_CalDAVAccountInfoProvider._isManagedAttachmentSupported
_OBJC_IVAR_$_CalDAVAccountInfoProvider._mainPrincipalID
_OBJC_IVAR_$_CalDAVAccountInfoProvider._mainPrincipalUID
_OBJC_IVAR_$_CalDAVAccountInfoProvider._overrideBaseURL
_OBJC_IVAR_$_CalDAVAccountInfoProvider._useKerberos
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._fromFullRefresh
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._notifyOnChanges
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._numberOfEventsAffected
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._numberOfInboxEntriesAffected
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._numberOfNotificationsAffected
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._powerAssertionID
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._refreshHadChanges
_OBJC_IVAR_$_CalDAVAccountRefreshQueueableOperation._shouldTakePowerAssertion
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._fallbackProperties
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._inboxURI
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._isAutoScheduleSupported
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._isEventContainer
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._isTaskContainer
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._propertiesToSet
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._state
_OBJC_IVAR_$_CalDAVAddCalendarQueueableOperation._uri
_OBJC_IVAR_$_CalDAVAddSubscriptionCalendarQueueableOperation._calendarURL
_OBJC_IVAR_$_CalDAVAddSubscriptionCalendarQueueableOperation._fallbackProperties
_OBJC_IVAR_$_CalDAVAddSubscriptionCalendarQueueableOperation._propertiesToSet
_OBJC_IVAR_$_CalDAVAddressToPrincipalOperation._accountInfoProvider
_OBJC_IVAR_$_CalDAVAddressToPrincipalOperation._addresses
_OBJC_IVAR_$_CalDAVAddressToPrincipalOperation._opQueue
_OBJC_IVAR_$_CalDAVAddressToPrincipalOperation._principals
_OBJC_IVAR_$_CalDAVAddressToPrincipalOperation._taskManager
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._acAccountID
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._accountID
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._cachedClientToken
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._host
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._identityPersist
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._objectID
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._password
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._port
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._principalPath
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._principalURL
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._scheme
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._serverComplianceClasses
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._serverRoot
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._shouldFailAllTasks
_OBJC_IVAR_$_CalDAVBasicAccountInfoProvider._user
_OBJC_IVAR_$_CalDAVCalendarQueueableOperation._sourceUID
_OBJC_IVAR_$_CalDAVCalendarSource._capabilities
_OBJC_IVAR_$_CalDAVCalendarSource._objectID
_OBJC_IVAR_$_CalDAVCalendarSource._path
_OBJC_IVAR_$_CalDAVCalendarSource._session
_OBJC_IVAR_$_CalDAVCalendarSource._uid
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._context
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._destinationCalendar
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._destinationCalendarURI
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._queryAndMoveIteration
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._sourceCalendar
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._sourceCalendarRemoteEventHrefs
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._sourceCalendarRemoteTodoHrefs
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._state
_OBJC_IVAR_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation._waitingForCompletionBlock
_OBJC_IVAR_$_CalDAVChangeCalendarAffectsAvailabilityQueueableOperation._updateFreeBusySetTaskGroup
_OBJC_IVAR_$_CalDAVChangePublishStatusCalendarQueueableOperation._taskGroup
_OBJC_IVAR_$_CalDAVChangeRequestsProducer._createdScheduleChangeRequests
_OBJC_IVAR_$_CalDAVClientInfoSentry._hostToPluginIDCache
_OBJC_IVAR_$_CalDAVClientInfoSentry._pluginIDToTransmissionCheckResultCache
_OBJC_IVAR_$_CalDAVDeleteDropBoxFileQueueableOperation._attachmentName
_OBJC_IVAR_$_CalDAVDeleteDropBoxFileQueueableOperation._masterEntity
_OBJC_IVAR_$_CalDAVDeleteDropBoxQueueableOperation._dropBoxUri
_OBJC_IVAR_$_CalDAVDeleteEntityQueueableOperation._calendarURL
_OBJC_IVAR_$_CalDAVDeleteEntityQueueableOperation._eTag
_OBJC_IVAR_$_CalDAVDeleteEntityQueueableOperation._scheduleTag
_OBJC_IVAR_$_CalDAVDeleteInboxFileQueueableOperation._filename
_OBJC_IVAR_$_CalDAVDeleteInboxFileQueueableOperation._inboxPath
_OBJC_IVAR_$_CalDAVDeleteNotificationCollectionFileQueueableOperation._filename
_OBJC_IVAR_$_CalDAVDeleteNotificationCollectionFileQueueableOperation._notificationCollectionPath
_OBJC_IVAR_$_CalDAVDownloadDropBoxFileQueueableOperation._attachmentName
_OBJC_IVAR_$_CalDAVDownloadDropBoxFileQueueableOperation._destFileHandle
_OBJC_IVAR_$_CalDAVDownloadDropBoxFileQueueableOperation._dropBoxURL
_OBJC_IVAR_$_CalDAVDownloadDropBoxFileQueueableOperation._etag
_OBJC_IVAR_$_CalDAVDownloadDropBoxFileQueueableOperation._masterEntity
_OBJC_IVAR_$_CalDAVDownloadDropBoxFileQueueableOperation._urlsToTry
_OBJC_IVAR_$_CalDAVETagCache._cTag
_OBJC_IVAR_$_CalDAVETagCache._cacheFilename
_OBJC_IVAR_$_CalDAVETagCache._filenameToETagMap
_OBJC_IVAR_$_CalDAVETagCache._filenameToModifiedLocallyMap
_OBJC_IVAR_$_CalDAVETagCache._filenameToScheduleTagMap
_OBJC_IVAR_$_CalDAVETagCache._inited
_OBJC_IVAR_$_CalDAVETagCache._isDirty
_OBJC_IVAR_$_CalDAVETagCache._uidToFilenameMap
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._calendarTitle
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._clearEventFromQueueAfterForce
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._entityLocalUID
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._entitySharedUID
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._principalTitle
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._serverFilename
_OBJC_IVAR_$_CalDAVEntityQueueableOperation._source
_OBJC_IVAR_$_CalDAVExpandGroupOperation._accountInfoProvider
_OBJC_IVAR_$_CalDAVExpandGroupOperation._groupIdentifier
_OBJC_IVAR_$_CalDAVExpandGroupOperation._groupMembers
_OBJC_IVAR_$_CalDAVExpandGroupQueueableOperation._groupIdentifier
_OBJC_IVAR_$_CalDAVFreeBusyResponseReader._freeBusySpans
_OBJC_IVAR_$_CalDAVFreeBusyResponseReader._readData
_OBJC_IVAR_$_CalDAVFreeBusyResponseReader._timeRange
_OBJC_IVAR_$_CalDAVKerberosPrincipals.clientPrincipal
_OBJC_IVAR_$_CalDAVKerberosPrincipals.servicePrincipal
_OBJC_IVAR_$_CalDAVLookupFreeBusyOperation._freeBusySpans
_OBJC_IVAR_$_CalDAVLookupFreeBusyOperation._task
_OBJC_IVAR_$_CalDAVLookupFreeBusyOperation._timeRange
_OBJC_IVAR_$_CalDAVLookupFreeBusyOperation._userEventArrays
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._bulkCrudMaxResources
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._bulkCrudMaxSize
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._bulkSimpleMaxResources
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._bulkSimpleMaxSize
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._bulkUploadTaskGroup
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._calendarsToCreate
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._context
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._currentCalendarDetails
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._currentRemoteCalendar
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._currentStagedRemoteCTag
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._failGroup
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._gotEtagsForAllItemsInCurrentRemoteCalendar
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._inProgress
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._inProgressPlans
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._indexNotFaultedOut
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._plansToMoveLocal
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._plansToPostProcess
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._previousDelay
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._state
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._unprocessedCalendars
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._unprocessedNewPlans
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._unprocessedUpdateDeleteUIDPlans
_OBJC_IVAR_$_CalDAVMigrateToServerQueueableOperation._unprocessedUpdatePlans
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._destinationCalendarUID
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._etag
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._filename
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._icsData
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._objectID
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._scheduleTag
_OBJC_IVAR_$_CalDAVMoveEntityQueueableOperation._sourceCalendarUID
_OBJC_IVAR_$_CalDAVNotificationContainerSyncTaskGroupWrapper._notificationPath
_OBJC_IVAR_$_CalDAVOccurrenceChange._changes
_OBJC_IVAR_$_CalDAVOccurrenceChange._isMaster
_OBJC_IVAR_$_CalDAVOccurrenceChange._recurrenceID
_OBJC_IVAR_$_CalDAVOfficeHour._enabled
_OBJC_IVAR_$_CalDAVOfficeHour._endDate
_OBJC_IVAR_$_CalDAVOfficeHour._startDate
_OBJC_IVAR_$_CalDAVOfficeHour._weekday
_OBJC_IVAR_$_CalDAVOperationQueue._entityCountedSet
_OBJC_IVAR_$_CalDAVOperationQueue._failedOperations
_OBJC_IVAR_$_CalDAVOperationQueue._needsAccountPropertyRefresh
_OBJC_IVAR_$_CalDAVOperationQueue._operations
_OBJC_IVAR_$_CalDAVOperationQueue._sessionID
_OBJC_IVAR_$_CalDAVOperationQueue._stopped
_OBJC_IVAR_$_CalDAVPersistentQueueableOperation._changeRequestID
_OBJC_IVAR_$_CalDAVPersistentQueueableOperation._sequenceNumber
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation._attendeeMultipleStringPrefixSearch
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation._isRunning
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation._results
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation._searchStrings
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation._searchTypes
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation._session
_OBJC_IVAR_$_CalDAVPrincipalPropertySearchOperation.delegate
_OBJC_IVAR_$_CalDAVPrincipalResult._cuAddresses
_OBJC_IVAR_$_CalDAVPrincipalResult._displayName
_OBJC_IVAR_$_CalDAVPrincipalResult._emails
_OBJC_IVAR_$_CalDAVPrincipalResult._firstName
_OBJC_IVAR_$_CalDAVPrincipalResult._lastName
_OBJC_IVAR_$_CalDAVPrincipalResult._overrideBaseURL
_OBJC_IVAR_$_CalDAVPrincipalResult._principal
_OBJC_IVAR_$_CalDAVPrincipalResult._type
_OBJC_IVAR_$_CalDAVQueueableOperation._accountInfoProvider
_OBJC_IVAR_$_CalDAVQueueableOperation._dependencies
_OBJC_IVAR_$_CalDAVQueueableOperation._error
_OBJC_IVAR_$_CalDAVQueueableOperation._pendingRetry
_OBJC_IVAR_$_CalDAVQueueableOperation._retryCounter
_OBJC_IVAR_$_CalDAVQueueableOperation._running
_OBJC_IVAR_$_CalDAVQueueableOperation._sessionID
_OBJC_IVAR_$_CalDAVQueueableOperation._startDate
_OBJC_IVAR_$_CalDAVQueueableOperation._taskManager
_OBJC_IVAR_$_CalDAVRefreshDelegateListQueueableOperation._completionBlock
_OBJC_IVAR_$_CalDAVRefreshDelegateListQueueableOperation._delegateInfos
_OBJC_IVAR_$_CalDAVRefreshDelegateListQueueableOperation._serverSupportsDelegates
_OBJC_IVAR_$_CalDAVRemoveCalendarQueueableOperation._inboxURI
_OBJC_IVAR_$_CalDAVRemoveCalendarQueueableOperation._uri
_OBJC_IVAR_$_CalDAVRemovePropertyQueueableOperation._property
_OBJC_IVAR_$_CalDAVRemovePropertyQueueableOperation._propertyToRemove
_OBJC_IVAR_$_CalDAVRemovePropertyQueueableOperation._url
_OBJC_IVAR_$_CalDAVResource._data
_OBJC_IVAR_$_CalDAVResource._etag
_OBJC_IVAR_$_CalDAVResource._filename
_OBJC_IVAR_$_CalDAVResource._scheduleChanges
_OBJC_IVAR_$_CalDAVResource._scheduleTag
_OBJC_IVAR_$_CalDAVRevertEntityQueueableOperation._entityLocalUID
_OBJC_IVAR_$_CalDAVRevertEntityQueueableOperation._entitySharedUID
_OBJC_IVAR_$_CalDAVRevertEntityQueueableOperation._revertOperationType
_OBJC_IVAR_$_CalDAVRevertEntityQueueableOperation._serverFilename
_OBJC_IVAR_$_CalDAVRevertEntityQueueableOperation._source
_OBJC_IVAR_$_CalDAVScanDropBoxQueueableOperation._eventID
_OBJC_IVAR_$_CalDAVScanDropBoxQueueableOperation._source
_OBJC_IVAR_$_CalDAVScanResponse._etag
_OBJC_IVAR_$_CalDAVScanResponse._fileURL
_OBJC_IVAR_$_CalDAVScheduleChangesProperty._actionType
_OBJC_IVAR_$_CalDAVScheduleChangesProperty._attendeeAddress
_OBJC_IVAR_$_CalDAVScheduleChangesProperty._dateStamp
_OBJC_IVAR_$_CalDAVScheduleChangesProperty._masterChange
_OBJC_IVAR_$_CalDAVScheduleChangesProperty._occurrenceChanges
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._attachmentsSent
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._etag
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._event
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._localUID
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._meAddress
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._method
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._outboxPath
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._parentEvent
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._recipients
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._scheduleData
_OBJC_IVAR_$_CalDAVScheduleEventQueueableOperation._scheduleIsAnUpdate
_OBJC_IVAR_$_CalDAVSession._accountInfoProvider
_OBJC_IVAR_$_CalDAVSession._calendarSources
_OBJC_IVAR_$_CalDAVSession._fullRefreshDate
_OBJC_IVAR_$_CalDAVSession._isDelegate
_OBJC_IVAR_$_CalDAVSession._pushActive
_OBJC_IVAR_$_CalDAVSession._pushToken
_OBJC_IVAR_$_CalDAVSession._queue
_OBJC_IVAR_$_CalDAVSetCalendarColorQueueableOperation._backupElement
_OBJC_IVAR_$_CalDAVSetPropertyQueueableOperation._propPatchElement
_OBJC_IVAR_$_CalDAVSetPropertyQueueableOperation._uri
_OBJC_IVAR_$_CalDAVSharedCalendarInvitationResponseQueueableOperation._calendarHomeURL
_OBJC_IVAR_$_CalDAVSharedCalendarInvitationResponseQueueableOperation._invitation
_OBJC_IVAR_$_CalDAVSharedCalendarInvitationResponseQueueableOperation._response
_OBJC_IVAR_$_CalDAVSharedCalendarInvitationResponseQueueableOperation._taskGroup
_OBJC_IVAR_$_CalDAVTaskManagerOperation._error
_OBJC_IVAR_$_CalDAVTaskManagerOperation._taskManager
_OBJC_IVAR_$_CalDAVUpdateShareesQueuableOperation._shareesToRemove
_OBJC_IVAR_$_CalDAVUpdateShareesQueuableOperation._shareesToUpdate
_OBJC_IVAR_$_CalDAVUploadDropBoxFileQueueableOperation._attachmentName
_OBJC_IVAR_$_CalDAVUploadDropBoxFileQueueableOperation._attachments
_OBJC_IVAR_$_CalDAVUploadDropBoxFileQueueableOperation._attendeePrincipalURLs
_OBJC_IVAR_$_CalDAVUploadDropBoxFileQueueableOperation._contentTypes
_OBJC_IVAR_$_CalDAVUploadDropBoxFileQueueableOperation._dropBoxPath
_OBJC_IVAR_$_CalDAVUploadDropBoxFileQueueableOperation._masterEntity
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._calendarURL
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._clearedSyncMalfunctionProperties
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._currentlyRunningGetEntityTask
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._eTag
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._icsData
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._objectID
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._overwrite
_OBJC_IVAR_$_CalDAVWriteEntityQueueableOperation._scheduleTag
_OBJC_IVAR_$_CalDefaultDictionary._defaultClass
_OBJC_IVAR_$_CalDefaultDictionary._dict
_OBJC_IVAR_$_CalDelegateFoldersPermissions._calendarPermission
_OBJC_IVAR_$_CalDelegateFoldersPermissions._taskPermission
_OBJC_IVAR_$_CalDelegateUserInfo._alarmsEnabled
_OBJC_IVAR_$_CalDelegateUserInfo._calendarsPermission
_OBJC_IVAR_$_CalDelegateUserInfo._commonName
_OBJC_IVAR_$_CalDelegateUserInfo._displayString
_OBJC_IVAR_$_CalDelegateUserInfo._managedObjectID
_OBJC_IVAR_$_CalDelegateUserInfo._preferredUserAddress
_OBJC_IVAR_$_CalDelegateUserInfo._tasksPermission
_OBJC_IVAR_$_CalDelegateUserInfo._uri
_OBJC_IVAR_$_CalEventOccurrence.__localUID
_OBJC_IVAR_$_CalEventOccurrence.__sharedUID
_OBJC_IVAR_$_CalEventOccurrence._accountImageID
_OBJC_IVAR_$_CalEventOccurrence._attendeeIconState
_OBJC_IVAR_$_CalEventOccurrence._birthdayTitle
_OBJC_IVAR_$_CalEventOccurrence._cachedDaysSpanned
_OBJC_IVAR_$_CalEventOccurrence._cachedEnd
_OBJC_IVAR_$_CalEventOccurrence._cachedEndDateWithoutTimeComponents
_OBJC_IVAR_$_CalEventOccurrence._cachedIsMultiDayTimedEvent
_OBJC_IVAR_$_CalEventOccurrence._cachedStart
_OBJC_IVAR_$_CalEventOccurrence._cachedStartDateWithoutTimeComponents
_OBJC_IVAR_$_CalEventOccurrence._calendarServerAccess
_OBJC_IVAR_$_CalEventOccurrence._changedProperties
_OBJC_IVAR_$_CalEventOccurrence._creationDate
_OBJC_IVAR_$_CalEventOccurrence._date
_OBJC_IVAR_$_CalEventOccurrence._hasAttachment
_OBJC_IVAR_$_CalEventOccurrence._initialEnd
_OBJC_IVAR_$_CalEventOccurrence._initialStart
_OBJC_IVAR_$_CalEventOccurrence._invitationMode
_OBJC_IVAR_$_CalEventOccurrence._isAllDay
_OBJC_IVAR_$_CalEventOccurrence._isEphemeral
_OBJC_IVAR_$_CalEventOccurrence._location
_OBJC_IVAR_$_CalEventOccurrence._managedCalendarObjectID
_OBJC_IVAR_$_CalEventOccurrence._managedEventObjectID
_OBJC_IVAR_$_CalEventOccurrence._masterManagedEventObjectID
_OBJC_IVAR_$_CalEventOccurrence._myAttendeeStatus
_OBJC_IVAR_$_CalEventOccurrence._needsRebin
_OBJC_IVAR_$_CalEventOccurrence._needsReply
_OBJC_IVAR_$_CalEventOccurrence._occurrenceID
_OBJC_IVAR_$_CalEventOccurrence._permission
_OBJC_IVAR_$_CalEventOccurrence._recurrenceDate
_OBJC_IVAR_$_CalEventOccurrence._status
_OBJC_IVAR_$_CalEventOccurrence._timeZone
_OBJC_IVAR_$_CalEventOccurrence._timeZoneString
_OBJC_IVAR_$_CalEventOccurrence._title
_OBJC_IVAR_$_CalEventOccurrence._travelDuration
_OBJC_IVAR_$_CalEventOccurrence._travelRouteType
_OBJC_IVAR_$_CalEventOccurrenceCache._bestGuessCalendarIDs
_OBJC_IVAR_$_CalEventOccurrenceCache._bufferRange
_OBJC_IVAR_$_CalEventOccurrenceCache._cacheData
_OBJC_IVAR_$_CalEventOccurrenceCache._calendarIDs
_OBJC_IVAR_$_CalEventOccurrenceCache._directionOfRangeChange
_OBJC_IVAR_$_CalEventOccurrenceCache._foregroundResetCompleted
_OBJC_IVAR_$_CalEventOccurrenceCache._generationCounter
_OBJC_IVAR_$_CalEventOccurrenceCache._isMainWindowCache
_OBJC_IVAR_$_CalEventOccurrenceCache._managedObjectContext
_OBJC_IVAR_$_CalEventOccurrenceCache._prefetchAttendees
_OBJC_IVAR_$_CalEventOccurrenceCache._range
_OBJC_IVAR_$_CalEventOccurrenceCacheData._binnedDates
_OBJC_IVAR_$_CalEventOccurrenceCacheData._calendarObjectIDs
_OBJC_IVAR_$_CalEventOccurrenceCacheData._datesForManagedObjectIDs
_OBJC_IVAR_$_CalEventOccurrenceCacheData._detachedObjectIDToMasterObjectID
_OBJC_IVAR_$_CalEventOccurrenceCacheData._occurrenceForOccurrenceIDs
_OBJC_IVAR_$_CalEventOccurrenceCacheData._occurrencesForDates
_OBJC_IVAR_$_CalEventOccurrenceCacheData._occurrencesForManagedObjectIDs
_OBJC_IVAR_$_CalEventOccurrenceCacheData._range
_OBJC_IVAR_$_CalEventOccurrenceCacheData._timeZoneString
_OBJC_IVAR_$_CalExchangeBasicAccountInfoProvider._login
_OBJC_IVAR_$_CalExchangeBasicAccountInfoProvider._password
_OBJC_IVAR_$_CalExchangeBasicAccountInfoProvider._sessionID
_OBJC_IVAR_$_CalExchangeCalendarSource._host
_OBJC_IVAR_$_CalExchangeCalendarSource._isDelegate
_OBJC_IVAR_$_CalExchangeCalendarSource._isEditable
_OBJC_IVAR_$_CalExchangeCalendarSource._meForSource
_OBJC_IVAR_$_CalExchangeCalendarSource._sessionID
_OBJC_IVAR_$_CalExchangeCreateAttachmentOperation._attachmentID
_OBJC_IVAR_$_CalExchangeCreateAttachmentOperation._itemObjectID
_OBJC_IVAR_$_CalExchangeCreateCalendarItemOperation._eventID
_OBJC_IVAR_$_CalExchangeCreateCalendarItemOperation._shouldSendInvitation
_OBJC_IVAR_$_CalExchangeCreateFolderOperation._calendarID
_OBJC_IVAR_$_CalExchangeCreateResponseOperation._eventID
_OBJC_IVAR_$_CalExchangeCreateResponseOperation._eventName
_OBJC_IVAR_$_CalExchangeCreateResponseOperation._folderId
_OBJC_IVAR_$_CalExchangeCreateResponseOperation._itemId
_OBJC_IVAR_$_CalExchangeCreateResponseOperation._suppressNotification
_OBJC_IVAR_$_CalExchangeCreateResponseOperation._type
_OBJC_IVAR_$_CalExchangeCreateTaskOperation._taskID
_OBJC_IVAR_$_CalExchangeDeleteAttachmentOperation._attachmentId
_OBJC_IVAR_$_CalExchangeDeleteAttachmentOperation._attachmentName
_OBJC_IVAR_$_CalExchangeDeleteAttachmentOperation._attachmentObjectId
_OBJC_IVAR_$_CalExchangeDeleteAttachmentOperation._itemObjectID
_OBJC_IVAR_$_CalExchangeDeleteFolderOperation._folderId
_OBJC_IVAR_$_CalExchangeDeleteFolderOperation._folderName
_OBJC_IVAR_$_CalExchangeDeleteFolderOperation._folderObjectId
_OBJC_IVAR_$_CalExchangeDeleteItemOperation._itemId
_OBJC_IVAR_$_CalExchangeDeleteItemOperation._itemName
_OBJC_IVAR_$_CalExchangeDeleteItemOperation._itemObjectID
_OBJC_IVAR_$_CalExchangeDeleteItemOperation._itemType
_OBJC_IVAR_$_CalExchangeDeleteItemOperation._shouldSendCancellation
_OBJC_IVAR_$_CalExchangeGetAttachmentOperation._attachmentIDs
_OBJC_IVAR_$_CalExchangeGetAttachmentOperation._calendarItemObjectID
_OBJC_IVAR_$_CalExchangeGetEffectiveRightsOperation._calendarObjectID
_OBJC_IVAR_$_CalExchangeGetItemOperation._folderId
_OBJC_IVAR_$_CalExchangeGetItemOperation._itemIds
_OBJC_IVAR_$_CalExchangeGetItemOperation._messageTracerUID
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._addresses
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._emailToEventDetailsArray
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._emailToFreeBusySpans
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._maskedSharedUID
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._messageTracerStartDate
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._messageTracerUID
_OBJC_IVAR_$_CalExchangeGetUserAvailabilityOperation._timeRange
_OBJC_IVAR_$_CalExchangeMoveItemOperation._itemID
_OBJC_IVAR_$_CalExchangeSession._connectionHasBeenTested
_OBJC_IVAR_$_CalExchangeSession._connectionIsBeingTested
_OBJC_IVAR_$_CalExchangeSession._managedObjectIDsToItemIds
_OBJC_IVAR_$_CalExchangeSession._queue
_OBJC_IVAR_$_CalExchangeSyncAccountOperation._fetchMailbox
_OBJC_IVAR_$_CalExchangeSyncAccountOperation._messageTracerUID
_OBJC_IVAR_$_CalExchangeSyncAccountOperation._refreshDelegatePrivileges
_OBJC_IVAR_$_CalExchangeSyncDeletedItemsFolderOperation._folderId
_OBJC_IVAR_$_CalExchangeSyncFolderItemsOperation._folderId
_OBJC_IVAR_$_CalExchangeSyncFolderItemsOperation._messageTracerUID
_OBJC_IVAR_$_CalExchangeTestConnectionOperation._accountInfoProvider
_OBJC_IVAR_$_CalExchangeUpdateCalendarItemOperation._changedValues
_OBJC_IVAR_$_CalExchangeUpdateCalendarItemOperation._eventID
_OBJC_IVAR_$_CalExchangeUpdateCalendarItemOperation._shouldSendInvitation
_OBJC_IVAR_$_CalExchangeUpdateFolderOperation._calendarID
_OBJC_IVAR_$_CalExchangeUpdateFolderOperation._changedValues
_OBJC_IVAR_$_CalExchangeUpdateTaskOperation._changedValues
_OBJC_IVAR_$_CalExchangeUpdateTaskOperation._taskID
_OBJC_IVAR_$_CalFTPOperation._completionBlock
_OBJC_IVAR_$_CalFTPOperation._error
_OBJC_IVAR_$_CalFTPOperation._isCancelled
_OBJC_IVAR_$_CalFTPOperation._isFinished
_OBJC_IVAR_$_CalFTPOperation._password
_OBJC_IVAR_$_CalFTPOperation._progressBlock
_OBJC_IVAR_$_CalFTPOperation._url
_OBJC_IVAR_$_CalFTPOperation._user
_OBJC_IVAR_$_CalFTPReadOperation._mutableData
_OBJC_IVAR_$_CalFTPReadOperation._readStream
_OBJC_IVAR_$_CalFTPReadOperation._resourceSize
_OBJC_IVAR_$_CalFTPReadOperation._resourceSizeChecked
_OBJC_IVAR_$_CalFTPReadOperation._resourceSizeIsKnown
_OBJC_IVAR_$_CalFTPWriteOperation._data
_OBJC_IVAR_$_CalFTPWriteOperation._numberOfBytesWritten
_OBJC_IVAR_$_CalFTPWriteOperation._writeStream
_OBJC_IVAR_$_CalFileCDChangeTracker.basePath
_OBJC_IVAR_$_CalFileCDChangeTracker.fileNamesBeingProcessed
_OBJC_IVAR_$_CalFreeBusyCache._addressesToRefresh
_OBJC_IVAR_$_CalFreeBusyCache._cache
_OBJC_IVAR_$_CalFreeBusyCache._cacheExpiryTimer
_OBJC_IVAR_$_CalFreeBusyCache._eventsCache
_OBJC_IVAR_$_CalFreeBusyCache._expiresNextTimer
_OBJC_IVAR_$_CalFreeBusyCache._expiresNextTimerPlusOne
_OBJC_IVAR_$_CalFreeBusyCache._principalID
_OBJC_IVAR_$_CalFreeBusyCache._runningLookups
_OBJC_IVAR_$_CalFreeBusyEventDetails._endTime
_OBJC_IVAR_$_CalFreeBusyEventDetails._startTime
_OBJC_IVAR_$_CalFreeBusyEventDetails._title
_OBJC_IVAR_$_CalFreeBusyEventDetails._uid
_OBJC_IVAR_$_CalFreeBusyOperationInfo._aSelector
_OBJC_IVAR_$_CalFreeBusyOperationInfo._addresses
_OBJC_IVAR_$_CalFreeBusyOperationInfo._callbackObject
_OBJC_IVAR_$_CalFreeBusyOperationInfo._cancelled
_OBJC_IVAR_$_CalFreeBusyOperationInfo._eventSharedUid
_OBJC_IVAR_$_CalFreeBusyOperationInfo._timeRange
_OBJC_IVAR_$_CalGroupMembersCache._savedGroups
_OBJC_IVAR_$_CalHolidayCalendarSubscriber._calDAVTaskManager
_OBJC_IVAR_$_CalLocalCalendarSource._isEditable
_OBJC_IVAR_$_CalManagedAttachment._data
_OBJC_IVAR_$_CalManagedCalDAVCalendar._keepEventsOnSplit
_OBJC_IVAR_$_CalManagedCalDAVCalendar._keepRemindersOnSplit
_OBJC_IVAR_$_CalManagedCalDAVPrincipal._pushTransportDictionary
_OBJC_IVAR_$_CalManagedCalendarItem._currentlyModifyingDefaultAlarms
_OBJC_IVAR_$_CalManagedCalendarItem._path
_OBJC_IVAR_$_CalManagedMessage._cachedBestMessageForDisplayAsInvitation
_OBJC_IVAR_$_CalManagedMessage._cachedClosestOccurrenceID
_OBJC_IVAR_$_CalManagedMessage._eventServerFilename
_OBJC_IVAR_$_CalManagedMessage._isIntentionallyDetached
_OBJC_IVAR_$_CalManagedMessage._isIntentionallyReplyToAll
_OBJC_IVAR_$_CalManagedMessage._notify
_OBJC_IVAR_$_CalManagedMessage._path
_OBJC_IVAR_$_CalManagedNode._path
_OBJC_IVAR_$_CalManagedObject._willSaveIterations
_OBJC_IVAR_$_CalManagedObjectContext._associatedUIDs
_OBJC_IVAR_$_CalManagedObjectContext._childContextReferences
_OBJC_IVAR_$_CalManagedObjectContext._childContexts
_OBJC_IVAR_$_CalManagedObjectContext._containsCalendarData
_OBJC_IVAR_$_CalManagedObjectContext._deletedObjectIDsFromMerge
_OBJC_IVAR_$_CalManagedObjectContext._needsIAGroupSync
_OBJC_IVAR_$_CalManagedObjectContext._notifyCalendarAgent
_OBJC_IVAR_$_CalManagedObjectContext._originatorID
_OBJC_IVAR_$_CalManagedObjectContext._threadSafeData
_OBJC_IVAR_$_CalManagedObjectContext._trackChangesForCalDAVServer
_OBJC_IVAR_$_CalManagedObjectContext._writeChangesToCalDAVServer
_OBJC_IVAR_$_CalManagedObjectContext._writeChangesToTruthFileStore
_OBJC_IVAR_$_CalManagedPrincipal._statusIsBusy
_OBJC_IVAR_$_CalManagedPublication._needsPublish
_OBJC_IVAR_$_CalManagedSource._status
_OBJC_IVAR_$_CalNamedMutex._name
_OBJC_IVAR_$_CalNamedMutex._port
_OBJC_IVAR_$_CalNetworkChangeNotifier._asleep
_OBJC_IVAR_$_CalNetworkChangeNotifier._checkedNetwork
_OBJC_IVAR_$_CalNetworkChangeNotifier._isNetworkUp
_OBJC_IVAR_$_CalNetworkChangeNotifier._listeners
_OBJC_IVAR_$_CalNetworkChangeNotifier._pendingPost
_OBJC_IVAR_$_CalNetworkChangeNotifier._runLoopSource
_OBJC_IVAR_$_CalNetworkChangeNotifier._store
_OBJC_IVAR_$_CalOperationQueue._context
_OBJC_IVAR_$_CalOperationQueue._debugOperations
_OBJC_IVAR_$_CalOperationQueue._lastSequenceNumberProcessed
_OBJC_IVAR_$_CalOperationQueue._operations
_OBJC_IVAR_$_CalOperationQueue._queue
_OBJC_IVAR_$_CalOperationQueue._writeOperationsCountedSet
_OBJC_IVAR_$_CalPersistentOperation._managedOperation
_OBJC_IVAR_$_CalPersistentStoreCoordinator._calendarStorePath
_OBJC_IVAR_$_CalPersistentStoreCoordinator._isForMigration
_OBJC_IVAR_$_CalPersistentStoreCoordinator._persistentStorePath
_OBJC_IVAR_$_CalPreviousController._hasUnsavedChanges
_OBJC_IVAR_$_CalPreviousController._previousLists
_OBJC_IVAR_$_CalPropFindSynchronousTask._lastRedirectURL
_OBJC_IVAR_$_CalPropFindSynchronousTask._responses
_OBJC_IVAR_$_CalPublisherManager._autoPublishDelay
_OBJC_IVAR_$_CalPublisherManager._autoPublishStatus
_OBJC_IVAR_$_CalPublisherManager._isAutoPublishEnabled
_OBJC_IVAR_$_CalPublisherManager._publish_queue
_OBJC_IVAR_$_CalPublisherManager._publishers
_OBJC_IVAR_$_CalRemoteCalendarSource._calendarObjectID
_OBJC_IVAR_$_CalRemoteCalendarSource._sharingStatus
_OBJC_IVAR_$_CalSQLCDChangeTracker._clientGeneration
_OBJC_IVAR_$_CalSQLCDChangeTracker._db
_OBJC_IVAR_$_CalSQLCDChangeTracker._getAllModificationsStatement
_OBJC_IVAR_$_CalSQLCDChangeTracker._getGenerationStatement
_OBJC_IVAR_$_CalSQLCDChangeTracker._modifiedObjectsForEntityStatement
_OBJC_IVAR_$_CalSQLCDChangeTracker._setGenerationStatement
_OBJC_IVAR_$_CalSQLCDChangeTracker._updateObjectStatement
_OBJC_IVAR_$_CalSQLCDChangeTracker.clearProcessedChangesStatement
_OBJC_IVAR_$_CalSession._error
_OBJC_IVAR_$_CalSession._interval
_OBJC_IVAR_$_CalSession._status
_OBJC_IVAR_$_CalSessionStateCache._connectedStates
_OBJC_IVAR_$_CalSubscriptionOperation._buffer
_OBJC_IVAR_$_CalSubscriptionOperation._calendarIsEventContainer
_OBJC_IVAR_$_CalSubscriptionOperation._calendarIsTaskContainer
_OBJC_IVAR_$_CalSubscriptionOperation._connection
_OBJC_IVAR_$_CalSubscriptionOperation._delegate
_OBJC_IVAR_$_CalSubscriptionOperation._displayURL
_OBJC_IVAR_$_CalSubscriptionOperation._document
_OBJC_IVAR_$_CalSubscriptionOperation._error
_OBJC_IVAR_$_CalSubscriptionOperation._inProgress
_OBJC_IVAR_$_CalSubscriptionOperation._isSynchronous
_OBJC_IVAR_$_CalSubscriptionOperation._noChanges
_OBJC_IVAR_$_CalSubscriptionOperation._protectionSpace
_OBJC_IVAR_$_CalSubscriptionOperation._response
_OBJC_IVAR_$_CalSubscriptionOperation._subscriptionURL
_OBJC_IVAR_$_CalSubscriptionSession._isAutoRefreshed
_OBJC_IVAR_$_CalSubscriptionSession._isUpdating
_OBJC_IVAR_$_CalSubscriptionSession._needsRefresh
_OBJC_IVAR_$_CalSubscriptionSession._password
_OBJC_IVAR_$_CalSubscriptionSession._tryCredentialsOnNextSync
_OBJC_IVAR_$_CalSubscriptionSession._username
_OBJC_IVAR_$_CalTaskManager._activeModalTask
_OBJC_IVAR_$_CalTaskManager._activeQueuedTask
_OBJC_IVAR_$_CalTaskManager._heldIndependentTasks
_OBJC_IVAR_$_CalTaskManager._independentTasks
_OBJC_IVAR_$_CalTaskManager._modalHeldActiveQueuedTask
_OBJC_IVAR_$_CalTaskManager._modalHeldIndependentTasks
_OBJC_IVAR_$_CalTaskManager._queuedModalTasks
_OBJC_IVAR_$_CalTaskManager._queuedTasks
_OBJC_IVAR_$_CalTaskManager._state
_OBJC_IVAR_$_CalTaskManager._workRunLoop
_OBJC_IVAR_$_CalTruthFileCreateDirectory._path
_OBJC_IVAR_$_CalTruthFileDataWrite._data
_OBJC_IVAR_$_CalTruthFileDataWrite._path
_OBJC_IVAR_$_CalTruthFileICSWrite._document
_OBJC_IVAR_$_CalTruthFileICSWrite._path
_OBJC_IVAR_$_CalTruthFileOperation._disabledSuddenTermination
_OBJC_IVAR_$_CalTruthFileOperation._methods
_OBJC_IVAR_$_CalTruthFileRemove._isDirectory
_OBJC_IVAR_$_CalTruthFileRemove._path
_OBJC_IVAR_$_CalTruthFileStore._queue
_OBJC_IVAR_$_CalUnifiedPerson._linkID
_OBJC_IVAR_$_CalUnifiedPerson._linkedPeople
_OBJC_IVAR_$_CalUnifiedPerson._mainPerson
_OBJC_IVAR_$_CalUnifiedPerson._preferredAlternateBirthdayComponents
_OBJC_IVAR_$_CalUnifiedPerson._preferredBirthdayComponents
_OBJC_IVAR_$_CalUnifiedPerson._uid
_OBJC_IVAR_$_CalUserAlarmNotification._alarm
_OBJC_IVAR_$_CalUserAlarmNotification._date
_OBJC_IVAR_$_CalUserAlarmNotification._isForLocation
_OBJC_IVAR_$_CalUserAlarmNotification._notification
_OBJC_IVAR_$_CalUserMessageNotification._message
_OBJC_IVAR_$_CalUserMessageNotification._notification
_OBJC_IVAR_$_CalUserNotificationCenter._icalCenter
_OBJC_IVAR_$_CalUserNotificationCenter._icalCenterCache
_OBJC_IVAR_$_CalUserNotificationCenter._locationManager
_OBJC_IVAR_$_CalUserNotificationCenter._monitoredRegionsCache
_OBJC_IVAR_$_CalUserNotificationCenter._reminderCenter
_OBJC_IVAR_$_CalUserNotificationCenter._reminderCenterCache
_OBJC_IVAR_$_CalUserNotificationCenterCache._center
_OBJC_IVAR_$_CalUserNotificationCenterCache._deliveredNotifications
_OBJC_IVAR_$_CalUserNotificationCenterCache._displayedNotifications
_OBJC_IVAR_$_CalUserNotificationCenterCache._scheduledNotifications
_OBJC_IVAR_$_CalUserNotificationCenterHelper._alarmScan
_OBJC_IVAR_$_CalUserNotificationCenterHelper._findQueue
_OBJC_IVAR_$_CalUserNotificationCenterHelper._postQueue
_OBJC_IVAR_$_CalVirtualSource._displayOrder
_OBJC_IVAR_$_CalVirtualSource._localizedTitle
_OBJC_IVAR_$_CalVirtualSource._typeString
_OBJC_IVAR_$_CalendarItemMigratePlan._localItem
_OBJC_IVAR_$_CalendarItemMigratePlan._remoteCalendar
_OBJC_IVAR_$_CalendarItemMigratePlan._remoteItem
_OBJC_IVAR_$_CalendarItemMigratePlan._type
_OBJC_IVAR_$_CalendarItemMigratePlan._updatedETag
_OBJC_IVAR_$_CalendarItemMigratePlan._updatedFilename
_OBJC_IVAR_$_CaliTIPMessage._data
_OBJC_IVAR_$_CaliTIPMessage._document
_OBJC_IVAR_$_CaliTIPMessage._eTag
_OBJC_IVAR_$_CaliTIPMessage._event
_OBJC_IVAR_$_CaliTIPMessage._filename
_OBJC_IVAR_$_CaliTIPMessage._localImport
_OBJC_IVAR_$_CaliTIPMessage._scheduleChanges
_OBJC_IVAR_$_CoreAlarm._originEntity
_OBJC_IVAR_$_CoreAlarmOccurrence._isSnoozed
_OBJC_IVAR_$_CoreAlarmOccurrence._originOccurrence
_OBJC_IVAR_$_CoreAlarmTrigger._location
_OBJC_IVAR_$_CoreAlarmTrigger._proximity
_OBJC_IVAR_$_CoreCalendar._orderedstorage
_OBJC_IVAR_$_CoreCalendar._shared2local
_OBJC_IVAR_$_CoreCalendar._uidstorage
_OBJC_IVAR_$_CoreCalendarSource._bundlePath
_OBJC_IVAR_$_CoreCalendarSource._key
_OBJC_IVAR_$_CoreCalendarSource._objectID
_OBJC_IVAR_$_CoreCalendarsManager._knownSources
_OBJC_IVAR_$_CoreEvent._alldaycacheEnd
_OBJC_IVAR_$_CoreEvent._alldaycacheStart
_OBJC_IVAR_$_CoreEvent._alldaycacheTimeZone
_OBJC_IVAR_$_CoreEvent._eventCachedEndDate
_OBJC_IVAR_$_CoreEvent._hasEverUsedWorkingElswhere
_OBJC_IVAR_$_CoreEvent._travelDuration
_OBJC_IVAR_$_CoreEventOccurrence._cachedDuration
_OBJC_IVAR_$_CoreEventOccurrence._cachedEndDate
_OBJC_IVAR_$_CoreEventOccurrence._regularOccurrence
_OBJC_IVAR_$_CoreRecurrenceRule._cachedDates
_OBJC_IVAR_$_CoreRecurrenceRule._cachedStartDate
_OBJC_IVAR_$_CoreRecurrenceRule._cachedTimeRange
_OBJC_IVAR_$_CoreRecurrenceRule._range
_OBJC_IVAR_$_CoreRecurrenceRule._ruleCachedEndDates
_OBJC_IVAR_$_EntityIdChangeTracker.entityName
_OBJC_IVAR_$_EntityIdChangeTracker.oldById
_OBJC_IVAR_$_EntityIdChangeTracker.oldByIdentity
_OBJC_IVAR_$_EventIdChangeTracker.hasOrganizer
_OBJC_IVAR_$_EventIdChangeTracker.hasRecurrence
_OBJC_IVAR_$_IIABQuerySession._cache
_OBJC_IVAR_$_IIABQuerySession._query
_OBJC_IVAR_$_IIABQuerySession._results
_OBJC_IVAR_$_IIABQuerySession._returnFullContactData
_OBJC_IVAR_$_IIABQuerySession._searchLocalContacts
_OBJC_IVAR_$_IIABQuerySession._shouldReturnDistributionLists
_OBJC_IVAR_$_IICDQuerySession._collectionSetName
_OBJC_IVAR_$_IICDQuerySession._combinedResults
_OBJC_IVAR_$_IICDQuerySession._host
_OBJC_IVAR_$_IICDQuerySession._isRunning
_OBJC_IVAR_$_IICDQuerySession._newResults
_OBJC_IVAR_$_IICDQuerySession._oldResults
_OBJC_IVAR_$_IICDQuerySession._searchSet
_OBJC_IVAR_$_IICDQuerySession._searchString
_OBJC_IVAR_$_IICDQuerySession._searchTypes
_OBJC_IVAR_$_IICDQuerySessionResults._results
_OBJC_IVAR_$_IICDQuerySessionResults._searchString
_OBJC_IVAR_$_IIQuerySession._delegate
_OBJC_IVAR_$_IIQuerySession._doGroups
_OBJC_IVAR_$_IIQuerySession._doPeople
_OBJC_IVAR_$_IIQuerySession._doResources
_OBJC_IVAR_$_IIQuerySession._doRooms
_OBJC_IVAR_$_IIQuerySession._includePrevious
_OBJC_IVAR_$_IIQuerySession._isCancelled
_OBJC_IVAR_$_IIQuerySession._queue
_OBJC_IVAR_$_IssueCounter._count
_OBJC_IVAR_$_LocalCalendarDetails._localCalendar
_OBJC_IVAR_$_LocalCalendarDetails._targetsVTODO
_OBJC_IVAR_$_OurOwnMutableNSDate._calDate
_OBJC_IVAR_$_RBNode._isBlack
_OBJC_IVAR_$_RBNode._key
_OBJC_IVAR_$_RBNode._left
_OBJC_IVAR_$_RBNode._parent
_OBJC_IVAR_$_RBNode._right
_OBJC_IVAR_$_RBNode._value
_OBJC_METACLASS_$_AlarmIdChangeTracker
_OBJC_METACLASS_$_AttendeeIdChangeTracker
_OBJC_METACLASS_$_CALAbstractEntity
_OBJC_METACLASS_$_CALAbstractView
_OBJC_METACLASS_$_CALActionValue
_OBJC_METACLASS_$_CALAddress
_OBJC_METACLASS_$_CALApplePropertiesFilter
_OBJC_METACLASS_$_CALAttachment
_OBJC_METACLASS_$_CALBag
_OBJC_METACLASS_$_CALBridgevCal
_OBJC_METACLASS_$_CALBusyTimeOccurrence
_OBJC_METACLASS_$_CALCancelFilter
_OBJC_METACLASS_$_CALChainedFilter
_OBJC_METACLASS_$_CALChangeTracker
_OBJC_METACLASS_$_CALClassificationTypeValue
_OBJC_METACLASS_$_CALColorModel
_OBJC_METACLASS_$_CALComment
_OBJC_METACLASS_$_CALDAVPublishOperation
_OBJC_METACLASS_$_CALDailyRecurrence
_OBJC_METACLASS_$_CALDate
_OBJC_METACLASS_$_CALDateOnly
_OBJC_METACLASS_$_CALDateTime
_OBJC_METACLASS_$_CALDirEntriesFilter
_OBJC_METACLASS_$_CALDuplicateFilter
_OBJC_METACLASS_$_CALDuration
_OBJC_METACLASS_$_CALDurationLocalization
_OBJC_METACLASS_$_CALEntity
_OBJC_METACLASS_$_CALEntityChangeTracker
_OBJC_METACLASS_$_CALEntityTypeSearchElement
_OBJC_METACLASS_$_CALEntityWithAlarmSearchElement
_OBJC_METACLASS_$_CALExportFilter
_OBJC_METACLASS_$_CALFTPPublishOperation
_OBJC_METACLASS_$_CALFilter
_OBJC_METACLASS_$_CALFloatingDateTime
_OBJC_METACLASS_$_CALFreeBusy
_OBJC_METACLASS_$_CALFreeBusyTime
_OBJC_METACLASS_$_CALIdentityManager
_OBJC_METACLASS_$_CALIndexSearchElement
_OBJC_METACLASS_$_CALInvitationPropertiesFilter
_OBJC_METACLASS_$_CALJournal
_OBJC_METACLASS_$_CALJournalOccurrence
_OBJC_METACLASS_$_CALKeychain
_OBJC_METACLASS_$_CALMethodValue
_OBJC_METACLASS_$_CALMonthlyRecurrence
_OBJC_METACLASS_$_CALMultipleOccurrencesView
_OBJC_METACLASS_$_CALMutableTimeRange
_OBJC_METACLASS_$_CALOccurrableEntity
_OBJC_METACLASS_$_CALOccurrence
_OBJC_METACLASS_$_CALOccurrencesCache
_OBJC_METACLASS_$_CALParticipationStatusParameter
_OBJC_METACLASS_$_CALPreconfiguredDetachDelegate
_OBJC_METACLASS_$_CALPredefinedValue
_OBJC_METACLASS_$_CALProperty
_OBJC_METACLASS_$_CALPropertyFilter
_OBJC_METACLASS_$_CALPropertyMultiValue
_OBJC_METACLASS_$_CALPropertyQuery
_OBJC_METACLASS_$_CALPropertyValue
_OBJC_METACLASS_$_CALPublishFilter
_OBJC_METACLASS_$_CALPublishOperation
_OBJC_METACLASS_$_CALPublisher
_OBJC_METACLASS_$_CALQuery
_OBJC_METACLASS_$_CALRecurID
_OBJC_METACLASS_$_CALRedBlackNode
_OBJC_METACLASS_$_CALRedBlackTree
_OBJC_METACLASS_$_CALRemotePublisher
_OBJC_METACLASS_$_CALRequestFilter
_OBJC_METACLASS_$_CALRequestStatus
_OBJC_METACLASS_$_CALRoleParameter
_OBJC_METACLASS_$_CALScheduleAgentParameter
_OBJC_METACLASS_$_CALScheduleStatusParameter
_OBJC_METACLASS_$_CALScriptUtils
_OBJC_METACLASS_$_CALSearchElement
_OBJC_METACLASS_$_CALSourceFactory
_OBJC_METACLASS_$_CALStatusTypeValue
_OBJC_METACLASS_$_CALSubComponentFilter
_OBJC_METACLASS_$_CALSubscribeFilter
_OBJC_METACLASS_$_CALTimeRange
_OBJC_METACLASS_$_CALTimeRangeSubstractionResult
_OBJC_METACLASS_$_CALTodo
_OBJC_METACLASS_$_CALTransparencyTypeValue
_OBJC_METACLASS_$_CALURLPublishOperation
_OBJC_METACLASS_$_CALURLPublisher
_OBJC_METACLASS_$_CALView
_OBJC_METACLASS_$_CALWeekDayNumber
_OBJC_METACLASS_$_CALWeekDuration
_OBJC_METACLASS_$_CALWeeklyRecurrence
_OBJC_METACLASS_$_CALYearlyRecurrence
_OBJC_METACLASS_$_CALvCALInputStream
_OBJC_METACLASS_$_CALvCALParseState
_OBJC_METACLASS_$_CALvCALParsedLine
_OBJC_METACLASS_$_CALvCALRecurrence
_OBJC_METACLASS_$_CalABListener
_OBJC_METACLASS_$_CalAbstractCDChangeTracker
_OBJC_METACLASS_$_CalAccountMonitor
_OBJC_METACLASS_$_CalAccountsProvider
_OBJC_METACLASS_$_CalAddressABGroupWrapper
_OBJC_METACLASS_$_CalAddressABPersonWrapper
_OBJC_METACLASS_$_CalAddressABRecordWrapper
_OBJC_METACLASS_$_CalAddressCDRecordWrapper
_OBJC_METACLASS_$_CalAddressLocationPreviousWrapper
_OBJC_METACLASS_$_CalAddressPreviousWrapper
_OBJC_METACLASS_$_CalAddressRecordWrapper
_OBJC_METACLASS_$_CalAddressWrapper
_OBJC_METACLASS_$_CalAlertChangeMonitor
_OBJC_METACLASS_$_CalArchiveFileWrapper
_OBJC_METACLASS_$_CalAttachmentCache
_OBJC_METACLASS_$_CalAttachmentsFilter
_OBJC_METACLASS_$_CalAutoCompleteOperation
_OBJC_METACLASS_$_CalAutoCompleteResults
_OBJC_METACLASS_$_CalAutocompleteAttendee
_OBJC_METACLASS_$_CalBackup
_OBJC_METACLASS_$_CalBadgeMonitor
_OBJC_METACLASS_$_CalBagChangeMonitor
_OBJC_METACLASS_$_CalBirthdayCalendarSource
_OBJC_METACLASS_$_CalBirthdayListener
_OBJC_METACLASS_$_CalCalDAVAuthenticationTask
_OBJC_METACLASS_$_CalCalDAVBasicTaskGroupWrapper
_OBJC_METACLASS_$_CalCalDAVCalendarInfoTaskGroupWrapper
_OBJC_METACLASS_$_CalCalDAVCalendarSource
_OBJC_METACLASS_$_CalCalDAVContainerSyncMismatch
_OBJC_METACLASS_$_CalCalDAVContainerSyncTaskGroupWrapper
_OBJC_METACLASS_$_CalCalDAVGetAccountPropertiesTaskWrapper
_OBJC_METACLASS_$_CalCalDAVInboxSyncTaskGroupWrapper
_OBJC_METACLASS_$_CalCalDAVSynchronousTaskGroup
_OBJC_METACLASS_$_CalCalDAVTaskManager
_OBJC_METACLASS_$_CalCertificateErrorHandler
_OBJC_METACLASS_$_CalChangeMonitor
_OBJC_METACLASS_$_CalChronometry
_OBJC_METACLASS_$_CalClientIDChangeTracker
_OBJC_METACLASS_$_CalClientProxy
_OBJC_METACLASS_$_CalConflictResults
_OBJC_METACLASS_$_CalDAVAccountIdChangeTracker
_OBJC_METACLASS_$_CalDAVAccountInfoProvider
_OBJC_METACLASS_$_CalDAVAccountRefreshQueueableOperation
_OBJC_METACLASS_$_CalDAVAddCalendarQueueableOperation
_OBJC_METACLASS_$_CalDAVAddSubscriptionCalendarQueueableOperation
_OBJC_METACLASS_$_CalDAVAddressToPrincipalOperation
_OBJC_METACLASS_$_CalDAVBasicAccountInfoProvider
_OBJC_METACLASS_$_CalDAVBulkSimpleTask
_OBJC_METACLASS_$_CalDAVCalendarQueueableOperation
_OBJC_METACLASS_$_CalDAVCalendarSource
_OBJC_METACLASS_$_CalDAVCalendarSplitDualTypeCalendarQueueableOperation
_OBJC_METACLASS_$_CalDAVChangeCalendarAffectsAvailabilityQueueableOperation
_OBJC_METACLASS_$_CalDAVChangePublishStatusCalendarQueueableOperation
_OBJC_METACLASS_$_CalDAVChangeRequestsConsumer
_OBJC_METACLASS_$_CalDAVChangeRequestsProducer
_OBJC_METACLASS_$_CalDAVClientInfoSentry
_OBJC_METACLASS_$_CalDAVDeleteDropBoxFileQueueableOperation
_OBJC_METACLASS_$_CalDAVDeleteDropBoxQueueableOperation
_OBJC_METACLASS_$_CalDAVDeleteEntityQueueableOperation
_OBJC_METACLASS_$_CalDAVDeleteInboxFileQueueableOperation
_OBJC_METACLASS_$_CalDAVDeleteNotificationCollectionFileQueueableOperation
_OBJC_METACLASS_$_CalDAVDownloadDropBoxFileQueueableOperation
_OBJC_METACLASS_$_CalDAVETagCache
_OBJC_METACLASS_$_CalDAVEntityQueueableOperation
_OBJC_METACLASS_$_CalDAVExpandGroupOperation
_OBJC_METACLASS_$_CalDAVExpandGroupQueueableOperation
_OBJC_METACLASS_$_CalDAVFreeBusyCache
_OBJC_METACLASS_$_CalDAVFreeBusyResponseReader
_OBJC_METACLASS_$_CalDAVKerberosHelper
_OBJC_METACLASS_$_CalDAVKerberosPrincipals
_OBJC_METACLASS_$_CalDAVLookupFreeBusyOperation
_OBJC_METACLASS_$_CalDAVMigrateToServerQueueableOperation
_OBJC_METACLASS_$_CalDAVMoveEntityQueueableOperation
_OBJC_METACLASS_$_CalDAVNotificationContainerSyncTaskGroupWrapper
_OBJC_METACLASS_$_CalDAVNotificationHandler
_OBJC_METACLASS_$_CalDAVOccurrenceChange
_OBJC_METACLASS_$_CalDAVOfficeHour
_OBJC_METACLASS_$_CalDAVOperationQueue
_OBJC_METACLASS_$_CalDAVPersistentQueueableOperation
_OBJC_METACLASS_$_CalDAVPrincipalPropertySearchOperation
_OBJC_METACLASS_$_CalDAVPrincipalResult
_OBJC_METACLASS_$_CalDAVQueueableOperation
_OBJC_METACLASS_$_CalDAVQueueableOperationRunLoopPumper
_OBJC_METACLASS_$_CalDAVRefreshDelegateListQueueableOperation
_OBJC_METACLASS_$_CalDAVRemoveCalendarQueueableOperation
_OBJC_METACLASS_$_CalDAVRemovePropertyQueueableOperation
_OBJC_METACLASS_$_CalDAVResource
_OBJC_METACLASS_$_CalDAVRetrieveSharedCalendarShareesTaskGroupTaskGroupWrapper
_OBJC_METACLASS_$_CalDAVRevertEntityQueueableOperation
_OBJC_METACLASS_$_CalDAVScanDropBoxQueueableOperation
_OBJC_METACLASS_$_CalDAVScanResponse
_OBJC_METACLASS_$_CalDAVScheduleChangesProperty
_OBJC_METACLASS_$_CalDAVScheduleEventQueueableOperation
_OBJC_METACLASS_$_CalDAVSession
_OBJC_METACLASS_$_CalDAVSetCalendarColorQueueableOperation
_OBJC_METACLASS_$_CalDAVSetDefaultAlarmQueueableOperation
_OBJC_METACLASS_$_CalDAVSetPropertyQueueableOperation
_OBJC_METACLASS_$_CalDAVSharedCalendarInvitationResponseQueueableOperation
_OBJC_METACLASS_$_CalDAVTaskManagerOperation
_OBJC_METACLASS_$_CalDAVUpdateShareesQueuableOperation
_OBJC_METACLASS_$_CalDAVUploadDropBoxFileQueueableOperation
_OBJC_METACLASS_$_CalDAVWriteEntityQueueableOperation
_OBJC_METACLASS_$_CalDateLocalization
_OBJC_METACLASS_$_CalDefaultDictionary
_OBJC_METACLASS_$_CalDelegateFoldersPermissions
_OBJC_METACLASS_$_CalDelegateHandler
_OBJC_METACLASS_$_CalDelegateUserInfo
_OBJC_METACLASS_$_CalDuplicateHandler
_OBJC_METACLASS_$_CalEmail
_OBJC_METACLASS_$_CalEntityDescription
_OBJC_METACLASS_$_CalEventOccurrence
_OBJC_METACLASS_$_CalEventOccurrenceCache
_OBJC_METACLASS_$_CalEventOccurrenceCacheData
_OBJC_METACLASS_$_CalExchangeAbstractWriteCalendarItemOperation
_OBJC_METACLASS_$_CalExchangeAddGrantedDelegateOperation
_OBJC_METACLASS_$_CalExchangeBasicAccountInfoProvider
_OBJC_METACLASS_$_CalExchangeCalendarSource
_OBJC_METACLASS_$_CalExchangeCreateAttachmentOperation
_OBJC_METACLASS_$_CalExchangeCreateCalendarItemOperation
_OBJC_METACLASS_$_CalExchangeCreateFolderOperation
_OBJC_METACLASS_$_CalExchangeCreateResponseOperation
_OBJC_METACLASS_$_CalExchangeCreateTaskOperation
_OBJC_METACLASS_$_CalExchangeDeleteAttachmentOperation
_OBJC_METACLASS_$_CalExchangeDeleteFolderOperation
_OBJC_METACLASS_$_CalExchangeDeleteItemOperation
_OBJC_METACLASS_$_CalExchangeDeleteOccurrenceItemOperation
_OBJC_METACLASS_$_CalExchangeErrorMessage
_OBJC_METACLASS_$_CalExchangeFreeBusyCache
_OBJC_METACLASS_$_CalExchangeGetAttachmentOperation
_OBJC_METACLASS_$_CalExchangeGetCalendarItemOperation
_OBJC_METACLASS_$_CalExchangeGetDeclinedCalendarItemOperation
_OBJC_METACLASS_$_CalExchangeGetDelegatesOperation
_OBJC_METACLASS_$_CalExchangeGetEffectiveRightsOperation
_OBJC_METACLASS_$_CalExchangeGetGrantedDelegatesOperation
_OBJC_METACLASS_$_CalExchangeGetItemOperation
_OBJC_METACLASS_$_CalExchangeGetMailboxOperation
_OBJC_METACLASS_$_CalExchangeGetTaskOperation
_OBJC_METACLASS_$_CalExchangeGetUserAvailabilityOperation
_OBJC_METACLASS_$_CalExchangeGrantedDelegateOperation
_OBJC_METACLASS_$_CalExchangeMoveItemOperation
_OBJC_METACLASS_$_CalExchangeOperation
_OBJC_METACLASS_$_CalExchangePersistentOperation
_OBJC_METACLASS_$_CalExchangeRemoveGrantedDelegateOperation
_OBJC_METACLASS_$_CalExchangeSession
_OBJC_METACLASS_$_CalExchangeSyncAccountOperation
_OBJC_METACLASS_$_CalExchangeSyncDeletedItemsFolderOperation
_OBJC_METACLASS_$_CalExchangeSyncFolderItemsOperation
_OBJC_METACLASS_$_CalExchangeTestConnectionOperation
_OBJC_METACLASS_$_CalExchangeUpdateCalendarItemOperation
_OBJC_METACLASS_$_CalExchangeUpdateFolderOperation
_OBJC_METACLASS_$_CalExchangeUpdateGrantedDelegatePermissionsOperation
_OBJC_METACLASS_$_CalExchangeUpdateTaskOperation
_OBJC_METACLASS_$_CalExhangeGetDelegeteFolderPermissionsOperation
_OBJC_METACLASS_$_CalFTPDeleteOperation
_OBJC_METACLASS_$_CalFTPGetOperation
_OBJC_METACLASS_$_CalFTPOperation
_OBJC_METACLASS_$_CalFTPPutOperation
_OBJC_METACLASS_$_CalFTPReadOperation
_OBJC_METACLASS_$_CalFTPWriteOperation
_OBJC_METACLASS_$_CalFileCDChangeTracker
_OBJC_METACLASS_$_CalFreeBusyCache
_OBJC_METACLASS_$_CalFreeBusyCacheManager
_OBJC_METACLASS_$_CalFreeBusyEventDetails
_OBJC_METACLASS_$_CalFreeBusyOperationInfo
_OBJC_METACLASS_$_CalGroupMembersCache
_OBJC_METACLASS_$_CalHTTPUserAgent
_OBJC_METACLASS_$_CalHolidayCalendarSubscriber
_OBJC_METACLASS_$_CalIMAPCalendarSource
_OBJC_METACLASS_$_CalLocalCalendarSource
_OBJC_METACLASS_$_CalMDQuery
_OBJC_METACLASS_$_CalMailMonitor
_OBJC_METACLASS_$_CalManagedAccount
_OBJC_METACLASS_$_CalManagedAlarm
_OBJC_METACLASS_$_CalManagedAttachment
_OBJC_METACLASS_$_CalManagedAttendee
_OBJC_METACLASS_$_CalManagedBirthdayCalendar
_OBJC_METACLASS_$_CalManagedCalDAVAccount
_OBJC_METACLASS_$_CalManagedCalDAVCalendar
_OBJC_METACLASS_$_CalManagedCalDAVError
_OBJC_METACLASS_$_CalManagedCalDAVPrincipal
_OBJC_METACLASS_$_CalManagedCalDAVSubscribedCalendar
_OBJC_METACLASS_$_CalManagedCalendar
_OBJC_METACLASS_$_CalManagedCalendarChangeRequest
_OBJC_METACLASS_$_CalManagedCalendarHomeChangeRequest
_OBJC_METACLASS_$_CalManagedCalendarItem
_OBJC_METACLASS_$_CalManagedCalendarSplitDualTypeChangeRequest
_OBJC_METACLASS_$_CalManagedCalendarUserAddress
_OBJC_METACLASS_$_CalManagedChangeRequest
_OBJC_METACLASS_$_CalManagedChangeRequestDependency
_OBJC_METACLASS_$_CalManagedComment
_OBJC_METACLASS_$_CalManagedDefaultAlarmSet
_OBJC_METACLASS_$_CalManagedDeleteDropBoxChangeRequest
_OBJC_METACLASS_$_CalManagedDiff
_OBJC_METACLASS_$_CalManagedDownloadDropBoxFileChangeRequest
_OBJC_METACLASS_$_CalManagedDropBoxFileOpChangeRequest
_OBJC_METACLASS_$_CalManagedError
_OBJC_METACLASS_$_CalManagedEvent
_OBJC_METACLASS_$_CalManagedExchangeAccount
_OBJC_METACLASS_$_CalManagedExchangeCalendar
_OBJC_METACLASS_$_CalManagedExchangeError
_OBJC_METACLASS_$_CalManagedExchangePrincipal
_OBJC_METACLASS_$_CalManagedExpandGroupChangeRequest
_OBJC_METACLASS_$_CalManagedGroup
_OBJC_METACLASS_$_CalManagedICSElementProperties
_OBJC_METACLASS_$_CalManagedIMAPCalendar
_OBJC_METACLASS_$_CalManagedIMAPGroup
_OBJC_METACLASS_$_CalManagedLocalCalendar
_OBJC_METACLASS_$_CalManagedLocalGroup
_OBJC_METACLASS_$_CalManagedLocation
_OBJC_METACLASS_$_CalManagedMessage
_OBJC_METACLASS_$_CalManagedMessageChangeRequest
_OBJC_METACLASS_$_CalManagedMessageContents
_OBJC_METACLASS_$_CalManagedMigrationGroup
_OBJC_METACLASS_$_CalManagedMoveEntityChangeRequest
_OBJC_METACLASS_$_CalManagedNode
_OBJC_METACLASS_$_CalManagedObject
_OBJC_METACLASS_$_CalManagedObjectContext
_OBJC_METACLASS_$_CalManagedObjectModel
_OBJC_METACLASS_$_CalManagedPersistentOperation
_OBJC_METACLASS_$_CalManagedPrincipal
_OBJC_METACLASS_$_CalManagedPublication
_OBJC_METACLASS_$_CalManagedPublicationError
_OBJC_METACLASS_$_CalManagedRecurrenceException
_OBJC_METACLASS_$_CalManagedRemoteCalendar
_OBJC_METACLASS_$_CalManagedScheduleChangeRequest
_OBJC_METACLASS_$_CalManagedSearchProperty
_OBJC_METACLASS_$_CalManagedSetDropBoxAclChangeRequest
_OBJC_METACLASS_$_CalManagedSharedCalendarInvitationResponseChangeRequest
_OBJC_METACLASS_$_CalManagedSharee
_OBJC_METACLASS_$_CalManagedShareeChangeRequest
_OBJC_METACLASS_$_CalManagedSource
_OBJC_METACLASS_$_CalManagedStore
_OBJC_METACLASS_$_CalManagedSubscriptionCalendar
_OBJC_METACLASS_$_CalManagedSubscriptionCalendarChangeRequest
_OBJC_METACLASS_$_CalManagedSubscriptionError
_OBJC_METACLASS_$_CalManagedSubscriptionGroup
_OBJC_METACLASS_$_CalManagedSubscriptionInfo
_OBJC_METACLASS_$_CalManagedTask
_OBJC_METACLASS_$_CalMeCardListener
_OBJC_METACLASS_$_CalNamedMutex
_OBJC_METACLASS_$_CalNetworkChangeNotifier
_OBJC_METACLASS_$_CalNotification
_OBJC_METACLASS_$_CalOperation
_OBJC_METACLASS_$_CalOperationQueue
_OBJC_METACLASS_$_CalPersistence
_OBJC_METACLASS_$_CalPersistenceMonitor
_OBJC_METACLASS_$_CalPersistentOperation
_OBJC_METACLASS_$_CalPersistentOperationProducer
_OBJC_METACLASS_$_CalPersistentStoreCoordinator
_OBJC_METACLASS_$_CalPreviousController
_OBJC_METACLASS_$_CalPropFindSynchronousTask
_OBJC_METACLASS_$_CalPublisherManager
_OBJC_METACLASS_$_CalRemoteCalendarSource
_OBJC_METACLASS_$_CalSQLCDChangeTracker
_OBJC_METACLASS_$_CalSession
_OBJC_METACLASS_$_CalSessionPool
_OBJC_METACLASS_$_CalSessionStateCache
_OBJC_METACLASS_$_CalSharedCalendarInviteMonitor
_OBJC_METACLASS_$_CalSingleSynchronousTask
_OBJC_METACLASS_$_CalSpotlight
_OBJC_METACLASS_$_CalSubscriptionCalendarSource
_OBJC_METACLASS_$_CalSubscriptionOperation
_OBJC_METACLASS_$_CalSubscriptionSession
_OBJC_METACLASS_$_CalSyncClearifier
_OBJC_METACLASS_$_CalTaskManager
_OBJC_METACLASS_$_CalTruthFileCreateDirectory
_OBJC_METACLASS_$_CalTruthFileDataWrite
_OBJC_METACLASS_$_CalTruthFileICSWrite
_OBJC_METACLASS_$_CalTruthFileOperation
_OBJC_METACLASS_$_CalTruthFileRemove
_OBJC_METACLASS_$_CalTruthFileStore
_OBJC_METACLASS_$_CalUnifiedPerson
_OBJC_METACLASS_$_CalUnrecognizedICSHelper
_OBJC_METACLASS_$_CalUserAlarmNotification
_OBJC_METACLASS_$_CalUserMessageNotification
_OBJC_METACLASS_$_CalUserNotificationCenter
_OBJC_METACLASS_$_CalUserNotificationCenterCache
_OBJC_METACLASS_$_CalUserNotificationCenterHelper
_OBJC_METACLASS_$_CalUserNotificationCenterListener
_OBJC_METACLASS_$_CalValidationError
_OBJC_METACLASS_$_CalVirtualSource
_OBJC_METACLASS_$_CalendarIdChangeTracker
_OBJC_METACLASS_$_CalendarItemMigratePlan
_OBJC_METACLASS_$_CalendarStore
_OBJC_METACLASS_$_CaliCalendarAnonymizer
_OBJC_METACLASS_$_CaliMIPCancelOperation
_OBJC_METACLASS_$_CaliMIPOperation
_OBJC_METACLASS_$_CaliMIPPersistDetailsOperation
_OBJC_METACLASS_$_CaliMIPReplyOperation
_OBJC_METACLASS_$_CaliMIPRequestOperation
_OBJC_METACLASS_$_CaliMIPSession
_OBJC_METACLASS_$_CaliTIPHandler
_OBJC_METACLASS_$_CaliTIPMessage
_OBJC_METACLASS_$_CoreAlarm
_OBJC_METACLASS_$_CoreAlarmOccurrence
_OBJC_METACLASS_$_CoreAlarmOccurrenceTrigger
_OBJC_METACLASS_$_CoreAlarmTrigger
_OBJC_METACLASS_$_CoreAlarmView
_OBJC_METACLASS_$_CoreAlarmsFilters
_OBJC_METACLASS_$_CoreAttendeeStateFilter
_OBJC_METACLASS_$_CoreCalendar
_OBJC_METACLASS_$_CoreCalendarSource
_OBJC_METACLASS_$_CoreCalendarUserTypeParameter
_OBJC_METACLASS_$_CoreCalendarsManager
_OBJC_METACLASS_$_CoreDisplayAlarm
_OBJC_METACLASS_$_CoreDisplayAlarmOccurrence
_OBJC_METACLASS_$_CoreEvent
_OBJC_METACLASS_$_CoreEventOccurrence
_OBJC_METACLASS_$_CoreMailAlarm
_OBJC_METACLASS_$_CoreMailAlarmOccurrence
_OBJC_METACLASS_$_CoreProcAlarm
_OBJC_METACLASS_$_CoreProcAlarmOccurrence
_OBJC_METACLASS_$_CoreRecurrenceRule
_OBJC_METACLASS_$_CoreSoundAlarm
_OBJC_METACLASS_$_CoreSoundAlarmOccurrence
_OBJC_METACLASS_$_CoreStructuredLocation
_OBJC_METACLASS_$_EKProtocolCalendar_Shared
_OBJC_METACLASS_$_EKProtocolEventOccurrence_Shared
_OBJC_METACLASS_$_EKProtocolObject_Shared
_OBJC_METACLASS_$_EKProtocolParticipant_Shared
_OBJC_METACLASS_$_EntityIdChangeTracker
_OBJC_METACLASS_$_EventIdChangeTracker
_OBJC_METACLASS_$_ExchangeAccountIdChangeTracker
_OBJC_METACLASS_$_IIABQuerySession
_OBJC_METACLASS_$_IICDQuerySession
_OBJC_METACLASS_$_IICDQuerySessionResults
_OBJC_METACLASS_$_IIQuerySession
_OBJC_METACLASS_$_IssueCounter
_OBJC_METACLASS_$_LocalCalendarDetails
_OBJC_METACLASS_$_OurOwnMutableNSDate
_OBJC_METACLASS_$_PublicationIdChangeTracker
_OBJC_METACLASS_$_RBNode
_OBJC_METACLASS_$_TaskIdChangeTracker
_PREV_ADDRESS_KEY
_PREV_DISPLAY_NAME_KEY
_PREV_FIRST_NAME_KEY
_PREV_INDIVIDUAL_TYPE
_PREV_LAST_NAME_KEY
_PREV_LOCATION_TYPE
_PREV_LOGIN_KEY
_PREV_RESOURCE_TYPE
_PREV_TIMESTAMP_KEY
_PREV_TYPE_KEY
_QueueChangedNotification
_QueueNSError
_QueueStartedNotification
_QueueStoppedNotification
_RefreshCalendarConflictNotification
_RemindersNotificationUpdateBadgeCount
_RemindersXPCTimerKey
_URLForNoMail
_UploadDropBoxFileQueueableType
__GetFormatAnd_d_FieldRangeFor_EEEd
__ISDAllocUUID
__ISDCreateUUID
__calColComp
__listContentsProperties
__sharedCALKeychain
_anonDescription
_anonEmail
_anonLocation
_anonName
_anonString
_anonSummary
_anonUID
_anonURNUID
_anonWebURL
_calFTPReadCallback
_calFTPWriteCallback
_calcdate_absoluteday
_calcdate_absoluteday_for_year
_calcdate_absoluteday_for_year_month
_calcdate_add_deltadate
_calcdate_add_seconds
_calcdate_day_in_month
_calcdate_day_in_year_for_month
_calcdate_day_month_in_year
_calcdate_daycount_in_month
_calcdate_delta_ymdhms_with_flags
_calcdate_diff_hms_and_return_day_carry
_calcdate_fill_ymd_with_absoluteday
_calcdate_is_after
_calcdate_is_before
_calcdate_is_equal
_calcdate_is_leap_year
_calcdate_normalize_hms
_calcdate_normalize_ymd
_calcdate_seconds_for_date
_calcdate_weekday
_calcdate_yearday
_checkOrCreatePath
_cleanupTempFiles
_clientIdChangeTracker
_compareWeekDay
_concatBufferWithCRLF
_createPath
_davCompatibleFilenameForFilename
_defaultIdTracker
_explodeEntityID
_explodeOccurrenceID
_forgeEntityID
_forgeOccurrenceID
_forgeOccurrenceIDFromParts
_forgeUID
_gSharedAnonymizedStrings
_gSharedAnonymizedStringsCount
_generateFilenameForUID
_getNewUID
_getStringLocalUUID
_getStringUUID
_iTIPErr
_iTIPLog
_iTIPLogv
_insureSet
_invalidateCachedEndDateOnOccurrence
_isMainApp
_kCALSTR_NIL_prop
_kCALSTR_XAPPLE_attachmentid_param
_kCALSTR_XAPPLE_auto_refresh_prop
_kCALSTR_XAPPLE_autoarchived_param
_kCALSTR_XAPPLE_calendar_color_prop
_kCALSTR_XAPPLE_changekey_prop
_kCALSTR_XAPPLE_ews_itemid_prop
_kCALSTR_XAPPLE_ews_permission_prop
_kCALSTR_XAPPLE_filename_param
_kCALSTR_XAPPLE_needs_server_confirmation_prop
_kCALSTR_XAPPLE_self_invited_param
_kCALSTR_XAPPLE_sort_order_prop
_kCALSTR_XCS_attendee_comment_prop
_kCALSTR_XCS_attendee_ref_param
_kCALSTR_XCS_dtstamp_param
_kCALSTR_XCS_private_comment_prop
_kCALSTR_XWR_alarmuid_prop
_kCALSTR_XWR_attendee_prop
_kCALSTR_XWR_byday_prop
_kCALSTR_XWR_byhour_prop
_kCALSTR_XWR_byminute_prop
_kCALSTR_XWR_bymonth_prop
_kCALSTR_XWR_bymonthday_prop
_kCALSTR_XWR_bysecond_prop
_kCALSTR_XWR_bysetpos_prop
_kCALSTR_XWR_byweekno_prop
_kCALSTR_XWR_byyearday_prop
_kCALSTR_XWR_cachedenddate_prop
_kCALSTR_XWR_caldesc_prop
_kCALSTR_XWR_calname_prop
_kCALSTR_XWR_caltype_prop
_kCALSTR_XWR_cancelid_prop
_kCALSTR_XWR_count_prop
_kCALSTR_XWR_dontschedule_prop
_kCALSTR_XWR_expiration_prop
_kCALSTR_XWR_iconinfo_prop
_kCALSTR_XWR_interval_prop
_kCALSTR_XWR_invitationid_prop
_kCALSTR_XWR_itatst_prop
_kCALSTR_XWR_itmscl_prop
_kCALSTR_XWR_itsent_prop
_kCALSTR_XWR_lang_prop
_kCALSTR_XWR_occdateid_param
_kCALSTR_XWR_occtrigger_prop
_kCALSTR_XWR_parent_prop
_kCALSTR_XWR_relcalid_prop
_kCALSTR_XWR_rsvpneeded_prop
_kCALSTR_XWR_template_prop
_kCALSTR_XWR_timezonehint_prop
_kCALSTR_XWR_until_prop
_kCALSTR_XWR_weekstart_prop
_kCALSTR_Xabuid_param
_kCALSTR_Xradius_param
_kCALSTR_Xtitle_param
_kCALSTR_acknowledged_prop
_kCALSTR_action_prop
_kCALSTR_altrep_param
_kCALSTR_attach_prop
_kCALSTR_attendee_prop
_kCALSTR_birthdayname_prop
_kCALSTR_byday_param
_kCALSTR_byhour_param
_kCALSTR_byminute_param
_kCALSTR_bymonth_param
_kCALSTR_bymonthday_param
_kCALSTR_bysecond_param
_kCALSTR_bysetpos_param
_kCALSTR_byweekno_param
_kCALSTR_byyearday_param
_kCALSTR_calendarserveraccess_prop
_kCALSTR_calscale_prop
_kCALSTR_categories_prop
_kCALSTR_class_prop
_kCALSTR_cn_param
_kCALSTR_comment_prop
_kCALSTR_completed_prop
_kCALSTR_contact_prop
_kCALSTR_count_param
_kCALSTR_created_prop
_kCALSTR_cutype_param
_kCALSTR_delfrom_param
_kCALSTR_delto_param
_kCALSTR_description_prop
_kCALSTR_dir_param
_kCALSTR_dropbox_prop
_kCALSTR_dtend_prop
_kCALSTR_dtstamp_prop
_kCALSTR_dtstart_prop
_kCALSTR_due_prop
_kCALSTR_duration_prop
_kCALSTR_email_param
_kCALSTR_encoding_param
_kCALSTR_exdate_prop
_kCALSTR_exrule_prop
_kCALSTR_fbtype_param
_kCALSTR_fmttype_param
_kCALSTR_freebusy_prop
_kCALSTR_geo_prop
_kCALSTR_ignore_on_restore_prop
_kCALSTR_interval_param
_kCALSTR_isyearlessbirthday_prop
_kCALSTR_language_param
_kCALSTR_lastmodified_prop
_kCALSTR_linkid_prop
_kCALSTR_location_prop
_kCALSTR_maskuid_prop
_kCALSTR_maxresults_prop
_kCALSTR_member_param
_kCALSTR_method_prop
_kCALSTR_mxaresultsize_prop
_kCALSTR_needs_reply_prop
_kCALSTR_notRelativeToTravel_prop
_kCALSTR_num_guests_param
_kCALSTR_organizer_prop
_kCALSTR_partstat_param
_kCALSTR_percentcomplete_prop
_kCALSTR_priority_prop
_kCALSTR_prodid_prop
_kCALSTR_query_prop
_kCALSTR_queryname_prop
_kCALSTR_range_param
_kCALSTR_rdate_prop
_kCALSTR_recurrenceid_prop
_kCALSTR_relatedto_prop
_kCALSTR_reltype_param
_kCALSTR_repeat_prop
_kCALSTR_requeststatus_prop
_kCALSTR_resources_prop
_kCALSTR_role_param
_kCALSTR_rrule_prop
_kCALSTR_rsvp_param
_kCALSTR_scheduleagent_param
_kCALSTR_scheduleforcesend_param
_kCALSTR_schedulestatus_param
_kCALSTR_scope_prop
_kCALSTR_sentby_param
_kCALSTR_sequence_prop
_kCALSTR_status_prop
_kCALSTR_summary_prop
_kCALSTR_target_prop
_kCALSTR_transp_prop
_kCALSTR_trigger_prop
_kCALSTR_trigrel_param
_kCALSTR_tzid_param
_kCALSTR_tzid_prop
_kCALSTR_tzname_prop
_kCALSTR_tzoffsetfrom_prop
_kCALSTR_tzoffsetto_prop
_kCALSTR_tzurl_prop
_kCALSTR_uid_prop
_kCALSTR_until_param
_kCALSTR_url_prop
_kCALSTR_valuetype_param
_kCALSTR_version_prop
_kCALSTR_weekstart_param
_kCALSTR_x_prop
_kCalMDItemCompleted
_kCalMDItemCompletionDate
_kCalMDItemFullDay
_kCalMDItemRecurrenceID
_kCalMDItemUID
_kGoingToSleepNotification
_kNetworkConfigurationDidChangeNotification
_kWokeUpNotification
_organizerFor
_popFromArray
_popNFromArray
_recurrenceFor
_seed
_setIsMainApp
_setViewsTimeZone
_shortCDIdentifier
_shortenCDIdentifier
_stringForCommitStatus
_stringForRefreshType
_tempAttachmentName
_utcTimeZone
_vcal_property_compare
_vcal_property_list
_vcal_property_list_num
_vcal_token_compare
_vcal_tokens_list
_vcal_tokens_list_num
_viewsTimeZone
_whitespaceAndNewlineCharacterSet
_AECreateDesc
_AEDisposeDesc
_AppSandboxUtilCalendarLockPathURLWithError
_BOMCopierCopyWithOptions
_BOMCopierFree
_BOMCopierNew
_BOMCopierSetFatalErrorHandler
_BOMCopierSetFatalFileErrorHandler
_BOMCopierSetUserData
_CALPrefAddHolidayCalendar
_CALPrefDefaultAlarmsEnabled
_CALPrefDisplayBirthdaysCalendar
_CALPrefOverlayCalendarIdentifier
_CALPreferences_overlayCalendarChangedNotification
_CDVExtractValuesFromRedirectString
_CDVHTTPStatusCodeFromStatusLine
_CDVHTTPStatusCodeRepresentsClientError
_CFAbsoluteTimeGetCurrent
_CFArrayAppendValue
_CFArrayCreateCopy
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetTypeID
_CFArrayGetValueAtIndex
_CFCalendarCopyCurrent
_CFDataGetBytePtr
_CFDataGetLength
_CFDateFormatterCopyProperty
_CFDateFormatterCreate
_CFDateFormatterCreateStringWithDate
_CFDateFormatterGetFormat
_CFDateFormatterSetFormat
_CFDateFormatterSetProperty
_CFDictionaryAddValue
_CFDictionaryCreate
_CFDictionaryCreateMutable
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFDictionaryGetValueIfPresent
_CFGetTypeID
_CFLocaleCopyCurrent
_CFLocaleGetValue
_CFMakeCollectable
_CFNumberGetValue
_CFPreferencesAppSynchronize
_CFPreferencesGetAppBooleanValue
_CFPreferencesGetAppIntegerValue
_CFPreferencesSetAppValue
_CFPreferencesSetValue
_CFPreferencesSynchronize
_CFReadStreamClose
_CFReadStreamCopyError
_CFReadStreamCopyProperty
_CFReadStreamCreateWithBytesNoCopy
_CFReadStreamCreateWithFTPURL
_CFReadStreamOpen
_CFReadStreamRead
_CFReadStreamScheduleWithRunLoop
_CFReadStreamSetClient
_CFReadStreamSetProperty
_CFReadStreamUnscheduleFromRunLoop
_CFRelease
_CFRunLoopAddSource
_CFRunLoopGetCurrent
_CFRunLoopPerformBlock
_CFRunLoopSourceInvalidate
_CFStringConvertEncodingToNSStringEncoding
_CFStringConvertIANACharSetNameToEncoding
_CFStringCreateWithBytes
_CFStringFind
_CFStringFindWithOptions
_CFStringGetLength
_CFStringGetSystemEncoding
_CFStringTrimWhitespace
_CFURLConnectionInvalidateConnectionCache
_CFURLCreateStringByAddingPercentEscapes
_CFUUIDCreate
_CFUUIDCreateString
_CFUserNotificationDisplayNotice
_CFWriteStreamClose
_CFWriteStreamCopyError
_CFWriteStreamCreateWithFTPURL
_CFWriteStreamOpen
_CFWriteStreamScheduleWithRunLoop
_CFWriteStreamSetClient
_CFWriteStreamSetProperty
_CFWriteStreamUnscheduleFromRunLoop
_CFWriteStreamWrite
_CGBitmapContextCreate
_CGBitmapContextCreateImage
_CGColorSpaceCreateWithName
_CGColorSpaceRelease
_CGContextRelease
_CGImageGetHeight
_CGImageGetWidth
_CSBackupSetItemExcluded
_CalAgentLinkNS_DBMachServiceName
_CalAgentLinkNS_DaemonFlagKey
_CalAgentLinkNS_ProxyMachServiceName
_CalAgentLinkNS_SeviceNameKey
_CalAgentLinkUserNotificationOperation_Action_DeleteAlarms
_CalAgentLinkUserNotificationOperation_Action_DeleteMessages
_CalAgentLinkUserNotificationOperation_Action_DeliverMessages
_CalAgentLinkUserNotificationOperation_Action_FindAndScheduleAlarms
_CalAgentLinkUserNotificationOperation_Action_ResolveBookmarks
_CalAgentLinkUserNotificationOperation_Action_ScheduleAlarms
_CalAgentLinkUserNotificationOperation_Action_StartRemindersNotificationCenterWidget
_CalDAVErrorDomain
_CalDAVHTTPHeader_XAppleDAVPushToken
_CalDAVPrincipalResultType_Group
_CalDAVPrincipalResultType_Person
_CalDAVPrincipalResultType_Resource
_CalDAVPrincipalResultType_Room
_CalDAVPrincipalResultType_Unknown
_CalFlagForProfiling
_CalFoundationNS_Log_Docktile
_CalGenerateUUID
_CalLogActual
_CalLogCurrentLevel
_CalLogWhiteList
_CloseComponent
_CloseResFile
_CoreDAVErrorDomain
_CoreDAVErrorItemKey
_CoreDAVHTTPHeader_Accept
_CoreDAVHTTPHeader_ContentType
_CoreDAVHTTPHeader_ETag
_CoreDAVHTTPHeader_Expect
_CoreDAVHTTPHeader_If
_CoreDAVHTTPHeader_IfMatch
_CoreDAVHTTPHeader_IfNoneMatch
_CoreDAVHTTPHeader_Location
_CoreDAVHTTPHeader_RetryAfter
_CoreDAVHTTPHeader_XWebLoginRequired
_CoreDAVHTTPHeaders
_CoreDAVHTTPStatusErrorDomain
_CreateTextEncoding
_CurResFile
_DisposeHandle
_EWSExchangeWebServicesErrorDomain
_EWSPropertyNameCalendarTimeZone
_EWSPropertyNameFolderColor
_EWSPropertyNameFolderOrder
_EWSPropertyNameItemReminderAction
_EWSPropertyNameItemReminderEmailAddress
_EWSPropertyNameItemReminderSound
_EWSPropertyNameItemReminderURL
_EWSPropertyNameStartLocation
_EWSPropertyNameStructuredLocation
_EWSPropertyNameTaskOrder
_EWSPropertyNameTravelTime
_EWSPropertySetIdApple
_EWSPropertyTag_PR_COMMENT
_EWSReminderActionAudio
_EWSReminderActionDisplay
_EWSReminderActionEmail
_EWSReminderActionProcedure
_FSOpenResFile
_FSPathMakeRef
_Get1IndResource
_GetHandleSize
_HLock
_HUnlock
_IAAccountCompare
_IAAccountDescriptionKey
_IAAccountTypeKey
_IACalendarServerAddressKey
_IAEmailAddressKey
_IAPluginIdentifierKey
_IOPMAssertionCreateWithDescription
_IOPMAssertionRelease
_IOPMGetUUID
_ISDSyncingWithOtherClients
_ISyncClientDisplayNameKey
_ISyncClientSyncAllEntitiesKey
_ISyncClientTypeApplication
_ISyncClientTypeKey
_ISyncDataClass_Calendars
_KRBAcquireTicket
_KRBCloseSession
_KRBCopyClientPrincipalInfo
_KRBCopyServicePrincipal
_KRBCreateSession
_KRBTestForExistingTicket
_LSFindApplicationForInfo
_LSOpenCFURLRef
_LSOpenURLsWithRole
_MDQueryCreate
_MDQueryDisableUpdates
_MDQueryEnableUpdates
_MDQueryExecute
_MDQueryGetAttributeValueOfResultAtIndex
_MDQueryGetResultCount
_MDQuerySetSearchScope
_NSAppleScriptErrorAppName
_NSAppleScriptErrorBriefMessage
_NSAppleScriptErrorMessage
_NSAppleScriptErrorNumber
_NSApplicationDidResignActiveNotification
_NSApplicationWillTerminateNotification
_NSCalendarIdentifierChinese
_NSCalendarIdentifierGregorian
_NSCalendarIdentifierHebrew
_NSCalendarIdentifierIslamic
_NSCalibratedRGBColorSpace
_NSClassFromString
_NSCocoaErrorDomain
_NSCurrentLocaleDidChangeNotification
_NSDefaultRunLoopMode
_NSDeletedObjectsKey
_NSDetailedErrorsKey
_NSEventTrackingRunLoopMode
_NSGenericException
_NSInferMappingModelAutomaticallyOption
_NSInsertedObjectsKey
_NSInternalInconsistencyException
_NSInvalidArgumentException
_NSInvalidatedAllObjectsKey
_NSLocalizedDescriptionKey
_NSLocalizedFailureReasonErrorKey
_NSLocalizedRecoverySuggestionErrorKey
_NSLog
_NSLogv
_NSManagedObjectContextDidSaveNotification
_NSManagedObjectContextObjectsDidChangeNotification
_NSManagedObjectContextWillSaveNotification
_NSMergeByPropertyObjectTrumpMergePolicy
_NSMigratePersistentStoresAutomaticallyOption
_NSOSStatusErrorDomain
_NSPOSIXErrorDomain
_NSPlainFileType
_NSRequestConcreteImplementation
_NSRunLoopCommonModes
_NSSQLitePragmasOption
_NSSQLiteStoreType
_NSSharingServiceNameComposeEmail
_NSSharingServiceParametersAccountHintKey
_NSStreamSocketSSLErrorDomain
_NSStringFromClass
_NSStringFromSelector
_NSSystemClockDidChangeNotification
_NSSystemTimeZoneDidChangeNotification
_NSTaskDidTerminateNotification
_NSTemporaryDirectory
_NSURLAuthenticationMethodHTTPBasic
_NSURLAuthenticationMethodHTTPDigest
_NSURLAuthenticationMethodNegotiate
_NSURLAuthenticationMethodOAuth
_NSURLErrorDomain
_NSURLErrorFailingURLErrorKey
_NSUpdatedObjectsKey
_NSXPCStoreType
_NSZoneFree
_NSZoneMalloc
_NSZoneRealloc
_NewHandle
_OBJC_CLASS_$_ABAddressBook
_OBJC_CLASS_$_ABGroup
_OBJC_CLASS_$_ABMonogramImageLoading
_OBJC_CLASS_$_ABMonogramOptions
_OBJC_CLASS_$_ABMutableMultiValue
_OBJC_CLASS_$_ABPerson
_OBJC_CLASS_$_ABRecord
_OBJC_CLASS_$_ABSearchElement
_OBJC_CLASS_$_ACAccountStore
_OBJC_CLASS_$_CALayer
_OBJC_CLASS_$_CLCircularRegion
_OBJC_CLASS_$_CLLocation
_OBJC_CLASS_$_CLLocationManager
_OBJC_CLASS_$_CNContactNameFormatter
_OBJC_CLASS_$_CNMutableContact
_OBJC_CLASS_$_CalAccumulatingQueue
_OBJC_CLASS_$_CalAgentLink
_OBJC_CLASS_$_CalAgentLinkAcceptCertificatesTemporarilyOperation
_OBJC_CLASS_$_CalAgentLinkLaunchExternalSyncOperation
_OBJC_CLASS_$_CalAgentLinkProcessChangeRequestsOperation
_OBJC_CLASS_$_CalAgentLinkQueueDebugOperationItem
_OBJC_CLASS_$_CalAgentLinkRequestCalendarPublishOperation
_OBJC_CLASS_$_CalAgentLinkScanDropboxOperation
_OBJC_CLASS_$_CalAgentLinkUserNotificationOperation
_OBJC_CLASS_$_CalClientLink
_OBJC_CLASS_$_CalDAVAddDropBoxAttachmentsTaskGroup
_OBJC_CLASS_$_CalDAVAddManagedAttachmentsTaskGroup
_OBJC_CLASS_$_CalDAVBulkUploadTaskGroup
_OBJC_CLASS_$_CalDAVCalendarColorItem
_OBJC_CLASS_$_CalDAVCalendarInfoSyncTaskGroup
_OBJC_CLASS_$_CalDAVCalendarInfoTaskGroup
_OBJC_CLASS_$_CalDAVCalendarItemData
_OBJC_CLASS_$_CalDAVCalendarQueryTask
_OBJC_CLASS_$_CalDAVCalendarSearchTask
_OBJC_CLASS_$_CalDAVCalendarServerInviteNotificationItem
_OBJC_CLASS_$_CalDAVCalendarServerInviteReplyItem
_OBJC_CLASS_$_CalDAVCalendarServerNotificationItem
_OBJC_CLASS_$_CalDAVCalendarServerResourceChangeDeletedElement
_OBJC_CLASS_$_CalDAVCalendarServerResourceChangeUpdatedElement
_OBJC_CLASS_$_CalDAVCalendarServerResourceChangedItem
_OBJC_CLASS_$_CalDAVCalendarServerUserItem
_OBJC_CLASS_$_CalDAVCalendarUserSearchTask
_OBJC_CLASS_$_CalDAVContainerChecksumSyncTaskGroup
_OBJC_CLASS_$_CalDAVContainerSyncTaskGroup
_OBJC_CLASS_$_CalDAVDeleteCalendarItemTask
_OBJC_CLASS_$_CalDAVFreeBusyLookupTask
_OBJC_CLASS_$_CalDAVGetAccountPropertiesTaskGroup
_OBJC_CLASS_$_CalDAVGetCalendarItemTask
_OBJC_CLASS_$_CalDAVGetDelegatesTaskGroup
_OBJC_CLASS_$_CalDAVGetGrantedDelegatesTaskGroup
_OBJC_CLASS_$_CalDAVGetOfficeHoursTaskGroup
_OBJC_CLASS_$_CalDAVGetPrincipalEmailDetailsTaskGroup
_OBJC_CLASS_$_CalDAVMkcalendarWithFallbackTaskGroup
_OBJC_CLASS_$_CalDAVModifyCalendarSharingLevelTaskGroup
_OBJC_CLASS_$_CalDAVModifySharedCalendarShareeListTaskGroup
_OBJC_CLASS_$_CalDAVMultiMoveWithFallbackTaskGroup
_OBJC_CLASS_$_CalDAVNotificationContainerSyncTaskGroup
_OBJC_CLASS_$_CalDAVPrincipalPropertySearchTask
_OBJC_CLASS_$_CalDAVPrincipalSearchPropertySet
_OBJC_CLASS_$_CalDAVPrincipalSearchSupport
_OBJC_CLASS_$_CalDAVPropPatchWithFallbackTaskGroup
_OBJC_CLASS_$_CalDAVPutCalendarItemTask
_OBJC_CLASS_$_CalDAVReplyToSharedCalendarInvitationTaskGroup
_OBJC_CLASS_$_CalDAVScheduleTask
_OBJC_CLASS_$_CalDAVSetOfficeHoursTaskGroup
_OBJC_CLASS_$_CalDAVSupportedCalendarComponentSets
_OBJC_CLASS_$_CalDAVUpdateFreeBusySetTaskGroup
_OBJC_CLASS_$_CalDAVUpdateGrantedDelegatesTaskGroup
_OBJC_CLASS_$_CalDAVUtils
_OBJC_CLASS_$_CalDateRange
_OBJC_CLASS_$_CalDefaults
_OBJC_CLASS_$_CalLimitingQueue
_OBJC_CLASS_$_CalLocation
_OBJC_CLASS_$_CalMeCard
_OBJC_CLASS_$_CalMessageTracer
_OBJC_CLASS_$_CalPreferences
_OBJC_CLASS_$_CalWellKnownPaths
_OBJC_CLASS_$_CoreDAVACEItem
_OBJC_CLASS_$_CoreDAVAction
_OBJC_CLASS_$_CoreDAVBulkRequestsSetItem
_OBJC_CLASS_$_CoreDAVCalendarServerEmailAddressSetItem
_OBJC_CLASS_$_CoreDAVCurrentUserPrincipalItem
_OBJC_CLASS_$_CoreDAVDeleteTask
_OBJC_CLASS_$_CoreDAVExpandPropertiesTask
_OBJC_CLASS_$_CoreDAVGetToFileTask
_OBJC_CLASS_$_CoreDAVHeadTask
_OBJC_CLASS_$_CoreDAVItem
_OBJC_CLASS_$_CoreDAVItemParserMapping
_OBJC_CLASS_$_CoreDAVItemWithHrefChildItem
_OBJC_CLASS_$_CoreDAVItemWithHrefChildren
_OBJC_CLASS_$_CoreDAVItemWithNoChildren
_OBJC_CLASS_$_CoreDAVLeafItem
_OBJC_CLASS_$_CoreDAVLogging
_OBJC_CLASS_$_CoreDAVMoveWithFallbackTaskGroup
_OBJC_CLASS_$_CoreDAVMultiStatusItem
_OBJC_CLASS_$_CoreDAVPostTask
_OBJC_CLASS_$_CoreDAVPrincipalItem
_OBJC_CLASS_$_CoreDAVPrincipalPropertySearchTask
_OBJC_CLASS_$_CoreDAVPropFindTask
_OBJC_CLASS_$_CoreDAVPropPatchTask
_OBJC_CLASS_$_CoreDAVPutTask
_OBJC_CLASS_$_CoreDAVResourceTypeItem
_OBJC_CLASS_$_CoreDAVTask
_OBJC_CLASS_$_CoreDAVUpdateACLTaskGroup
_OBJC_CLASS_$_CoreDAVXMLParser
_OBJC_CLASS_$_EWSAbsoluteMonthlyRecurrencePatternType
_OBJC_CLASS_$_EWSAbsoluteYearlyRecurrencePatternType
_OBJC_CLASS_$_EWSAcceptItemType
_OBJC_CLASS_$_EWSAddDelegateType
_OBJC_CLASS_$_EWSAttachmentIdType
_OBJC_CLASS_$_EWSAttendeeType
_OBJC_CLASS_$_EWSBodyType
_OBJC_CLASS_$_EWSCalendarFolderType
_OBJC_CLASS_$_EWSCalendarItemType
_OBJC_CLASS_$_EWSCalendarPermissionSetType
_OBJC_CLASS_$_EWSCalendarPermissionType
_OBJC_CLASS_$_EWSConstantValueType
_OBJC_CLASS_$_EWSContainsExpressionType
_OBJC_CLASS_$_EWSCreateAttachmentType
_OBJC_CLASS_$_EWSCreateFolderType
_OBJC_CLASS_$_EWSCreateItemType
_OBJC_CLASS_$_EWSDailyRecurrencePatternType
_OBJC_CLASS_$_EWSDeclineItemType
_OBJC_CLASS_$_EWSDelegatePermissionsType
_OBJC_CLASS_$_EWSDelegateUserType
_OBJC_CLASS_$_EWSDeleteAttachmentType
_OBJC_CLASS_$_EWSDeleteFolderFieldType
_OBJC_CLASS_$_EWSDeleteFolderType
_OBJC_CLASS_$_EWSDeleteItemFieldType
_OBJC_CLASS_$_EWSDeleteItemType
_OBJC_CLASS_$_EWSDistinguishedFolderIdType
_OBJC_CLASS_$_EWSDuration
_OBJC_CLASS_$_EWSEmailAddress
_OBJC_CLASS_$_EWSEmailAddressType
_OBJC_CLASS_$_EWSEndDateRecurrenceRangeType
_OBJC_CLASS_$_EWSExchangeServiceBinding
_OBJC_CLASS_$_EWSExpandDLType
_OBJC_CLASS_$_EWSExtendedPropertyType
_OBJC_CLASS_$_EWSFileAttachmentType
_OBJC_CLASS_$_EWSFindFolderType
_OBJC_CLASS_$_EWSFolderChangeType
_OBJC_CLASS_$_EWSFolderIdType
_OBJC_CLASS_$_EWSFolderResponseShapeType
_OBJC_CLASS_$_EWSFolderType
_OBJC_CLASS_$_EWSFreeBusyViewOptionsType
_OBJC_CLASS_$_EWSGetAttachmentType
_OBJC_CLASS_$_EWSGetDelegateType
_OBJC_CLASS_$_EWSGetFolderType
_OBJC_CLASS_$_EWSGetItemType
_OBJC_CLASS_$_EWSGetUserAvailabilityRequestType
_OBJC_CLASS_$_EWSIntervalRecurrencePatternBaseType
_OBJC_CLASS_$_EWSItemChangeType
_OBJC_CLASS_$_EWSItemIdType
_OBJC_CLASS_$_EWSItemResponseShapeType
_OBJC_CLASS_$_EWSMailboxData
_OBJC_CLASS_$_EWSMoveItemType
_OBJC_CLASS_$_EWSNoEndRecurrenceRangeType
_OBJC_CLASS_$_EWSNumberedRecurrenceRangeType
_OBJC_CLASS_$_EWSOccurrenceItemIdType
_OBJC_CLASS_$_EWSOrType
_OBJC_CLASS_$_EWSPathToExtendedFieldType
_OBJC_CLASS_$_EWSPathToUnindexedFieldType
_OBJC_CLASS_$_EWSPermissionSetType
_OBJC_CLASS_$_EWSPermissionType
_OBJC_CLASS_$_EWSRecurrenceType
_OBJC_CLASS_$_EWSRelativeMonthlyRecurrencePatternType
_OBJC_CLASS_$_EWSRelativeYearlyRecurrencePatternType
_OBJC_CLASS_$_EWSRemoveDelegateType
_OBJC_CLASS_$_EWSResolveNamesType
_OBJC_CLASS_$_EWSRestrictionType
_OBJC_CLASS_$_EWSSerializableTimeZone
_OBJC_CLASS_$_EWSSerializableTimeZoneTime
_OBJC_CLASS_$_EWSSetFolderFieldType
_OBJC_CLASS_$_EWSSetItemFieldType
_OBJC_CLASS_$_EWSSyncFolderItemsCreateOrUpdateType
_OBJC_CLASS_$_EWSSyncFolderItemsDeleteType
_OBJC_CLASS_$_EWSSyncFolderItemsReadFlagType
_OBJC_CLASS_$_EWSSyncFolderItemsType
_OBJC_CLASS_$_EWSTargetFolderIdType
_OBJC_CLASS_$_EWSTaskRecurrenceType
_OBJC_CLASS_$_EWSTaskType
_OBJC_CLASS_$_EWSTasksFolderType
_OBJC_CLASS_$_EWSTentativelyAcceptItemType
_OBJC_CLASS_$_EWSTimeZoneType
_OBJC_CLASS_$_EWSUpdateDelegateType
_OBJC_CLASS_$_EWSUpdateFolderType
_OBJC_CLASS_$_EWSUpdateItemType
_OBJC_CLASS_$_EWSUserIdType
_OBJC_CLASS_$_EWSWeeklyRecurrencePatternType
_OBJC_CLASS_$_IAAccount
_OBJC_CLASS_$_IAAccountCollector
_OBJC_CLASS_$_IAAccountSync
_OBJC_CLASS_$_IAGoogleAuthTokenManager
_OBJC_CLASS_$_IAPluginManager
_OBJC_CLASS_$_ICSAlarm
_OBJC_CLASS_$_ICSAttachment
_OBJC_CLASS_$_ICSAttendeeComment
_OBJC_CLASS_$_ICSAvailability
_OBJC_CLASS_$_ICSAvailable
_OBJC_CLASS_$_ICSByDayValue
_OBJC_CLASS_$_ICSCalendar
_OBJC_CLASS_$_ICSColor
_OBJC_CLASS_$_ICSComponent
_OBJC_CLASS_$_ICSDate
_OBJC_CLASS_$_ICSDateTimeUTCValue
_OBJC_CLASS_$_ICSDateTimeValue
_OBJC_CLASS_$_ICSDateValue
_OBJC_CLASS_$_ICSDocument
_OBJC_CLASS_$_ICSDuration
_OBJC_CLASS_$_ICSEvent
_OBJC_CLASS_$_ICSFreeBusy
_OBJC_CLASS_$_ICSRecurrenceRule
_OBJC_CLASS_$_ICSScheduleAgentParameter
_OBJC_CLASS_$_ICSScheduleStatusParameter
_OBJC_CLASS_$_ICSStructuredLocation
_OBJC_CLASS_$_ICSTimeZone
_OBJC_CLASS_$_ICSTodo
_OBJC_CLASS_$_ICSTravelDuration
_OBJC_CLASS_$_ICSTrigger
_OBJC_CLASS_$_ICSUserAddress
_OBJC_CLASS_$_ISyncManager
_OBJC_CLASS_$_ISyncSession
_OBJC_CLASS_$_IntlUtility
_OBJC_CLASS_$_NCWidgetController
_OBJC_CLASS_$_NSAppleEventDescriptor
_OBJC_CLASS_$_NSAppleScript
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCalendar
_OBJC_CLASS_$_NSCalendarDate
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSColorSpace
_OBJC_CLASS_$_NSCompoundPredicate
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateComponents
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSExpression
_OBJC_CLASS_$_NSExpressionDescription
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFileWrapper
_OBJC_CLASS_$_NSHTTPURLResponse
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSInvocationOperation
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMachBootstrapServer
_OBJC_CLASS_$_NSManagedObject
_OBJC_CLASS_$_NSManagedObjectContext
_OBJC_CLASS_$_NSManagedObjectModel
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableOrderedSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSMutableURLRequest
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPersistentStoreCoordinator
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSScriptSuiteRegistry
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSharingService
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTask
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLConnection
_OBJC_CLASS_$_NSURLCredential
_OBJC_CLASS_$_NSURLCredentialStorage
_OBJC_CLASS_$_NSURLRequest
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSUserNotification
_OBJC_CLASS_$_NSUserNotificationCenter
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSWorkspace
_OBJC_CLASS_$_PHXSource
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_METACLASS_$_CoreDAVPostTask
_OBJC_METACLASS_$_NSDate
_OBJC_METACLASS_$_NSDistributedNotificationCenter
_OBJC_METACLASS_$_NSEntityDescription
_OBJC_METACLASS_$_NSError
_OBJC_METACLASS_$_NSFileWrapper
_OBJC_METACLASS_$_NSManagedObject
_OBJC_METACLASS_$_NSManagedObjectContext
_OBJC_METACLASS_$_NSManagedObjectModel
_OBJC_METACLASS_$_NSNumber
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSPersistentStoreCoordinator
_OSACoerceToDesc
_OSACompile
_OSADispose
_OSAExecuteEvent
_OSALoad
_OSAScriptError
_OSAtomicCompareAndSwapInt
_OpenDefaultComponent
_ReleaseResource
_ResError
_SCDynamicStoreCopyKeyList
_SCDynamicStoreCopyValue
_SCDynamicStoreCreate
_SCDynamicStoreCreateRunLoopSource
_SCDynamicStoreKeyCreateNetworkGlobalEntity
_SCDynamicStoreKeyCreateNetworkInterface
_SCDynamicStoreKeyCreateNetworkInterfaceEntity
_SCDynamicStoreSetNotificationKeys
_SCNetworkCheckReachabilityByName
_SOAPErrorHTTPStatusKey
_SOAPWebServicesErrorDomain
_SecAccessCreate
_SecCertificateCopyData
_SecCertificateCreateWithData
_SecCopyErrorMessageString
_SecItemAdd
_SecItemCopyMatching
_SecItemDelete
_SecItemUpdate
_SecKeychainFindInternetPassword
_SecKeychainItemDelete
_SecKeychainItemModifyContent
_SecTaskCopyValuesForEntitlements
_SecTaskCreateFromSelf
_SecTrustedApplicationCreateApplicationGroup
_SleepQInstall
_SleepQRemove
_TECConvertText
_TECCreateConverter
_TECDisposeConverter
_UseResFile
_XPC_ACTIVITY_DELAY
_XPC_ACTIVITY_GRACE_PERIOD
_XPC_ACTIVITY_PRIORITY
_XPC_ACTIVITY_PRIORITY_UTILITY
_XPC_ACTIVITY_REPEATING
__Block_object_assign
__Block_object_dispose
__CFCopySystemVersionDictionary
__CFLocaleResetCurrent
__CFURLCredentialCreateForKerberosTicket
__LSCopyFileQuarantineProperties
__LSSetFileQuarantineProperties
__MDIndexingProgress
__MDQueryCreateQueryString
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSMethodExceptionProem
__Unwind_Resume
___CFConstantStringClassReference
___error
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__dispatch_queue_attr_concurrent
__executeSQL
__executeStatement
__kCFStreamPropertyFTPRemoveResource
__kCFSystemVersionBuildVersionKey
__kCFSystemVersionProductNameKey
__kCFSystemVersionProductVersionKey
__objc_empty_cache
__xpc_type_dictionary
_abort
_arc4random
_atexit
_bsearch
_cdCalendarContentType
_cdChecksumVersion1
_cdEventAndTodoComponentType
_cdEventComponentType
_cdTodoComponentType
_cdXMLAllDayEventDefaultAlarm
_cdXMLAutoprovisioned
_cdXMLCalDAVScheduleTag
_cdXMLCalDAVURI
_cdXMLCalendarDescription
_cdXMLCalendarFreeBusySet
_cdXMLCalendarOrder
_cdXMLCalendarServerCalendarPublic
_cdXMLCalendarServerDropboxURL
_cdXMLCalendarServerGetCTag
_cdXMLCalendarServerInviteAccepted
_cdXMLCalendarServerInviteDeclined
_cdXMLCalendarServerInviteDeleted
_cdXMLCalendarServerInviteInvalid
_cdXMLCalendarServerInviteNoResponse
_cdXMLCalendarServerInviteNotification
_cdXMLCalendarServerInviteReply
_cdXMLCalendarServerNotification
_cdXMLCalendarServerPublishCalendar
_cdXMLCalendarServerRead
_cdXMLCalendarServerReadFreeBusy
_cdXMLCalendarServerReadWrite
_cdXMLCalendarServerReadWriteSchedule
_cdXMLCalendarServerResourceChanged
_cdXMLCalendarServerSource
_cdXMLCalendarServerSubscribedStripAlarms
_cdXMLCalendarServerSubscribedStripAttachments
_cdXMLCalendarServerSubscribedStripTodos
_cdXMLCalendarServerUID
_cdXMLCalendarServerURI
_cdXMLCalendarServerUnpublishCalendar
_cdXMLCalendarTimeZone
_cdXMLCollection
_cdXMLCurrentUserPrincipal
_cdXMLDAVURI
_cdXMLDisplayName
_cdXMLExpandedGroupMemberSet
_cdXMLGetContentType
_cdXMLGetETag
_cdXMLHREF
_cdXMLLanguageCode
_cdXMLLocationCode
_cdXMLMMeBulkRequests
_cdXMLMMeDAVURI
_cdXMLMultiStatus
_cdXMLOpaque
_cdXMLPrincipalCollectionSet
_cdXMLPrincipalURL
_cdXMLQuotaAvailable
_cdXMLQuotaUsed
_cdXMLRefreshRate
_cdXMLResourceType
_cdXMLScheduleCalendarTransp
_cdXMLScheduleDefaultCalendarURL
_cdXMLSubscribed
_cdXMLTimedEventDefaultAlarm
_cdXMLTransparent
_cdXMLiCalURI
_dispatch_after
_dispatch_async
_dispatch_barrier_sync
_dispatch_get_global_queue
_dispatch_group_async
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_notify
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_release
_dispatch_resume
_dispatch_retain
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_set_target_queue
_dispatch_suspend
_dispatch_sync
_dispatch_time
_errorForXPCTransport
_exit
_exp2
_floor
_free
_geteuid
_getpid
_iCalInvitationNotificationsDisabledKey
_iCalSharedCalendarNotificationsDisabledKey
_kABAlternateBirthdayComponentsProperty
_kABBirthdayComponentsProperty
_kABCalendarURIsProperty
_kABDatabaseChangedExternallyNotification
_kABDeletedRecords
_kABEmailProperty
_kABEmailWorkLabel
_kABFirstNamePhoneticProperty
_kABFirstNameProperty
_kABGroupNameProperty
_kABInsertedRecords
_kABIsPreferredForNameProperty
_kABLastNamePhoneticProperty
_kABLastNameProperty
_kABLinkIdProperty
_kABMiddleNameProperty
_kABNicknameProperty
_kABOrganizationProperty
_kABPersonFlags
_kABUIDProperty
_kABUpdatedRecords
_kCDVRedirectURLKey
_kCFAllocatorDefault
_kCFAllocatorNull
_kCFBooleanFalse
_kCFBooleanTrue
_kCFBundleVersionKey
_kCFDateFormatterTimeZone
_kCFErrorDomainCFNetwork
_kCFFTPStatusCodeKey
_kCFPreferencesCurrentHost
_kCFPreferencesCurrentUser
_kCFRunLoopCommonModes
_kCFRunLoopDefaultMode
_kCFStreamPropertyFTPFetchResourceInfo
_kCFStreamPropertyFTPPassword
_kCFStreamPropertyFTPResourceSize
_kCFStreamPropertyFTPUserName
_kCFTypeArrayCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCGColorSpaceGenericRGB
_kCalDAVDoesNotSupportCalendarCreation
_kIACalendarPluginID
_kIAFacebookPluginID
_kIAGooglePluginID
_kIAProviderExchange
_kIAProviderFacebook
_kIAProviderICal
_kIAQQPluginID
_kIAServiceCalDAV
_kIAServiceExchangeCalendar
_kICSSTR_XAPPLE_autoarchived_param
_kICSSTR_XAPPLE_default_alarm
_kICSSTR_XAPPLE_dontschedule_prop
_kICSSTR_XAPPLE_dropbox_prop
_kICSSTR_XAPPLE_etag
_kICSSTR_XAPPLE_ews_attachmentid_param
_kICSSTR_XAPPLE_ews_busystatus_prop
_kICSSTR_XAPPLE_ews_changekey_prop
_kICSSTR_XAPPLE_ews_itemid_prop
_kICSSTR_XAPPLE_ews_needsserverconfirmation_prop
_kICSSTR_XAPPLE_ews_permission_prop
_kICSSTR_XAPPLE_filename_param
_kICSSTR_XAPPLE_local_default_alarm
_kICSSTR_XAPPLE_proximity_prop
_kICSSTR_XAPPLE_routing_param
_kICSSTR_XAPPLE_scheduletag
_kICSSTR_XAPPLE_serverFilename
_kICSSTR_XAPPLE_sort_order_prop
_kICSSTR_XAPPLE_structured_location_prop
_kICSSTR_XAPPLE_travel_default_alarm
_kICSSTR_XAPPLE_travel_duration
_kICSSTR_XAPPLE_travel_start
_kICSSTR_XCS_attendee_comment_prop
_kICSSTR_XCS_attendee_ref_param
_kICSSTR_XCS_dtstamp_param
_kICSSTR_XCS_email_param
_kICSSTR_XCS_private_comment_prop
_kICSSTR_XWR_alarmuid_prop
_kICSSTR_XWR_itatst_prop
_kICSSTR_XWR_itmscl_prop
_kICSSTR_XWR_itsent_prop
_kICSSTR_XWR_rsvpneeded_prop
_kICSSTR_Xaddress_param
_kICSSTR_Xapple_abuid_param
_kICSSTR_Xapple_radius_param
_kICSSTR_Xdisplayname_param
_kICSSTR_Xtitle_param
_kICSSTR_acknowledged_prop
_kICSSTR_action_prop
_kICSSTR_attach_prop
_kICSSTR_attendee_prop
_kICSSTR_class_prop
_kICSSTR_cn_param
_kICSSTR_completed_prop
_kICSSTR_created_prop
_kICSSTR_cutype_param
_kICSSTR_description_prop
_kICSSTR_dtend_prop
_kICSSTR_dtstamp_prop
_kICSSTR_dtstart_prop
_kICSSTR_due_prop
_kICSSTR_duration_prop
_kICSSTR_email_param
_kICSSTR_exdate_prop
_kICSSTR_fmttype_param
_kICSSTR_ignore_on_restore_prop
_kICSSTR_location_prop
_kICSSTR_managed_filename_param
_kICSSTR_managed_id_param
_kICSSTR_needs_reply_prop
_kICSSTR_none_trigger_value
_kICSSTR_organizer_prop
_kICSSTR_partstat_param
_kICSSTR_percentcomplete_prop
_kICSSTR_priority_prop
_kICSSTR_recurrenceid_prop
_kICSSTR_relatedto_prop
_kICSSTR_role_param
_kICSSTR_rrule_prop
_kICSSTR_rsvp_param
_kICSSTR_scheduleagent_param
_kICSSTR_scheduleforcesend_param
_kICSSTR_sequence_prop
_kICSSTR_status_cancelled
_kICSSTR_status_completed
_kICSSTR_status_confirmed
_kICSSTR_status_needsaction
_kICSSTR_status_prop
_kICSSTR_status_tentative
_kICSSTR_summary_prop
_kICSSTR_transp_prop
_kICSSTR_trigger_prop
_kICSSTR_tzid_param
_kICSSTR_uid_prop
_kICSSTR_url_prop
_kICSSymbolicColorBlue
_kICSSymbolicColorBrown
_kICSSymbolicColorCustom
_kICSSymbolicColorGreen
_kICSSymbolicColorOrange
_kICSSymbolicColorPurple
_kICSSymbolicColorRed
_kICSSymbolicColorYellow
_kMDItemComment
_kMDItemContactKeywords
_kMDItemContentType
_kMDItemCoverage
_kMDItemTitle
_kMDQueryStringMatchAllMetadataOrContent
_kSCCompAnyRegex
_kSCDynamicStoreDomainState
_kSCDynamicStorePropNetInterfaces
_kSCEntNetDNS
_kSCEntNetIPv4
_kSCEntNetProxies
_kSecAttrAccess
_kSecAttrAccessGroup
_kSecAttrAccount
_kSecAttrAuthenticationType
_kSecAttrAuthenticationTypeDefault
_kSecAttrPath
_kSecAttrPort
_kSecAttrProtocol
_kSecAttrProtocolFTP
_kSecAttrProtocolHTTP
_kSecAttrProtocolHTTPS
_kSecAttrServer
_kSecAttrService
_kSecAttrSynchronizable
_kSecClass
_kSecClassGenericPassword
_kSecClassInternetPassword
_kSecMatchLimit
_kSecMatchLimitOne
_kSecReturnAttributes
_kSecReturnData
_kSecValueData
_kXAppleAlarmProxArrive
_kXAppleAlarmProxDepart
_malloc
_memcpy
_mt_log_calendar_account_refresh_2
_mt_log_calendar_account_types
_mt_log_calendar_deep_refresh_2
_mt_log_calendar_put_failure
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic
_objc_setProperty_nonatomic_copy
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_random
_realloc
_rint
_sleep
_sqlite3_bind_int
_sqlite3_bind_text
_sqlite3_close
_sqlite3_column_int
_sqlite3_column_text
_sqlite3_errmsg
_sqlite3_finalize
_sqlite3_open
_sqlite3_prepare
_sqlite3_reset
_srandom
_srandomdev
_sscanf
_strcasecmp
_strchr
_strcmp
_strdup
_strerror
_strlcat
_strlen
_strtol
_u_isUAlphabetic
_u_isUWhiteSpace
_u_ispunct
_u_uastrcpy
_ucal_close
_ucal_getDayOfWeekType
_ucal_open
_ucal_setDefaultTimeZone
_udtitvfmt_close
_udtitvfmt_format
_udtitvfmt_open
_usleep
_xpc_activity_copy_criteria
_xpc_activity_register
_xpc_activity_unregister
_xpc_dictionary_create
_xpc_dictionary_get_bool
_xpc_dictionary_get_string
_xpc_dictionary_set_bool
_xpc_dictionary_set_int64
_xpc_dictionary_set_string
_xpc_get_type
_xpc_release
_xpc_set_event
_xpc_transaction_begin
_xpc_transaction_end
dyld_stub_binder
