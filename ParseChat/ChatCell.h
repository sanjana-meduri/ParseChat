//
//  ChatCell.h
//  ParseChat
//
//  Created by Sanjana Meduri on 7/6/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *messageField;
@property (weak, nonatomic) IBOutlet UILabel *usernameField;
@end

NS_ASSUME_NONNULL_END
