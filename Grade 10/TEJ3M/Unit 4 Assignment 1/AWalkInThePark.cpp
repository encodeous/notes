/*
 * MIT License
 *
 * Copyright (c) 2020 Adam Chen
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *
 * Name: Adam Chen
 * Teacher: Mr. Naccarato
 * Date: 10/3/2020
 * Summary: "A Walk In the park" - Unit 4 Programming Assignment
 */
// includes
#include <iostream>
#include <vector>
#include <map>
using namespace std;
// A structure describing the information needed for a user choice, and the connection to another node
struct connection
{
    // The message displayed
    string message;
    // The node id
    int id;
};
// A Map storing the node information
map<int, string> nm;
// Preprocessor macros allowing for easier/shorter initialization
#define nmp(x, y) nm[x] = y
#define add(x, y, z) adj[x].push_back({z, y});
// Declaring an adjacency list of sufficient size to allow the graph to be initialized
vector<connection> adj[100];
// Displays a nice message when you reach a node
void print_node(int x)
{
    // Print node message
    printf("\n%s\n\n", nm[x].c_str());
    for (int i = 1; i <= adj[x].size(); i++)
    {
        // Output options
        printf("[%d]: %s\n", i, adj[x][i - 1].message.c_str());
    }
    fflush(stdout);
}
void execute_story()
{
    // Default to node 1
    int node = 1;
    while (true)
    {
        // success allows for input re-selection after an error or invalid input
        bool success = false;
        // current selection
        int sel = 0;
        while (!success)
        {
            // calls the print_node function and prints the current node
            print_node(node);
            // if the current node has an out-degree of 0, it is an ending node
            if (adj[node].empty())
                break;
            // Prompt for input
            printf("Your Selection: ");
            fflush(stdout);
            // read input
            string s;
            cin >> s;
            try
            {
                // parse string
                int x = stoi(s);
                // check if bounds are valid
                if (x >= 1 && x <= adj[node].size())
                {
                    // update success and current selection
                    success = true;
                    sel = x;
                }
                else
                {
                    // Throw error to indicate wrong selection
                    throw invalid_argument("");
                }
            }
            catch (invalid_argument &e)
            {
                // Tell the user that the input is invalid.
                printf("Invalid Selection, Please try again...\n");
                fflush(stdout);
            }
            catch (out_of_range &e)
            {
                // Tell the user that the input is invalid.
                printf("Invalid Selection, Please try again...\n");
                fflush(stdout);
            }
        }
        // when selection == 0, it means that there was no selection. Due to the requirement of a selection, this means the node is an ending node
        if (sel == 0)
            break;
        // Move to the next node
        node = adj[node][sel - 1].id;
    }
    // Prompt to the user that the story is finished
    printf("Story Finished. Press Enter to Exit, press r to restart from the beginning to explore other branches.\n");
    fflush(stdout);
    // Erases the stray \n from the previous user input;
    getchar();
    // Scan next character until new-line or r
    char c = getchar();
    while (c != '\n' && c != 'r')
        c = getchar();
    if (c == 'r')
    {
        // restart story
        execute_story();
    }
}
int main()
{
    // Begin declaring node message data
    nmp(1, "You feel tired after sitting at home for the entire day due to online classes. So you decide to go take a walk in the park. The park is very large, and there are many parts you can visit. You first walk over to:");
    nmp(2, "You reach the playground to find it deserted...");
    nmp(3, "You haven't walked for 30 seconds, and you hear a deafening crash and you see a distant lightning bolt!");
    nmp(4, "You arrive at the woods. You look around... This place looks haunted.");
    nmp(5, "At last, you have reached your front door... You reach in your pocket, but to your dismay, your keys are missing");
    nmp(6, "You look at your phone, there-was a weather warning. It read: 'Warning! Severe rain and dangerous winds expected!'");
    nmp(7, "The moment you take a step, thunder breaks out, and you knew that you should have went home to get your umbrella.");
    nmp(8, "The note reads: In the haunted forest, there lies a magical secret...");
    nmp(23, "In an instant, a bolt of lightning came down from the sky and you die");
    nmp(12, "Under the roof, you sit and wait for the rain to pass... You hear distant rumbles of lightning, and the wind is blowing through your hair.");
    nmp(13, "Unbeknownst to you... behind you there was a bear, it was too late, and the bear had killed you.");
    nmp(15, "These prints lead to a concealed cave. In the cave you see glowing rocks.");
    nmp(58, "To your horror... At the mouth of the cave, came a bone chilling roar, and the bear charged at you...");
    nmp(16, "You climb onto the tree to find a squirrel on the top. Could the squirrel have made that sound?");
    nmp(65, "You stumble and fall, in a few days, you wake up in a hospital bed.");
    nmp(19, "Just as you started prying the window, you hear a siren behind you. It was a police officer.");
    nmp(74, "After a while the nice officer gets you in your cozy home... Wow that was an adventure.");
    nmp(75, "The officer saw you trying to break into a house. Despite saying that this was your own house, they arrest you.");
    nmp(20, "To your surprise, the backyard door was unlocked, and you walk into your cozy home. What an adventure you had");
    // Begin declaring edges/connections between each node
    add(1, 2, "You walk over to the playground");
    add(2, 1, "You head back where you came from");
    add(2, 8, "You notice a handwritten note on the ground and pick it up.");
    add(2, 6, "You feel a buzz in your pocket. It was your phone-you check your phone");
    add(2, 7, "You look up, there-a sign reading 'Play-ground closed do to coronavius'... You head back to where you came from.");
    add(6, 5, "You go home for cover");
    add(6, 23, "You walk around like a fool, who cares about some rain and wind?");
    add(6, 3, "Those weather reports are never accurate! You think to yourself. Just keep walking...");
    add(7, 5, "You dash home for cover");
    add(7, 4, "You head towards those trees hoping that you wont get wet");
    add(7, 3, "Who cares about getting a little wet anyways! Just keep taking your relaxing walk");
    add(8, 2, "This note must be some kid fooling around, theres nothing in the forest and you should just leave the paper on the ground.");
    add(8, 4, "You head to the forest...");
    add(1, 3, "You keep on walking, you just want to stretch your legs.");
    add(3, 4, "You look left, and right. The only thing that can keep you dry from the rain are those trees.");
    add(3, 23, "You remember that you haven't taken a shower in over 4 years. This rain will clean you up real good!");
    add(3, 12, "There is a park gazebo not too far from here... maybe you can sprint there to wait for the rain to pass...");
    add(12, 6, "After sitting for a while, you decide to check your phone.");
    add(12, 12, "You keep waiting...");
    add(12, 5, "This rain never seems to end... Maybe you should head home.");
    add(1, 4, "You feel like you want to explore someplace you have never been before, so you venture to the woods");
    add(4, 13, "The rain starts pouring... You dont want to get wet, so you stay in the same place");
    add(4, 15, "You look down, and to your surprise, you see bear prints. You decide to follow them.");
    add(4, 16, "There is a rustle above your head... Some kind of animal is moving about ontop of you, so you decide to climb up the tree and check");
    add(15, 58, "You walk in the cave to explore. No one has been here for years...");
    add(15, 5, "The bear might come back at any second! So you decide to go back to the safety of your home...");
    add(16, 65, "You decide to climb higher to find out...");
    add(16, 65, "That must have been a squirrel, so you decide to climb down the tree!");
    add(1, 5, "You feel a drop of rain on your face, it is better to go home and get an umbrella.");
    add(5, 23, "You go back to the park to search for the key, maybe you dropped it somewhere.");
    add(5, 19, "You try to pry open a window to get in.");
    add(5, 20, "You look around to see if a window or door is unlocked");
    add(19, 74, "You explain to the officer that you are locked out of your home");
    add(19, 75, "You keep on prying...");
    execute_story();
    return 0;
}