//
//  QMSearchProtocols.h
//  Q-municate
//
//  Created by Vitaliy Gorbachov on 3/2/16.
//  Copyright © 2016 Quickblox. All rights reserved.
//

@class QMSearchDataSource;

@protocol QMSearchProtocol <NSObject>

@optional
- (QMSearchDataSource *)searchDataSource;

@end

@protocol QMLocalSearchDataSourceProtocol <QMSearchProtocol>

@property (strong, nonatomic) NSMutableArray *contacts;
@property (strong, nonatomic) NSMutableArray *dialogs;

@end

@protocol QMGlobalSearchDataSourceProtocol <QMSearchProtocol>

@end

@protocol QMNewMessageSearchDataSourceProtocol <QMSearchProtocol>

@optional
/**
 *  User at index path.
 *
 *  @param indexPath index path
 *
 *  @return user that is existent at a specific index path
 */
- (QBUUser *)userAtIndexPath:(NSIndexPath *)indexPath;

@end
